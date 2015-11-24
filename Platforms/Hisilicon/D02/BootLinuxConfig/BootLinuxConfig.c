#include <Uefi.h>
#include <PiPei.h>
#include <Library/DebugLib.h>
#include <Library/PcdLib.h>
#include <Library/IoLib.h>
#include <Library/CacheMaintenanceLib.h>

#include <PlatformArch.h>
#include <Library/PlatformSysCtrlLib.h>

#include <Library/OemMiscLib.h>

EFI_STATUS
EFIAPI
BootLinuxConfig (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  )
{
    DEBUG((EFI_D_ERROR,"SMMU CONFIG........."));
    SmmuConfigForLinux();
    DEBUG((EFI_D_ERROR,"Done\n"));

    DEBUG((EFI_D_ERROR,"ITS CONFIG........."));
	ITSCONFIG();
    DEBUG((EFI_D_ERROR,"Done\n"));

    DEBUG((EFI_D_ERROR,"AP CONFIG........."));
    MmioWrite64(FixedPcdGet64(PcdMailBoxAddress), 0x0);
    (void)WriteBackInvalidateDataCacheRange((VOID *) FixedPcdGet64(PcdMailBoxAddress), 8);
    asm("DSB SY");
    asm("ISB");

    CoreSelectBoot();

DEBUG((EFI_D_ERROR,"Done\n"));

    DEBUG((EFI_D_ERROR,"MN CONFIG........."));
    MN_CONFIG ();
    DEBUG((EFI_D_ERROR,"Done\n"));

    DEBUG((EFI_D_ERROR,"RTC CONFIG........."));
    
    MmioWrite32(0xA00021F0, 0xF);

    DEBUG((EFI_D_ERROR,"Done\n"));

    DEBUG((EFI_D_ERROR,"Tsensor CONFIG........."));
    
    MmioWrite32(0x80010000 + 0x5000, 0x1);
    *(volatile UINT32*)0xA0000A8C = 0x1f;

    DEBUG((EFI_D_ERROR,"Done\n"));

    return EFI_SUCCESS;
}
