/** @file
*
*  Copyright (c) 2016, Hisilicon Limited. All rights reserved.
*  Copyright (c) 2016, Linaro Limited. All rights reserved.
*
*  This program and the accompanying materials
*  are licensed and made available under the terms and conditions of the BSD License
*  which accompanies this distribution.  The full text of the license may be found at
*  http://opensource.org/licenses/bsd-license.php
*
*  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
*  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
*
**/


#include "PcieInit.h"
#include <Library/UefiBootServicesTableLib.h>
#include <Library/PcdLib.h>

/*
PCIE_ROOT_BRIDGE_PROTOCOL gPcieRootBridge = {
    PcieChangeRwMode,  //PcieChangeReadWriteMode
    PcieSetDBICS2Enable //PcieSetDBICS2EnableDisable
};
*/

/*----------------------------------------------*
 * 外部函数原型说明                             *
 *----------------------------------------------*/
    
extern VOID PcieRegWrite(UINT32 Port, UINTN Offset, UINT32 Value);
extern EFI_STATUS PciePortReset(UINT32 HostBridgeNum, UINT32 Port);
extern EFI_STATUS PciePortInit (UINT32 HostBridgeNum, PCIE_DRIVER_CFG *PcieCfg);
//EFI_EVENT         EfiExitBootServicesEvent = (EFI_EVENT)NULL;  // uniBIOS_y00216284_081_start DTS2015081408681  2015-8-14 >>>

/*----------------------------------------------*
 * 全局变量                                     *
 *----------------------------------------------*/
PCIE_DRIVER_CFG gastr_pcie_driver_cfg[PCIE_MAX_PORT_NUM] =
{
    //Port 0
    {
        0x0,                        //Portindex
                                    
        {
            PCIE_ROOT_COMPLEX,      //PortType
            PCIE_WITDH_X8,          //PortWidth    
            PCIE_GEN3_0,            //PortGen
        }, //PortInfo
        
    },

    //Port 1
    {
        0x1,                        //Portindex
        {
            PCIE_ROOT_COMPLEX,      //PortType
            PCIE_WITDH_X8,          //PortWidth    
            PCIE_GEN3_0,            //PortGen
        },

    },

    //Port 2
    {
        0x2,                        //Portindex
        {
            PCIE_ROOT_COMPLEX,      //PortType
            PCIE_WITDH_X8,          //PortWidth    
            PCIE_GEN3_0,            //PortGen
        },

    },

    //Port 3
    {
        0x3,                        //Portindex
        {
            PCIE_ROOT_COMPLEX,      //PortType
            PCIE_WITDH_X8,          //PortWidth    
            PCIE_GEN3_0,            //PortGen
        },

    },
};

// uniBIOS_y00216284_081_start DTS2015081408681  2015-8-14 >>>
// Description:统一在SmmuConfigDxe驱动中处理
//DTS:DTS2015072310074,修改PCIe SMMU属性，否则OS下PCIe有问题
/*
VOID
EFIAPI
ExitBootServicesEvent (
  IN EFI_EVENT  Event,
  IN VOID       *Context
  )
{
    
    *(volatile UINT32 *)(PCIE_SMMU_BASE + 0) = 0x0A850101;
    DEBUG((EFI_D_ERROR,"PCIe ExitBootServicesEvent\n"));   
    
}
*/
// uniBIOS_y00216284_081_end 2015-8-14 <<<

/*****************************************************************************
 函 数 名   : PcieInitEntry
 功能描述  : pcie初始化
 输入参数  : 无
 输出参数  : 无
 返 回 值   : EFI_STATUS
*****************************************************************************/
EFI_STATUS
PcieInitEntry (
  IN EFI_HANDLE                 ImageHandle,
  IN EFI_SYSTEM_TABLE           *SystemTable
  )

{
    UINT32             Port;
    EFI_STATUS         Status = EFI_SUCCESS;
    //EFI_HANDLE         Handle;
    UINT32             HostBridgeNum = 0;
    
    //DTS2015073101571 PCIe代码检视意见修改:将多host考虑进去
    for (HostBridgeNum = 0; HostBridgeNum < PCIE_HOST_BRIDGE_NUM; HostBridgeNum++)
    {
        for (Port = 0; Port < PCIE_MAX_PORT_NUM; Port++)
        {
            if (!((((PcdGet32(PcdPcieRootBridgeMask) >> (4 * HostBridgeNum))) >> Port) & 0x1))
            {
                continue;
            }
            
            Status = PciePortInit(HostBridgeNum, &gastr_pcie_driver_cfg[Port]);
            if(EFI_ERROR(Status))
            {
                DEBUG((EFI_D_ERROR, "HostBridge %d, Pcie Port %d Init Failed! \n", HostBridgeNum, Port));  
            }
        
        }
    }
	
    // uniBIOS_y00216284_081_start DTS2015081408681  2015-8-14 >>>
	// Description:统一在SmmuConfigDxe驱动中处理
    // Description:ExitBootServicesEvent
    //DTS:DTS2015072310074,修改PCIe SMMU属性，否则OS下PCIe有问题    
    /*
    Status = gBS->CreateEvent (EVT_SIGNAL_EXIT_BOOT_SERVICES, TPL_NOTIFY, ExitBootServicesEvent, NULL, &EfiExitBootServicesEvent);
    if (EFI_ERROR(Status))
    {        
        DEBUG((EFI_D_ERROR, " PCIe CreateEvent fail\n "));
    }
    */
    // uniBIOS_y00216284_081_end 2015-8-14 <<<
	
    //
    // Make a new handle and install the protocol
    //
    /*
    Handle = NULL;
    Status = gBS->InstallProtocolInterface (
                  &Handle,
                  &gEfiPcieRootBridgeProtocolGuid,
                  EFI_NATIVE_INTERFACE,
                  &gPcieRootBridge
                  );
    //DTS2015072900796 PCLint消除
    if (EFI_ERROR(Status))
    {        
        DEBUG((EFI_D_ERROR, " Install PcieRootBridge protocol fail\n "));
    }
    */
    return EFI_SUCCESS;
}

