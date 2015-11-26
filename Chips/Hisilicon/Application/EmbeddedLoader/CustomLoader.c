#include "CustomLoader.h"

EFI_STATUS
PreparePlatformHardware (
  VOID
  )
{
    //Note: Interrupts will be disabled by the GIC driver when ExitBootServices() will be called.

    // Clean before Disable else the Stack gets corrupted with old data.
    ArmCleanDataCache ();

    LlcCleanInvalidate ();

    ArmDisableDataCache ();
    
    // Invalidate all the entries that might have snuck in.
    ArmInvalidateDataCache ();

    // Disable and invalidate the instruction cache
    ArmDisableInstructionCache ();
    ArmInvalidateInstructionCache ();

    // Turn off MMU
    ArmDisableMmu();

    return EFI_SUCCESS;
}

VOID
ESL_Start_OS (
  )
{
    EFI_STATUS Status;
    UINTN     Reg_Value;
    ESL_LINUX LinuxKernel = (ESL_LINUX)(0x80000); 

    if(!PcdGet32(PcdIsMPBoot))
    {
        DEBUG((EFI_D_ERROR,"Update FDT\n"));
        Status = EFIFdtUpdate(0x06000000);
        if(EFI_ERROR(Status))
        {
            DEBUG((EFI_D_ERROR,"EFIFdtUpdate ERROR\n"));
            goto Exit;
        }
    }
    DEBUG((EFI_D_ERROR, "[%a]:[%dL] Start to boot Linux\n", __FUNCTION__, __LINE__));

    SmmuConfigForLinux();

    ITSCONFIG();

    if(PcdGet32(PcdIsMPBoot))
    {
        *(volatile UINT32 *)(0x60016220)   = 0x7;
        *(volatile UINT32 *)(0x60016230)   = 0x40016260;
        *(volatile UINT32 *)(0x60016234)   = 0X0;
        *(volatile UINT32 *)(0x60016238)   = 0x60016260;
        *(volatile UINT32 *)(0x6001623C)   = 0x400;
        *(volatile UINT32 *)(0x60016240)   = 0x40016260;
        *(volatile UINT32 *)(0x60016244)   = 0x400;

        *(volatile UINT32 *)(0x40016220)   = 0x7;
        *(volatile UINT32 *)(0x40016230)   = 0x60016260;
        *(volatile UINT32 *)(0x40016234)   = 0X0;
        *(volatile UINT32 *)(0x40016238)   = 0x60016260;
        *(volatile UINT32 *)(0x4001623C)   = 0x400;
        *(volatile UINT32 *)(0x40016240)   = 0x40016260;
        *(volatile UINT32 *)(0x40016244)   = 0x400;

        *(volatile UINT32 *)(0x60016220 + S1_BASE)   = 0x7;
        *(volatile UINT32 *)(0x60016230 + S1_BASE)   = 0x40016260;
        *(volatile UINT32 *)(0x60016234 + S1_BASE)   = 0X0;
        *(volatile UINT32 *)(0x60016238 + S1_BASE)   = 0x60016260;
        *(volatile UINT32 *)(0x6001623C + S1_BASE)   = 0x0;
        *(volatile UINT32 *)(0x60016240 + S1_BASE)   = 0x40016260;
        *(volatile UINT32 *)(0x60016244 + S1_BASE)   = 0x400;

        *(volatile UINT32 *)(0x40016220 + S1_BASE)   = 0x7;
        *(volatile UINT32 *)(0x40016230 + S1_BASE)   = 0x60016260;
        *(volatile UINT32 *)(0x40016234 + S1_BASE)   = 0X0;
        *(volatile UINT32 *)(0x40016238 + S1_BASE)   = 0x60016260;
        *(volatile UINT32 *)(0x4001623C + S1_BASE)   = 0x400;
        *(volatile UINT32 *)(0x40016240 + S1_BASE)   = 0x40016260;
        *(volatile UINT32 *)(0x40016244 + S1_BASE)   = 0x0;
    }
    
    Status = ShutdownUefiBootServices ();
    if(EFI_ERROR(Status)) 
    {
        DEBUG((EFI_D_ERROR,"ERROR: Can not shutdown UEFI boot services. Status=0x%X\n", Status));
        goto Exit;
    }

    //
    // Switch off interrupts, caches, mmu, etc
    //
    Status = PreparePlatformHardware ();
    ASSERT_EFI_ERROR(Status);

    *(volatile UINT32*)0xFFF8 = 0x0;
    *(volatile UINT32*)0xFFFC = 0x0;
    asm("DSB SY");
    asm("ISB");

    if (!PcdGet64 (PcdTrustedFirmwareEnable))
    {
        StartupAp();
    }

    Reg_Value = asm_read_reg();

    DEBUG((EFI_D_ERROR,"CPUECTLR_EL1 = 0x%llx\n",Reg_Value));

    MN_CONFIG ();

    DEBUG((EFI_D_ERROR, "[%a]:[%dL] Start to jump Linux kernel\n", __FUNCTION__, __LINE__));

    LinuxKernel (0x06000000,0,0,0);
    
    // Kernel should never exit
    // After Life services are not provided
    ASSERT(FALSE);

Exit:
    // Only be here if we fail to start Linux
    Print (L"ERROR  : Can not start the kernel. Status=0x%X\n", Status);

    // Free Runtimee Memory (kernel and FDT)
    return ;
}

