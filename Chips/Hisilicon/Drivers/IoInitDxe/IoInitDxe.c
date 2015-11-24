#include <Uefi.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>

#include <Library/PlatformSysCtrlLib.h>
#include <Library/SerdesLib.h>

VOID
EFIAPI
ExitBootServicesEventSmmu (
  IN EFI_EVENT  Event,
  IN VOID       *Context
  )
{
  SmmuConfigForLinux ();
  DEBUG((EFI_D_ERROR,"SMMU ExitBootServicesEvent\n"));
}


EFI_STATUS
EFIAPI
IoInitDxeEntry (
  IN EFI_HANDLE         ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable)
{
  EFI_STATUS Status;
  EFI_EVENT  Event = NULL;

  (VOID) EfiSerdesInitWrap ();

  SmmuConfigForBios ();

  Status = gBS->CreateEvent (
      EVT_SIGNAL_EXIT_BOOT_SERVICES,
      TPL_CALLBACK,
      ExitBootServicesEventSmmu,
      NULL,
      &Event
      );

  if (EFI_ERROR(Status))
  {        
    DEBUG ((EFI_D_ERROR, "[%a:%d] - CreateEvent failed: %r\n", __FUNCTION__,
        __LINE__, Status));
  }

  return Status;
}

