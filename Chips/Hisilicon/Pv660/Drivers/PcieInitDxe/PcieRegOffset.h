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

#ifndef __PCIE_REG_OFFSET__
#define __PCIE_REG_OFFSET__

// uniBIOS_y00216284_065_start DTS2015072900796 PCLint告警消除 2015-7-29 >>>
/******************************************************************************/
/*                      PhosphorV660 NTB_eEP_CFG 寄存器定义                   */
/******************************************************************************/
#define PCIE_EEP_PCI_CFG_HDR0_REG                 (0x0)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR1_REG                 (0x4)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR2_REG                 (0x8)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR3_REG                 (0xC)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR4_REG                 (0x10)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR5_REG                 (0x14)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR6_REG                 (0x18)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR7_REG                 (0x1C)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR8_REG                 (0x20)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR9_REG                 (0x24)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR10_REG                (0x28)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR11_REG                (0x2C)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR12_REG                (0x30)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR13_REG                (0x34)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR14_REG                (0x38)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_CFG_HDR15_REG                (0x3C)          /* PCI兼容配置头空间寄存器 */
#define PCIE_EEP_PCI_PM_CAP0_REG                  (0x40)          /* PCI电源管理功能寄存器 */
#define PCIE_EEP_PCI_PM_CAP1_REG                  (0x44)          /* PCI电源管理功能寄存器 */
#define PCIE_EEP_PCI_MSI_CAP0_REG                 (0x50)          /* PCI MSI功能寄存器 */
#define PCIE_EEP_PCI_MSI_CAP1_REG                 (0x54)          /* PCI MSI功能寄存器 */
#define PCIE_EEP_PCI_MSI_CAP2_REG                 (0x58)          /* PCI MSI功能寄存器 */
#define PCIE_EEP_PCI_MSI_CAP3_REG                 (0x5C)          /* PCI MSI功能寄存器 */
#define PCIE_EEP_PCIE_CAP0_REG                    (0x70)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP1_REG                    (0x74)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP2_REG                    (0x78)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP3_REG                    (0x7C)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP4_REG                    (0x80)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP5_REG                    (0x84)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP6_REG                    (0x88)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP7_REG                    (0x8C)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP8_REG                    (0x90)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP9_REG                    (0x94)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP10_REG                   (0x98)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP11_REG                   (0x9C)          /* PCI Express功能寄存器 */
#define PCIE_EEP_PCIE_CAP12_REG                   (0xA0)          /* PCI Express功能寄存器 */
#define PCIE_EEP_SLOT_CAP_REG                     (0xC0)          /* Slot Numbering功能寄存器 */
#define PCIE_EEP_AER_CAP0_REG                     (0x100)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP1_REG                     (0x104)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP2_REG                     (0x108)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP3_REG                     (0x10C)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP4_REG                     (0x110)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP5_REG                     (0x114)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP6_REG                     (0x118)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP7_REG                     (0x11C)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP8_REG                     (0x120)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP9_REG                     (0x124)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP10_REG                    (0x128)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP11_REG                    (0x12C)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP12_REG                    (0x130)         /* 高级错误报告寄存器 */
#define PCIE_EEP_AER_CAP13_REG                    (0x134)         /* 高级错误报告寄存器 */
#define PCIE_EEP_VC_CAP0_REG                      (0x140)         /* 虚拟通道功能寄存器 */
#define PCIE_EEP_VC_CAP1_REG                      (0x144)         /* 虚拟通道功能寄存器 */
#define PCIE_EEP_VC_CAP2_REG                      (0x148)         /* 虚拟通道功能寄存器 */
#define PCIE_EEP_VC_CAP3_REG                      (0x14C)         /* 虚拟通道功能寄存器 */
#define PCIE_EEP_VC_CAP4_REG                      (0x150)         /* 虚拟通道功能寄存器 */
#define PCIE_EEP_VC_CAP5_REG                      (0x154)         /* 虚拟通道功能寄存器 */
#define PCIE_EEP_VC_CAP6_REG                      (0x158)         /* 虚拟通道功能寄存器 */
#define PCIE_EEP_VC_CAP7_REG                      (0x15C)         /* 虚拟通道功能寄存器 */
#define PCIE_EEP_VC_CAP8_REG                      (0x160)         /* 虚拟通道功能寄存器 */
#define PCIE_EEP_VC_CAP9_REG                      (0x164)         /* 虚拟通道功能寄存器 */
#define PCIE_EEP_PORT_LOGIC0_REG                  (0x700)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC1_REG                  (0x704)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC2_REG                  (0x708)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC3_REG                  (0x70C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC4_REG                  (0x710)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC5_REG                  (0x714)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC6_REG                  (0x718)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC7_REG                  (0x71C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC8_REG                  (0x720)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC9_REG                  (0x724)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC10_REG                 (0x728)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC11_REG                 (0x72C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC12_REG                 (0x730)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC13_REG                 (0x734)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC14_REG                 (0x738)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC15_REG                 (0x73C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC16_REG                 (0x748)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC17_REG                 (0x74C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC18_REG                 (0x750)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC19_REG                 (0x7A8)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC20_REG                 (0x7AC)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC21_REG                 (0x7B0)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORT_LOGIC22_REG                 (0x80C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC23_REG                  (0x810)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC24_REG                  (0x814)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC25_REG                  (0x818)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC26_REG                  (0x81C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC27_REG                  (0x820)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC28_REG                  (0x824)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC29_REG                  (0x828)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC30_REG                  (0x82C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC31_REG                  (0x830)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC32_REG                  (0x834)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC33_REG                  (0x838)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC34_REG                  (0x83C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC35_REG                  (0x840)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC36_REG                  (0x844)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC37_REG                  (0x848)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC38_REG                  (0x84C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC39_REG                  (0x850)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC40_REG                  (0x854)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC41_REG                  (0x858)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC42_REG                  (0x85C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC43_REG                  (0x860)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC44_REG                  (0x864)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC45_REG                  (0x868)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC46_REG                  (0x86C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC47_REG                  (0x870)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC48_REG                  (0x874)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC49_REG                  (0x878)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC50_REG                  (0x87C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC51_REG                  (0x880)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC52_REG                  (0x884)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC53_REG                  (0x888)         /* 端口逻辑寄存器 */
#define PCIE_EEP_GEN3_CONTRL_REG                  (0x890)         /*gen3 contrl*/
#define PCIE_EEP_PIPE_LOOPBACK_REG                (0x8B8)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC54_REG                  (0x900)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC55_REG                  (0x904)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC56_REG                  (0x908)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC57_REG                  (0x90C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC58_REG                  (0x910)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC59_REG                  (0x914)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC60_REG                  (0x918)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC61_REG                  (0x91C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC62_REG                  (0x97C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC63_REG                  (0x980)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC64_REG                  (0x99C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC65_REG                  (0x9A0)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC66_REG                  (0x9BC)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC67_REG                  (0x9C4)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC68_REG                  (0x9C8)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC69_REG                  (0x9CC)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC70_REG                  (0x9D0)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC71_REG                  (0x9D4)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC72_REG                  (0x9D8)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC73_REG                  (0x9DC)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC74_REG                  (0x9E0)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC75_REG                  (0xA00)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC76_REG                  (0xA10)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC77_REG                  (0xA18)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC78_REG                  (0xA1C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC79_REG                  (0xA24)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC80_REG                  (0xA28)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC81_REG                  (0xA34)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC82_REG                  (0xA3C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC83_REG                  (0xA40)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC84_REG                  (0xA44)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC85_REG                  (0xA48)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC86_REG                  (0xA6C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC87_REG                  (0xA70)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC88_REG                  (0xA78)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC89_REG                  (0xA7C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC90_REG                  (0xA80)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC91_REG                  (0xA84)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC92_REG                  (0xA88)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC93_REG                  (0xA8C)         /* 端口逻辑寄存器 */
#define PCIE_EEP_PORTLOGIC94_REG                  (0xA90)         /* 端口逻辑寄存器 */

typedef union tagPipeLoopBack
{
    struct 
    {
        UINT32    reserved             : 31  ; 
        UINT32    pipe_loopback_enable             : 1  ; // [15..0] 厂商ID号
    }Bits;
    UINT32    UInt32;
}PCIE_PIPE_LOOPBACK_U;

// Define the union PCIE_EEP_PCI_CFG_HDR0_U
// PCI兼容配置头空间寄存器
// 0x0
typedef union tagEepPciCfgHdr0
{
    // Define the struct Bits
    struct
    {
        UINT32    vendor_id             : 16  ; // [15..0] 厂商ID号
        UINT32    device_id             : 16  ; // [31..16] 设备ID号
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_CFG_HDR0_U;

// Define the union PCIE_EEP_PCI_CFG_HDR1_U
// PCI兼容配置头空间寄存器
// 0x4
typedef union tagEepPciCfgHdr1
{
    // Define the struct Bits
    struct
    {
        UINT32    io_space_enable       : 1   ; // [0] I/O Sapace Enable0：该设备不能响应I/O请求;1：该设备能够响应I/O请求。
        UINT32    memory_space_enable   : 1   ; // [1] Memory Space Enable0：该设备不能响应存储器请求;1：该设备能够响应存储器请求。
        UINT32    bus_master_enable     : 1   ; // [2] Bus Master Enable0：该设备不能作为主设备;1：该设备能够作为主设备。
        UINT32    specialcycleenable    : 1   ; // [3] Special Cycle Enalbe不适用于PCIe，硬连线为0
        UINT32    memory_write_and_invalidate  : 1   ; // [4] Memory Write and Invalidata不适用于PCIe，硬连线为0
        UINT32    vga_palette_snoop_enable  : 1   ; // [5] VGA Palette Snoop不适用于PCIe，硬连线为0
        UINT32    parity_error_response  : 1   ; // [6] Parity Error Response0：对奇偶校验错误不作出响应;1：对奇偶校验错误作出响应。
        UINT32    idsel_stepping_waitcycle_control  : 1   ; // [7] IDSEL Stepping/Wait Cycle Control不适用于PCIe，硬连线为0
        UINT32    serr_enable           : 1   ; // [8] SERR#信号使能0：可以使用SERR#信号;
        UINT32    fastback_to_backenable  : 1   ; // [9] Faster Back-to-Back Enaable不适用于PCIe，硬连线为0
        UINT32    interrupt_disable     : 1   ; // [10] INTx Assertion Disable0：允许使用INTx方式提交中断;1：禁用INTx方式提交中断。
        UINT32    Reserved_2            : 5   ; // [15..11] Reserved
        UINT32    Reserved_1            : 3   ; // [18..16] Reserved
        UINT32    intx_status           : 1   ; // [19] INTx Status0：设备未使用INTx方式向处理器提交了中断请求;1：设备使用INTx方式向处理器提交了中断请求。
        UINT32    capabilitieslist      : 1   ; // [20] Capabilities List指示Capability Pointer寄存器中的值有效，硬连线为1
        UINT32    pcibus66mhzcapable    : 1   ; // [21] 66MHz Capable不适用于PCIe，硬连线为0
        UINT32    Reserved_0            : 1   ; // [22] Reserved
        UINT32    fastback_to_back      : 1   ; // [23] Faster Back-to-Back Capable不适用于PCIe，硬连线为0
        UINT32    masterdataparityerror  : 1   ; // [24] Master Data Parity Error0：除置一条件满足之外的其他情况;1：PERR#信号有效，或者总线出现数据传输错误时，或者Command寄存器的Parity Error Response位为1时。
        UINT32    devsel_timing         : 2   ; // [26..25] DEVSEL Timing不适用于PCIe，硬连线为0
        UINT32    signaled_target_abort  : 1   ; // [27] Signaled Target Abort由PCI目标设备设置0：未发生目标设备夭折时序;1：发生目标设备夭折时序。
        UINT32    received_target_abort  : 1   ; // [28] Received Target Abort由PCI主设备设置0：未发生目标设备夭折时序;1：发生目标设备夭折时序。
        UINT32    received_master_abort  : 1   ; // [29] Received Master Abort由PCI主设备设置0：未发生主设备夭折时序;1：发生主设备夭折时序。
        UINT32    signaled_system_error  : 1   ; // [30] Signaled System Error0：SERR#信号无效;1：SERR#信号有效。
        UINT32    detected_parity_error  : 1   ; // [31] Detected Parity Error0：未检测到奇偶校验错误;1：检测到奇偶校验错误。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_CFG_HDR1_U;

// Define the union PCIE_EEP_PCI_CFG_HDR2_U
// PCI兼容配置头空间寄存器
// 0x8
typedef union tagEepPciCfgHdr2
{
    // Define the struct Bits
    struct
    {
        UINT32    revision_identification  : 8   ; // [7..0] Revision IDPCIe设备的版本号
        UINT32    Reserved_3            : 8   ; // [15..8] Programming Interface
        UINT32    sub_class             : 8   ; // [23..16] Subclass Code
        UINT32    baseclass             : 8   ; // [31..24] Base Class Code
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_CFG_HDR2_U;

// Define the union PCIE_EEP_PCI_CFG_HDR3_U
// PCI兼容配置头空间寄存器
// 0xC
typedef union tagEepPciCfgHdr3
{
    // Define the struct Bits
    struct
    {
        UINT32    cache_line_size       : 8   ; // [7..0] Cache Line Size不适用于PCIe设备，对此寄存器执行写操作不会影响PCIe core的功能
        UINT32    mstr_lat_tmr          : 8   ; // [15..8] Master Latency Timer不适用于PCIe设备，硬连线为0
        UINT32    multi_function_device  : 7   ; // [22..16] Configuration Header Format0：Type0配置头空间;1：Type1配置头空间。
        UINT32    hdr_type              : 1   ; // [23] Multi Function Device0：单功能设备;1：多功能设备。
        UINT32    bist                  : 8   ; // [31..24] BIST Register该版本IP不支持该功能，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_CFG_HDR3_U;

// Define the union PCIE_EEP_PCI_CFG_HDR4_U
// PCI兼容配置头空间寄存器
// 0x10
typedef union tagEepPciCfgHdr4
{
    // Define the struct Bits
    struct
    {
        UINT32    sbar01_space_inicator  : 1   ; // [0] 指示BAR类型0：Memory BAR;1：I/O BAR。
        UINT32    sbar01_type           : 2   ; // [2..1] 指示Memory BAR类型00：32-bit BAR;10：64-bit BAR;01：保留;11：保留。
        UINT32    sbar01_prefetchable   : 1   ; // [3] 指示Memory BAR是否可预取0：不可预取;1：可预取。
        UINT32    sbar01_lower          : 28  ; // [31..4] 64位BAR0地址的[31:4]位若dbi_cs2有效，则为BAR0_MASK的[31:4]位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_CFG_HDR4_U;

// Define the union PCIE_EEP_PCI_CFG_HDR6_U
// PCI兼容配置头空间寄存器
// 0x18
typedef union tagEepPciCfgHdr6
{
    // Define the struct Bits
    struct
    {
        UINT32    sbar23_space_inicator  : 1   ; // [0] 0 =BAR23 is a memory BAR1 =BAR23 is an I/O BARNTB只支持Memory空间，不支持IO空间
        UINT32    sbar23_type           : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    sbar23_prefetchable   : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_4            : 8   ; // [11..4] 保留位
        UINT32    sbar23_lower          : 20  ; // [31..12] 64位BAR23地址的[31:12]位若dbi_cs2有效，则为BAR23_MASK的[31:12]位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_CFG_HDR6_U;

// Define the union PCIE_EEP_PCI_CFG_HDR8_U
// PCI兼容配置头空间寄存器
// 0x20
typedef union tagEepPciCfgHdr8
{
    // Define the struct Bits
    struct
    {
        UINT32    sbar45_space_inicator  : 1   ; // [0] 0 =BAR01 is a memory BAR1 =BAR01 is an I/O BARNTB只支持Memory空间，不支持IO空间
        UINT32    sbar45_type           : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    sbar45_prefetchable   : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_5            : 8   ; // [11..4] 保留位
        UINT32    sbar45_lower          : 20  ; // [31..12] BAR01基地址低位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_CFG_HDR8_U;

// Define the union PCIE_EEP_PCI_CFG_HDR11_U
// PCI兼容配置头空间寄存器
// 0x2C
typedef union tagEepPciCfgHdr11
{
    // Define the struct Bits
    struct
    {
        UINT32    subsystem_vendor_id   : 16  ; // [15..0] 子系统厂商ID
        UINT32    subsystemid           : 16  ; // [31..16] 子系统ID
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_CFG_HDR11_U;

// Define the union PCIE_EEP_PCI_CFG_HDR13_U
// PCI兼容配置头空间寄存器
// 0x34
typedef union tagEepPciCfgHdr13
{
    // Define the struct Bits
    struct
    {
        UINT32    capptr                : 8   ; // [7..0] 功能指针
        UINT32    Reserved_6            : 24  ; // [31..8] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_CFG_HDR13_U;

// Define the union PCIE_EEP_PCI_CFG_HDR15_U
// PCI兼容配置头空间寄存器
// 0x3C
typedef union tagEepPciCfgHdr15
{
    // Define the struct Bits
    struct
    {
        UINT32    int_line              : 8   ; // [7..0] Interrupt Line
        UINT32    int_pin               : 8   ; // [15..8] Interrupt Pin00：不使用INTx类型上报中断;01：使用INTA;02：使用INTB;03：使用INTC;04：使用INTD。
        UINT32    Min_Grant             : 8   ; // [23..16] 不适用于PCIe，硬连线为0
        UINT32    Max_Latency           : 8   ; // [31..24] 不适用于PCIe，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_CFG_HDR15_U;

// Define the union PCIE_EEP_PCI_MSI_CAP0_U
// PCI MSI功能寄存器
// 0x50
typedef union tagEepPciMsiCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_cap_id            : 8   ; // [7..0] MSI Capability ID
        UINT32    next_capability_pointer  : 8   ; // [15..8] Next Capability Pointer
        UINT32    msi_enabled           : 1   ; // [16] MSI Enabled0：禁用MSI;1：使能MSI。
        UINT32    multiple_message_capable  : 3   ; // [19..17] Multiple Message Capable000：PCIe设备可以使用1个中断向量;001：PCIe设备可以使用2个中断向量;010：PCIe设备可以使用4个中断向量;011：PCIe设备可以使用8个中断向量;100：PCIe设备可以使用16个中断向量;101：PCIe设备可以使用32个中断向量;110：保留;111：保留。
        UINT32    multiple_message_enabled  : 3   ; // [22..20] Multiple Message Enabled表示分配给当前PCIe设备的中断向量数目000：PCIe设备被分配给1个中断向量;001：PCIe设备被分配给2个中断向量;010：PCIe设备被分配给4个中断向量;011：PCIe设备被分配给8个中断向量;100：PCIe设备被分配给16个中断向量;101：PCIe设备被分配给32个中断向量;110：保留;111：保留。
        UINT32    msi_64_en             : 1   ; // [23] 支持64位地址功能
        UINT32    pvm_en                : 1   ; // [24] 设备是否支持Per Vector Masking功能1'b0: 不支持1'b1: 支持
        UINT32    message_control_register  : 7   ; // [31..25] MSI Per Vector Masking (PVM) supported0：不支持MSI PVM;1：支持MSI PVM。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_MSI_CAP0_U;

// Define the union PCIE_EEP_PCI_MSI_CAP1_U
// PCI MSI功能寄存器
// 0x54
typedef union tagEepPciMsiCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_11           : 2   ; // [1..0] Reserved
        UINT32    msi_addr_low          : 30  ; // [31..2] MSI的低32bit地址的[31:2]位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_MSI_CAP1_U;

// Define the union PCIE_EEP_PCI_MSI_CAP3_U
// PCI MSI功能寄存器
// 0x5C
typedef union tagEepPciMsiCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_data              : 16  ; // [15..0] MSI数据
        UINT32    Reserved_12           : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCI_MSI_CAP3_U;

// Define the union PCIE_EEP_PCIE_CAP0_U
// PCI Express功能寄存器
// 0x70
typedef union tagEepPcieCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie_cap_id           : 8   ; // [7..0] PCI Express Capability ID
        UINT32    pcie_next_ptr         : 8   ; // [15..8] Next Capability Pointer
        UINT32    pcie_capability_version  : 4   ; // [19..16] PCI Express Capability Version
        UINT32    device_port_type      : 4   ; // [23..20] Device/Port Type0100：PCIe RC;
        UINT32    slot_implemented      : 1   ; // [24] Slot Implemented
        UINT32    interrupt_message_number  : 5   ; // [29..25] Interrupt Message Number
        UINT32    Reserved_13           : 2   ; // [31..30] RsvdP
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP0_U;

// Define the union PCIE_EEP_PCIE_CAP1_U
// PCI Express功能寄存器
// 0x74
typedef union tagEepPcieCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    max_payload_size_supported  : 3   ; // [2..0] 支持最大payload 为512Byte
        UINT32    phantom_function_supported  : 2   ; // [4..3] 仿真器功能支持，硬连线0
        UINT32    extended_tagEepfield_supported  : 1   ; // [5] 拓展标记字段支持，支持最大outstanding的深度为32
        UINT32    endpoint_l0sacceptable_latency  : 3   ; // [8..6] 端点L0可接受的延时，不支持，硬连线为0
        UINT32    endpoint_l1acceptable_latency  : 3   ; // [11..9] 端点L1可接受的延时，不支持，硬连线为0
        UINT32    undefined             : 3   ; // [14..12] 保留
        UINT32    Reserved_16           : 3   ; // [17..15] 保留
        UINT32    captured_slot_power_limit_value  : 8   ; // [25..18] 捕获的插槽功率极限值，硬连线0x0，只读
        UINT32    captured_slot_power_limit_scale  : 2   ; // [27..26] 捕获的插槽功率极限因子，硬连线0x0，只读
        UINT32    function_level_reset  : 1   ; // [28] Function级的复位，NTB不支持该功能
        UINT32    Reserved_15           : 3   ; // [31..29] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP1_U;

// Define the union PCIE_EEP_PCIE_CAP2_U
// PCI Express功能寄存器
// 0x78
typedef union tagEepPcieCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    correctable_error_reporting_enable  : 1   ; // [0] Correctable Error Reporting Enable0：不支持发送“可纠正错误”消息;1：支持发送“可纠正错误”消息。
        UINT32    non_fatal_error_reporting_enable  : 1   ; // [1] Non-Fatal Error Reporting Enable0：不支持发送“非致命错误”消息;1：支持发送“非致命错误”消息。
        UINT32    fatal_error_reporting_enable  : 1   ; // [2] Fatal Error Reporting Enable0：不支持发送“致命错误”消息;1：支持发送“致命错误”消息。
        UINT32    urenable              : 1   ; // [3] Unsupported Request Reporting Enable0：不支持发送“不被支持请求”消息;1：支持发送“不被支持请求”消息。
        UINT32    enable_relaxed_ordering  : 1   ; // [4] Enable Relaxed Ordering0：不支持灵活事务顺序;1：支持灵活事务顺序。
        UINT32    max_payload_size      : 3   ; // [7..5] Max_Payload_Size000：128Byte;001：256Byte;010：512Byte;011：1024Byte;100：2048Byte;101：4096Byte;110：保留;111：保留。
        UINT32    extended_tagEepfieldenable  : 1   ; // [8] Extended tagEep Field Enable0：禁用扩展tagEep字段;1：使能扩展tagEep字段。
        UINT32    phantom_function_enable  : 1   ; // [9] Phantom Function Enable0：禁用Phantom Function;1：使能Phantom Function。
        UINT32    auxpowerpmenable      : 1   ; // [10] AUX Power PM Enable0：禁用附加电源;1：使能附加电源。
        UINT32    enablenosnoop         : 1   ; // [11] Enable No Snoop0：禁用No Snoop特性;1：使能No Snoop特性。
        UINT32    max_read_request_size  : 3   ; // [14..12] Max_Read_Request_Size000：128Byte;001：256Byte;010：512Byte;011：1024Byte;100：2048Byte;101：4096Byte;110：保留;111：保留。
        UINT32    Reserved_18           : 1   ; // [15] reserved
        UINT32    correctableerrordetected  : 1   ; // [16] Correctable Error Detected0：没有检测到可纠正错误;1：检测到可纠正错误。
        UINT32    non_fatalerrordetected  : 1   ; // [17] Non-Fatal Error detected0：没有检测到非致命错误;1：检测到非致命错误。
        UINT32    fatalerrordetected    : 1   ; // [18] Fatal Error Detected0：没有检测到致命错误;1：检测到致命错误。
        UINT32    unsupportedrequestdetected  : 1   ; // [19] Unsupported Request Detected0：没有收到不被支持的请求;1：收到不被支持的请求。
        UINT32    auxpowerdetected      : 1   ; // [20] Aux Power Detected0：没有检测到辅助电源;1：检测到辅助电源。
        UINT32    transactionpending    : 1   ; // [21] Transaction Pending硬连线为0
        UINT32    Reserved_17           : 10  ; // [31..22] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP2_U;

// Define the union PCIE_EEP_PCIE_CAP3_U
// PCI Express功能寄存器
// 0x7C
typedef union tagEepPcieCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    max_link_speed        : 4   ; // [3..0] Max Link Speeds0001：2.5GT/s;0010：5.0GT/s;0100：8.0GT/s;其他值：不支持。
        UINT32    max_link_width        : 6   ; // [9..4] Maximum Link Width000001：x1通道;000010：x2通道;000100：x4通道;001000：x8通道;010000：x16通道;其他值：保留。
        UINT32    active_state_power_management  : 2   ; // [11..10] Active State Link PM Support0：不支持ASPM;1：支持ASPM。
        UINT32    l0s_exitlatency       : 3   ; // [14..12] L0s Exit Latency000：小于64ns;
        UINT32    l1_exit_latency       : 3   ; // [17..15] L1 Exit Latency000：小于1us;
        UINT32    clock_power_management  : 1   ; // [18] Clock Power Management0：不支持Clock Power Management;1：支持Clock Power Management。
        UINT32    surprise_down_error_report_cap  : 1   ; // [19] Surprise Down Error Reporting Capable，该版本IP不支持，硬连线为0
        UINT32    data_link_layer_active_report_cap  : 1   ; // [20] Data Link Layer Active Reporting Capable，对于RC硬连线为10：不支持Data Link Layer Active Reporting;1：支持Data Link Layer Active Reporting。
        UINT32    link_bandwidth_noti_cap  : 1   ; // [21] Link Bandwidth Notification Capability，对于RC硬连线为10：不支持Link Bandwidth Notification Capability;1：支持Link Bandwidth Notification Capability。
        UINT32    aspm_option_compliance  : 1   ; // [22] ASPM Optionality Compliance0：不支持ASPM Optionality Compliance;1：支持ASPM Optionality Compliance。
        UINT32    Reserved_19           : 1   ; // [23] Reserved
        UINT32    port_number           : 8   ; // [31..24] Port Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP3_U;

// Define the union PCIE_EEP_PCIE_CAP4_U
// PCI Express功能寄存器
// 0x80
typedef union tagEepPcieCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    active_state_power_management  : 2   ; // [1..0] NTB模式下不支持，硬连线到0
        UINT32    Reserved_22           : 1   ; // [2] 保留
        UINT32    rcb                   : 1   ; // [3] 0表示能返回64B边界的完成报文
        UINT32    link_disable          : 1   ; // [4] NTB模式下不支持，硬连线到0
        UINT32    retrain_link          : 1   ; // [5] NTB模式下不支持，硬连线到0
        UINT32    common_clock_config   : 1   ; // [6] NTB模式下不支持，硬连线到0
        UINT32    extended_sync         : 1   ; // [7] NTB模式下不支持，硬连线到0
        UINT32    enable_clock_pwr_management  : 1   ; // [8] NTB模式下不支持，硬连线到0
        UINT32    hw_auto_width_disable  : 1   ; // [9] NTB模式下不支持，硬连线到0
        UINT32    link_bandwidth_management_int_en  : 1   ; // [10] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_int_en  : 1   ; // [11] NTB模式下不支持，硬连线到0
        UINT32    Reserved_21           : 4   ; // [15..12] 保留
        UINT32    current_link_speed    : 4   ; // [19..16] 4'b0001 : 2.5Gbps4'b0010 : 5Gbps4'b0011 : 8Gbps其它值:保留当链路没有建立的时候，该无意义
        UINT32    negotiated_link_width  : 6   ; // [25..20] 协商的链路宽度，可能值为x1/x2/x4/x8
        UINT32    Reserved_20           : 1   ; // [26] 保留位
        UINT32    link_training         : 1   ; // [27] 链路协商正在进行的状态
        UINT32    slot_clock_configration  : 1   ; // [28] 表示设备是否使用连接器上提供的参考物理时钟
        UINT32    data_link_layer_active  : 1   ; // [29] 链路层的活动状态
        UINT32    link_bandwidth_management_status  : 1   ; // [30] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_status  : 1   ; // [31] NTB模式下不支持，硬连线到0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP4_U;

// Define the union PCIE_EEP_PCIE_CAP5_U
// PCI Express功能寄存器
// 0x84
typedef union tagEepPcieCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    attentioonbuttonpresent  : 1   ; // [0] Attention Indicator Present0：没有Attention Indicator;1：有Attention Indicator。
        UINT32    powercontrollerpresent  : 1   ; // [1] Power Controller Present0：没有Power Controller;1：有Power Controller。
        UINT32    mrlsensorpresent      : 1   ; // [2] MRL Sensor Present0：没有MRL Sensor;1：有MRL Sensor。
        UINT32    attentionindicatorpresent  : 1   ; // [3] Attention Indicator Present0：没有Attention Indicator;1：有Attention Indicator。
        UINT32    powerindicatorpresent  : 1   ; // [4] Power Indicator Present0：没有Power Indicator;1：有Power Indicator。
        UINT32    hot_plugsurprise      : 1   ; // [5] Hot-Plug Surprise0：不支持Hot-Plug Surprise;1：支持Hot-Plug Surprise。
        UINT32    hot_plugcapable       : 1   ; // [6] Hot-Plug Capable0：不支持热插拔;1：支持热插拔。
        UINT32    slotpowerlimitvalue   : 8   ; // [14..7] Slot Power Limit Value
        UINT32    slotpowerlimitscale   : 2   ; // [16..15] Slot Power Limit Scale
        UINT32    electromechanicalinterlockpresen  : 1   ; // [17] Electromechanical Interlock Present0：没有Electromechanical Interlock ;1：有Electromechanical Interlock 。
        UINT32    no_cmd_complete_support  : 1   ; // [18] No Command Complete Support0：支持Command Complete;1：不支持No Command Complete。
        UINT32    phy_slot_number       : 13  ; // [31..19] Physical Slot Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP5_U;

// Define the union PCIE_EEP_PCIE_CAP6_U
// PCI Express功能寄存器
// 0x88
typedef union tagEepPcieCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    attentionbuttonpressedenable  : 1   ; // [0] Attention Button Pressed Enable0：禁用Attention Button Pressed;1：使能Attention Button Pressed。
        UINT32    powerfaultdetectedenable  : 1   ; // [1] Power Fault Detected Enable0：禁用Power Fault Detected;1：使能Power Fault Detected。
        UINT32    mrlsensorchangedenable  : 1   ; // [2] MRL Sensor Changed Enable0：禁用MRL Sensor Changed;1：使能MRL Sensor Changed。
        UINT32    presencedetectchangedenable  : 1   ; // [3] Presence Detect Changed Enable0：禁用Presence Detect Changed;1：使能Presence Detect Changed。
        UINT32    commandcompletedinterruptenable  : 1   ; // [4] Command Completed Interrupt Enable0：禁用Command Completed Interrupt;1：使能Command Completed Interrupt。
        UINT32    hot_pluginterruptenable  : 1   ; // [5] Hot-Plug Interrupt Enable0：禁用Hot-Plug Interrupt;1：使能Hot-Plug Interrupt。
        UINT32    attentionindicatorcontrol  : 2   ; // [7..6] Attention Indicator Control00：保留;01：On;10：Blink;11：Off。
        UINT32    powerindicatorcontrol  : 2   ; // [9..8] Power Indicator Control00：保留;01：On;10：Blink;11：Off。
        UINT32    powercontrollercontrol  : 1   ; // [10] Power Controller Control0：禁用Power Controller Control;1：使能Power Controller Control。
        UINT32    electromechanicalinterlockcontrol  : 1   ; // [11] Electromechanical Interlock Control0：禁用Electromechanical Interlock Control;1：使能AElectromechanical Interlock Control。
        UINT32    datalinklayerstatechangedenable  : 1   ; // [12] Data Link Layer State Changed Enable0：禁用Data Link Layer State Changed;1：使能Data Link Layer State Changed Enable。
        UINT32    Reserved_23           : 3   ; // [15..13] Reserved
        UINT32    attentionbuttonpressed  : 1   ; // [16] Attention Button Pressed0：Attention Button Not Pressed;1：Attention Button Pressed。
        UINT32    powerfaultdetected    : 1   ; // [17] Power Fault Detected0：Power Fault Not Detected;1：Power Fault Detected。
        UINT32    mrlsensorchanged      : 1   ; // [18] MRL Sensor Changed0：MRL Sensor Not Changed;1：MRL Sensor Changed。
        UINT32    presencedetectchanged  : 1   ; // [19] Presence Detect Changed0：Presence Detect Not Changed;1：Presence Detect Changed。
        UINT32    commandcompleted      : 1   ; // [20] Command Completed0：Command Not Completed;1：Command Completed。
        UINT32    mrlsensorstate        : 1   ; // [21] MRL Sensor State0：不处于MRL Sensor State;1：处于MRL Sensor State。
        UINT32    presencedetectstate   : 1   ; // [22] Presence Detect State0：不处于Presence Detect State;1：处于Presence Detect State。
        UINT32    electromechanicalinterlockstatus  : 1   ; // [23] Electromechanical Interlock Status0：不处于Electromechanical Interlock Status;1：处于Electromechanical Interlock Status。
        UINT32    datalinklayerstatechanged  : 1   ; // [24] Data Link Layer State Changed0：Data Link Layer State Not Changed;1：Data Link Layer State Changed。
        UINT32    slot_ctrl_status      : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP6_U;

// Define the union PCIE_EEP_PCIE_CAP7_U
// PCI Express功能寄存器
// 0x8C
typedef union tagEepPcieCap7
{
    // Define the struct Bits
    struct
    {
        UINT32    systemerroroncorrectableerrorenable  : 1   ; // [0] System Error on Correctable Error Enable0：禁用System Error on Correctable Error;1：使能System Error on Correctable Error。
        UINT32    systemerroronnon_fatalerrorenable  : 1   ; // [1] System Error on Non-fatal Error Enable0：禁用System Error on Non-fatal Error ;1：使能System Error on Non-fatal Error 。
        UINT32    systemerroronfatalerrorenable  : 1   ; // [2] System Error on Fatal Error Enable0：禁用System Error on Fatal Error ;1：使能System Error on Fatal Error 。
        UINT32    pmeinterruptenable    : 1   ; // [3] PME Interrupt Enable0：禁用PME Interrupt;1：使能PME Interrupt。
        UINT32    crssoftwarevisibilityenable  : 1   ; // [4] CRS Software Visibility Enable，该版本IP不支持，硬连线为0
        UINT32    Reserved_24           : 11  ; // [15..5] Reserved
        UINT32    crssoftwarevisibility  : 1   ; // [16] CRS Software Visibility，该版本IP不支持，硬连线为0
        UINT32    root_cap              : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP7_U;

// Define the union PCIE_EEP_PCIE_CAP8_U
// PCI Express功能寄存器
// 0x90
typedef union tagEepPcieCap8
{
    // Define the struct Bits
    struct
    {
        UINT32    pmerequesterid        : 16  ; // [15..0] PME Requester ID
        UINT32    pmestatus             : 1   ; // [16] PME Status0：不指示PME Status;1：指示PME Status。
        UINT32    pmepending            : 1   ; // [17] PME Pending0：指示无PME Pending;1：指示PME Pending。
        UINT32    root_status           : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP8_U;

// Define the union PCIE_EEP_PCIE_CAP9_U
// PCI Express功能寄存器
// 0x94
typedef union tagEepPcieCap9
{
    // Define the struct Bits
    struct
    {
        UINT32    completiontimeoutrangessupported  : 4   ; // [3..0] Completion Timeout Ranges SupportedRange A: 50us to 10ms;Range B: 10ms to 250ms;Range C: 250ms to 4s;Range D: 4s to 64s。
        UINT32    completiontimeoutdisablesupported  : 1   ; // [4] Completion Timeout Disable Supported0：不支持禁用Completion Timeout;1：支持禁用Completion Timeout。
        UINT32    ariforwardingsupported  : 1   ; // [5] ARI Forwarding Supported0：不支持ARI Forwarding;1：支持ARI Forwarding。
        UINT32    atomicoproutingsupported  : 1   ; // [6] AtomicOp Routing Supported，不适用于Endpoint。
        UINT32    _2_bitatomicopcompletersupported  : 1   ; // [7] 32-bit AtomicOp Completer Supported0：不支持32-bit AtomicOp Completer ;1：支持32-bit AtomicOp Completer 。
        UINT32    _4_bitatomicopcompletersupported  : 1   ; // [8] 64-bit AtomicOp Completer Supported0：不支持64-bit AtomicOp Completer;1：支持64-bit AtomicOp Completer。
        UINT32    _28_bitcascompletersupported  : 1   ; // [9] 128-bit CAS Completer Supported0：不支持128-bit CAS Completer;1：支持128-bit CAS Completer。
        UINT32    noro_enabledpr_prpassing  : 1   ; // [10] No RO-enabled PR-PR Passing0：No RO-enabled PR-PR Passing;1：RO-enabled PR-PR Passing。
        UINT32    Reserved_25           : 1   ; // [11] Reserved
        UINT32    tphcompletersupported  : 2   ; // [13..12] TPH Completer Supported00：接收端不支持TPH和扩展TPH报文;01：接收端仅支持TPH报文;10：保留;11：接收端支持TPH和扩展TPH报文。
        UINT32    dev_cap2              : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP9_U;

// Define the union PCIE_EEP_PCIE_CAP10_U
// PCI Express功能寄存器
// 0x98
typedef union tagEepPcieCap10
{
    // Define the struct Bits
    struct
    {
        UINT32    completiontimeoutvalue  : 4   ; // [3..0] Completion Timeout Value0000b：Default range: 50us to 50ms;0001b：50us to 100us;0010b：1ms to 10ms;0101b：16ms to 55ms;0110b：65ms to 210ms;1001b：260ms to 900ms;1010b：1s to 3.5s;1101b：4s to 13s;1110b：17s to 64s;其他值：保留。
        UINT32    completiontimeoutdisable  : 1   ; // [4] Completion Timeout Disable0：不禁用Completion Timeout;1：禁用Completion Timeout。
        UINT32    ariforwardingsupported  : 1   ; // [5] ARI Forwarding Supported0：不支持ARI Forwarding;1：支持ARI Forwarding。
        UINT32    atomicoprequesterenable  : 1   ; // [6] AtomicOp Requester Enable0：禁用AtomicOp Requester;1：使能AtomicOp Requester。
        UINT32    atomicopegressblocking  : 1   ; // [7] AtomicOp Egress Blocking对于Endpoint不使用，reserved
        UINT32    idorequestenable      : 1   ; // [8] IDO Request Enable0：禁用IDO Request Enable;1：使能IDO Request Enable。
        UINT32    idocompletionenable   : 1   ; // [9] IDO Completion Enable0：禁用IDO Completion Enable;1：使能IDO Completion Enable。
        UINT32    dev_ctrl2             : 22  ; // [31..10] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP10_U;

// Define the union PCIE_EEP_PCIE_CAP11_U
// PCI Express功能寄存器
// 0x9C
typedef union tagEepPcieCap11
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_27           : 1   ; // [0] Reserved
        UINT32    gen1_suport           : 1   ; // [1] Gen1链路速度支持0：不支持2.5GT/s;1：支持2.5GT/s。
        UINT32    gen2_suport           : 1   ; // [2] Gen2链路速度支持0：不支持5.0GT/s;1：支持5.0GT/s。
        UINT32    gen3_suport           : 1   ; // [3] Gen3链路速度支持0：不支持8.0GT/s;1：支持8.0GT/s。
        UINT32    Reserved_26           : 4   ; // [7..4] Reserved
        UINT32    crosslink_supported   : 1   ; // [8] Crosslink Supported
        UINT32    link_cap2             : 23  ; // [31..9] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP11_U;

// Define the union PCIE_EEP_PCIE_CAP12_U
// PCI Express功能寄存器
// 0xA0
typedef union tagEepPcieCap12
{
    // Define the struct Bits
    struct
    {
        UINT32    targetlinkspeed       : 4   ; // [3..0] Target Link Speed
        UINT32    entercompliance       : 1   ; // [4] Enter Compliance0：不令链路进入Compliance模式;1：令链路进入Compliance模式。
        UINT32    hardwareautonomousspeeddisa  : 1   ; // [5] Hardware Autonomous Speed Disable0：不禁用Hardware Autonomous Speed;1：禁用Hardware Autonomous Speed。
        UINT32    selectablede_empha    : 1   ; // [6] Selectable De-emphasis0：-6dB;1：-3.5dB。
        UINT32    transmitmargin        : 3   ; // [9..7] Transmit Margin
        UINT32    _entermodifiedcompliance  : 1   ; // [10] Enter Modified Compliance0：如果LTSSM进入Polling.Compliance状态，不发送modified compliance pattern;1：如果LTSSM进入Polling.Compliance状态，发送一个modified compliance pattern。
        UINT32    compliancesos         : 1   ; // [11] Compliance SOS0：在发送Compliance Pattern或Modified Pattern时不在中间插入SKP有序集;1：在发送Compliance Pattern或Modified Pattern时在中间插入SKP有序集。
        UINT32    de_emphasislevel      : 4   ; // [15..12] De-emphasis Level0001：-3.5dB;0000：-6dB其他值：保留。
        UINT32    currentde_emphasislevel  : 1   ; // [16] Current De-emphasis Level0：-6dB;1：-3.5dB。
        UINT32    equalizationcomplete  : 1   ; // [17] Equalization Complete0：Equalization未完成;1：Equalization完成。
        UINT32    equalizationphase1successful  : 1   ; // [18] Equalization Phase 1 Successful0：Equalization Phase 1不成功;1：Equalization Phase 1成功。
        UINT32    equalizationphase2successful  : 1   ; // [19] Equalization Phase 2 Successful0：Equalization Phase 2不成功;1：Equalization Phase 2成功。
        UINT32    equalizationphase3successful  : 1   ; // [20] Equalization Phase 3 Successful0：Equalization Phase 3不成功;1：Equalization Phase 3成功。
        UINT32    linkequalizationrequest  : 1   ; // [21] Link Equalization Request0：没有请求Link Equalization;1：请求Link Equalization 。
        UINT32    link_ctrl2_status2    : 10  ; // [31..22] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PCIE_CAP12_U;

// Define the union PCIE_EEP_SLOT_CAP_U
// Slot Numbering功能寄存器
// 0xC0
typedef union tagEepSlotCap
{
    // Define the struct Bits
    struct
    {
        UINT32    slotnumberingcapabilitiesid  : 8   ; // [7..0] Slot Numbering Capabilities ID
        UINT32    nextcapabilitypointer  : 8   ; // [15..8] Next Capability Pointer
        UINT32    add_incardslotsprovided  : 5   ; // [20..16] Add-in Card Slots Provided
        UINT32    firstinchassis        : 1   ; // [21] First in Chassis
        UINT32    Reserved_28           : 2   ; // [23..22] Reserved
        UINT32    slot_cap              : 8   ; // [31..24] Chassis Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_SLOT_CAP_U;

// Define the union PCIE_EEP_AER_CAP0_U
// 高级错误报告寄存器
// 0x100
typedef union tagEepAerCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pciexpressextendedcapabilityid  : 16  ; // [15..0] PCI Express Extended Capability ID
        UINT32    capabilityversion     : 4   ; // [19..16] Capability Version
        UINT32    aer_cap_hdr           : 12  ; // [31..20] Next Capability Offset
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_AER_CAP0_U;

// Define the union PCIE_EEP_AER_CAP1_U
// 高级错误报告寄存器
// 0x104
typedef union tagEepAerCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_34           : 1   ; // [0] 未定义
        UINT32    Reserved_33           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrorsta  : 1   ; // [4] Data Link Protocol Error Status0：未检测到Data Link Protocol Error;1：检测到Data Link Protocol Error。
        UINT32    surprisedownerrorstatus  : 1   ; // [5] Surprise Down Error Status，该版本IP不支持。
        UINT32    Reserved_32           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpstatu      : 1   ; // [12] Poisoned TLP Status0：未检测到Poisoned TLP;1：检测到Poisoned TLP。
        UINT32    flowcontrolprotocolerrorst  : 1   ; // [13] Flow Control Protocol Error Status0：未检测到Flow Control Protocol Error;1：检测到Flow Control Protocol Error。
        UINT32    completiontimeouts    : 1   ; // [14] Completion Timeout Status0：未检测到Completion Timeout;
        UINT32    completerabortstatus  : 1   ; // [15] Completer Abort Status0：未检测到Completer Abort;1：检测到Completer Abort。
        UINT32    receiveroverflowstatus  : 1   ; // [16] Unexpected Completion Status0：未检测到Unexpected Completion;1：检测到Unexpected Completion。
        UINT32    malformedtlpstatus    : 1   ; // [17] Receiver Overflow Status0：未检测到Receiver Overflow;1：检测到Receiver Overflow。
        UINT32    ecrcerrorstatus       : 1   ; // [18] Malformed TLP Status0：未检测到Malformed TLP;1：检测到Malformed TLP。
        UINT32    ecrcerrorstat         : 1   ; // [19] ECRC Error Status0：未检测到ECRC Error;1：检测到ECRC Error。
        UINT32    unsupportedrequesterrorstatus  : 1   ; // [20] Unsupported Request Error Status0：未检测到Unsupported Request Error;1：检测到Unsupported Request Error;。
        UINT32    Reserved_31           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedstatus  : 1   ; // [24] AtomicOp Egress Blocked Status0：AtomicOp Egress is not Blocked;1：AtomicOp Egress is Blocked。
        UINT32    uncorr_err_status     : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_AER_CAP1_U;

// Define the union PCIE_EEP_AER_CAP2_U
// 高级错误报告寄存器
// 0x108
typedef union tagEepAerCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_38           : 1   ; // [0] 未定义
        UINT32    Reserved_37           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrormask  : 1   ; // [4] Data Link Protocol Error Mask0：Data Link Protocol Error is not Masked;1：Data Link Protocol Error is Masked。
        UINT32    surprisedownerrormask  : 1   ; // [5] Surprise Down Error Mask，该版本IP不支持。
        UINT32    Reserved_36           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpmask       : 1   ; // [12] Poisoned TLP Mask0：Poisoned TLP is not Masked;1：Poisoned TLP is Masked。
        UINT32    flowcontrolprotocolerrormask  : 1   ; // [13] Flow Control Protocol Error Mask0：Flow Control Protocol Error is not Masked;1：Flow Control Protocol Error is Masked。
        UINT32    completiontimeoutmask  : 1   ; // [14] Completion Timeout Mask0：Completion Timeout is not Masked;1：Completion Timeout is Masked。
        UINT32    completerabortmask    : 1   ; // [15] Completer Abort Mask0：Completer Abort is not Masked;1：Completer Abort is Masked。
        UINT32    unexpectedcompletionmask  : 1   ; // [16] Unexpected Completion Mask0：Unexpected Completion is not Masked;1：Unexpected Completion is Masked。
        UINT32    receiveroverflowmask  : 1   ; // [17] Receiver Overflow Mask0：Receiver Overflow is not Masked;1：Receiver Overflow is Masked。
        UINT32    malformedtlpmask      : 1   ; // [18] Malformed TLP Mask0：Malformed TLP is not Masked;1：Malformed TLP is Masked。
        UINT32    ecrcerrormask         : 1   ; // [19] ECRC Error Mask0：ECRC Error is not Masked;1：ECRC Error is Masked。
        UINT32    unsupportedrequesterrormask  : 1   ; // [20] Unsupported Request Error Mask0：Unsupported Request Error is not Masked;1：Unsupported Request Error is Masked。
        UINT32    Reserved_35           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedmask  : 1   ; // [24] AtomicOp Egress Blocked Mask0：AtomicOp Egress Blocked is not Masked;1：AtomicOp Egress Blocked is Masked。
        UINT32    uncorr_err_mask       : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_AER_CAP2_U;

// Define the union PCIE_EEP_AER_CAP3_U
// 高级错误报告寄存器
// 0x10C
typedef union tagEepAerCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_42           : 1   ; // [0] 未定义
        UINT32    Reserved_41           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrorsever  : 1   ; // [4] Data Link Protocol Error Severity0：Non-fatal;1：Fatal。
        UINT32    surprisedownerrorseverity  : 1   ; // [5] Surprise Down Error Severity，该版本IP不支持
        UINT32    Reserved_40           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpseverity   : 1   ; // [12] Poisoned TLP Severity0：Non-fatal;1：Fatal。
        UINT32    flowcontrolprotocolerrorseveri  : 1   ; // [13] Flow Control Protocol Error Severity0：Non-fatal;1：Fatal。
        UINT32    completiontimeoutseverity  : 1   ; // [14] Completion Timeout Severity0：Non-fatal;1：Fatal。
        UINT32    completerabortseverity  : 1   ; // [15] Completer Abort Severity0：Non-fatal;1：Fatal。
        UINT32    unexpectedcompletionseverity  : 1   ; // [16] Unexpected Completion Severity0：Non-fatal;1：Fatal。
        UINT32    receiveroverflowseverity  : 1   ; // [17] Receiver Overflow Severity0：Non-fatal;1：Fatal。
        UINT32    malformedtlpseverity  : 1   ; // [18] Malformed TLP Severity0：Non-fatal;1：Fatal。
        UINT32    ecrcerrorseverity     : 1   ; // [19] ECRC Error Severity0：Non-fatal;1：Fatal。
        UINT32    unsupportedrequesterrorseverity  : 1   ; // [20] Unsupported Request Error Severity0：Non-fatal;1：Fatal。
        UINT32    Reserved_39           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedseverity  : 1   ; // [24] AtomicOp Egress Blocked Severity0：Non-fatal;1：Fatal。
        UINT32    uncorr_err_ser        : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_AER_CAP3_U;

// Define the union PCIE_EEP_AER_CAP4_U
// 高级错误报告寄存器
// 0x110
typedef union tagEepAerCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    receivererrorstatus   : 1   ; // [0] Receiver Error Status0：未检测到Receiver Error;1：检测到Receiver Error。
        UINT32    Reserved_44           : 5   ; // [5..1] Reserved
        UINT32    badtlpstatus          : 1   ; // [6] Bad TLP Status0：未检测到Bad TLP;1：检测到Bad TLP。
        UINT32    baddllpstatus         : 1   ; // [7] Bad DLLP Status0：未检测到Bad DLLP;1：检测到Bad DLLP。
        UINT32    replay_numrolloverstatus  : 1   ; // [8] REPLAY_NUM Rollover Status0：未检测到REPLAY_NUM Rollover;1：检测到REPLAY_NUM Rollover。
        UINT32    Reserved_43           : 3   ; // [11..9] Reserved
        UINT32    replytimertimeoutstatus  : 1   ; // [12] Reply Timer Timeout Status0：未检测到Reply Timer Timeout;1：检测到Reply Timer Timeout。
        UINT32    advisorynon_fatalerrorstatus  : 1   ; // [13] Advisory Non-Fatal Error Status0：未检测到Advisory Non-Fatal Error;1：检测到Advisory Non-Fatal Error。
        UINT32    corr_err_status       : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_AER_CAP4_U;

// Define the union PCIE_EEP_AER_CAP5_U
// 高级错误报告寄存器
// 0x114
typedef union tagEepAerCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    receivererrormask     : 1   ; // [0] Receiver Error Mask0：Receiver Error is not Masked;1：Receiver Error is Masked。
        UINT32    Reserved_46           : 5   ; // [5..1] Reserved
        UINT32    badtlpmask            : 1   ; // [6] Bad TLP Mask0：Bad TLP is not Masked;1：Bad TLP is Masked。
        UINT32    baddllpmask           : 1   ; // [7] Bad DLLP Mask0：Bad DLLP is not Masked;1：Bad DLLP is Masked。
        UINT32    replay_numrollovermask  : 1   ; // [8] REPLAY_NUM Rollover Mask0：REPLAY_NUM Rollover is not Masked;1：REPLAY_NUM Rollover is Masked。
        UINT32    Reserved_45           : 3   ; // [11..9] Reserved
        UINT32    replytimertimeoutmask  : 1   ; // [12] Reply Timer Timeout Mask0：Reply Timer Timeout is not Masked;1：Reply Timer Timeout is Masked。
        UINT32    advisorynon_fatalerrormask  : 1   ; // [13] Advisory Non-Fatal Error Mask0：Advisory Non-Fatal Error is not Maskd;1：Advisory Non-Fatal Error is Masked。
        UINT32    corr_err_mask         : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_AER_CAP5_U;

// Define the union PCIE_EEP_AER_CAP6_U
// 高级错误报告寄存器
// 0x118
typedef union tagEepAerCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    firsterrorpointer     : 5   ; // [4..0] First Error Pointer
        UINT32    ecrcgenerationcapability  : 1   ; // [5] ECRC Generation Capability0：no capability;1：has capability。
        UINT32    ecrcgenerationenable  : 1   ; // [6] ECRC Generation Enable0：disable;1：enable。
        UINT32    ecrccheckcapable      : 1   ; // [7] ECRC Check Capable0：no capability;1：has capability。
        UINT32    ecrccheckenable       : 1   ; // [8] ECRC Check Enable0：diable;1：enable。
        UINT32    adv_cap_ctrl          : 23  ; // [31..9] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_AER_CAP6_U;

typedef union tagGen3Ctrol//PCIE_EEP_GEN3_CONTRL_REG
{   
    struct
    {
        UINT32    reserved     : 16   ;
        UINT32    equalization_disable     : 1   ;
        UINT32    reserved2     : 15   ;
    }Bits;
    UINT32    UInt32;
}PCIE_GRN3_CONTRL;

// Define the union PCIE_EEP_AER_CAP11_U
// 高级错误报告寄存器
// 0x12C
typedef union tagEepAerCap11
{
    // Define the struct Bits
    struct
    {
        UINT32    correctableerrorreportingenable  : 1   ; // [0] Correctable Error Reporting Enable0：disable;1：enable。
        UINT32    non_fatalerrorreportingenable  : 1   ; // [1] Non-Fatal Error Reporting Enable0：disable;1：enable。
        UINT32    fatalerrorreportingenable  : 1   ; // [2] Fatal Error Reporting Enable0：disable;1：enable。
        UINT32    root_err_cmd          : 29  ; // [31..3] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_AER_CAP11_U;

// Define the union PCIE_EEP_AER_CAP12_U
// 高级错误报告寄存器
// 0x130
typedef union tagEepAerCap12
{
    // Define the struct Bits
    struct
    {
        UINT32    err_correceived       : 1   ; // [0] ERR_COR Received0：未收到ERR_COR;1：收到ERR_COR。
        UINT32    multipleerr_correceived  : 1   ; // [1] Multiple ERR_COR Received0：未收到多个ERR_COR;1：收到多个ERR_COR。
        UINT32    err_fatal_nonfatalreceived  : 1   ; // [2] ERR_FATAL/NONFATAL Received0：未收到ERR_FATAL/NONFATAL;1：收到ERR_FATAL/NONFATAL。
        UINT32    multipleerr_fatal_nonfatalreceived  : 1   ; // [3] Multiple ERR_FATAL/NONFATAL Received0：未收到多个ERR_FATAL/NONFATAL;1：收到多个ERR_FATAL/NONFATAL。
        UINT32    firstuncorrectablefatal  : 1   ; // [4] First Uncorrectable Fatal0：指示没有收到第一个Uncorrectable Fatal;1：指示收到第一个Uncorrectable Fatal。
        UINT32    non_fatalerrormessagesreceived  : 1   ; // [5] Non-Fatal Error Messages Received0：未收到Non-Fatal Error Messages;1：收到Non-Fatal Error Messages。
        UINT32    fatalerrormessagesreceived  : 1   ; // [6] Fatal Error Messages Received0：未收到Fatal Error Messages;1：收到Fatal Error Messages。
        UINT32    Reserved_47           : 20  ; // [26..7] Reserved
        UINT32    root_err_status       : 5   ; // [31..27] Advanced Error Interrupt Message Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_AER_CAP12_U;

// Define the union PCIE_EEP_AER_CAP13_U
// 高级错误报告寄存器
// 0x134
typedef union tagEepAerCap13
{
    // Define the struct Bits
    struct
    {
        UINT32    err_corsourceidentification  : 16  ; // [15..0] ERR_COR Source Identification
        UINT32    err_src_id            : 16  ; // [31..16] ERR_FATAL/NONFATAL Source Identification
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_AER_CAP13_U;

// Define the union PCIE_EEP_VC_CAP0_U
// 虚拟通道功能寄存器
// 0x140
typedef union tagEepVcCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pciexpressextendedcapabilityid  : 16  ; // [15..0] PCI Express Extended Capability ID
        UINT32    capabilityversion     : 4   ; // [19..16] Capability Version
        UINT32    vc_cap_hdr            : 12  ; // [31..20] Next Capability Offset
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_VC_CAP0_U;

// Define the union PCIE_EEP_VC_CAP1_U
// 虚拟通道功能寄存器
// 0x144
typedef union tagEepVcCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    extendedvccount       : 3   ; // [2..0] Extended VC Count
        UINT32    Reserved_50           : 1   ; // [3] Reserved
        UINT32    lowpriorityextendedvccount  : 3   ; // [6..4] Low Priority Extended VC Count
        UINT32    Reserved_49           : 1   ; // [7] Reserved
        UINT32    referenceclock        : 2   ; // [9..8] Reference Clock，不适用于Endpoint，硬连线为0
        UINT32    portarbitrationtableentrysize  : 2   ; // [11..10] Port Arbitration Table Entry Size，不适用于Endpoint，硬连线为0
        UINT32    vc_cap1               : 20  ; // [31..12] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_VC_CAP1_U;

// Define the union PCIE_EEP_VC_CAP2_U
// 虚拟通道功能寄存器
// 0x148
typedef union tagEepVcCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    vcarbitrationcapability  : 8   ; // [7..0] VC Arbitration Capability
        UINT32    Reserved_51           : 16  ; // [23..8] Reserved
        UINT32    vc_cap2               : 8   ; // [31..24] VC Arbitration Table Offset，该版本IP不支持
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_VC_CAP2_U;

// Define the union PCIE_EEP_VC_CAP3_U
// 虚拟通道功能寄存器
// 0x14C
typedef union tagEepVcCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    loadvcarbitrationtable  : 1   ; // [0] Load VC Arbitration Table
        UINT32    vcarbitrationselect   : 3   ; // [3..1] VC Arbitration Select
        UINT32    Reserved_53           : 12  ; // [15..4] Reserved
        UINT32    arbitrationtablestatus  : 1   ; // [16] Arbitration Table Status
        UINT32    Reserved_52           : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_VC_CAP3_U;

// Define the union PCIE_EEP_VC_CAP4_U
// 虚拟通道功能寄存器
// 0x150
typedef union tagEepVcCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    portarbitrationcapability  : 8   ; // [7..0] Port Arbitration Capability
        UINT32    Reserved_56           : 6   ; // [13..8] Reserved
        UINT32    Reserved_55           : 1   ; // [14] 未定义
        UINT32    rejectsnooptransactions  : 1   ; // [15] Reject Snoop Transactions，不适用于Endpoint，硬连线为0
        UINT32    maximumtimeslots      : 7   ; // [22..16] Maximum Time Slots，不适用于Endpoint
        UINT32    Reserved_54           : 1   ; // [23] Reserved
        UINT32    vc_res_cap            : 8   ; // [31..24] Port Arbitration Table Offset，不适用于Endpoint，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_VC_CAP4_U;

// Define the union PCIE_EEP_VC_CAP5_U
// 虚拟通道功能寄存器
// 0x154
typedef union tagEepVcCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    tc_vcmap              : 8   ; // [7..0] TC/VC Map
        UINT32    Reserved_59           : 8   ; // [15..8] Reserved
        UINT32    loadportarbitrationtable  : 1   ; // [16] Load Port Arbitration Table，不适用于Endpoint
        UINT32    portarbitrationselec  : 3   ; // [19..17] Port Arbitration Select，对于Endpoint硬连线为0
        UINT32    Reserved_58           : 4   ; // [23..20] Reserved
        UINT32    vcid                  : 3   ; // [26..24] VC ID，硬连线为0
        UINT32    Reserved_57           : 4   ; // [30..27] Reserved
        UINT32    vc_res_ctrl           : 1   ; // [31] VC Enable，硬连线为1
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_VC_CAP5_U;

// Define the union PCIE_EEP_VC_CAP6_U
// 虚拟通道功能寄存器
// 0x158
typedef union tagEepVcCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_60           : 16  ; // [15..0] Reserved
        UINT32    portarbitrationtablestatus  : 1   ; // [16] Port Arbitration Table Status
        UINT32    vcnegotiationpending  : 1   ; // [17] VC Negotiation Pending
        UINT32    vc_res_status         : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_VC_CAP6_U;

// Define the union PCIE_EEP_VC_CAP7_U
// 虚拟通道功能寄存器
// 0x15C
typedef union tagEepVcCap7
{
    // Define the struct Bits
    struct
    {
        UINT32    portarbitrationcapability  : 8   ; // [7..0] Port Arbitration Capability，硬连线为1
        UINT32    Reserved_63           : 6   ; // [13..8] Reserved
        UINT32    Reserved_62           : 1   ; // [14] 未定义
        UINT32    rejectsnooptransactions  : 1   ; // [15] Reject Snoop Transactions
        UINT32    maximumtimeslots      : 7   ; // [22..16] Maximum Time Slots
        UINT32    Reserved_61           : 1   ; // [23] Reserved
        UINT32    vc_res_cap0           : 8   ; // [31..24] Port Arbitration Table Offset，不适用于Endpoint，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_VC_CAP7_U;

// Define the union PCIE_EEP_VC_CAP8_U
// 虚拟通道功能寄存器
// 0x160
typedef union tagEepVcCap8
{
    // Define the struct Bits
    struct
    {
        UINT32    tc_vcmap              : 8   ; // [7..0] TC/VC Map
        UINT32    Reserved_66           : 8   ; // [15..8] Reserved
        UINT32    loadportarbitrationtable  : 1   ; // [16] Load Port Arbitration Table
        UINT32    portarbitrationselect  : 3   ; // [19..17] Port Arbitration Select，对于Endpoint硬连线为0
        UINT32    Reserved_65           : 4   ; // [23..20] Reserved
        UINT32    vcid                  : 3   ; // [26..24] VC ID
        UINT32    Reserved_64           : 4   ; // [30..27] Reserved
        UINT32    vc_res_ctrl0          : 1   ; // [31] VC Enable0：VC禁用;1：VC使能。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_VC_CAP8_U;

// Define the union PCIE_EEP_VC_CAP9_U
// 虚拟通道功能寄存器
// 0x164
typedef union tagEepVcCap9
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_67           : 16  ; // [15..0] Reserved
        UINT32    arbitrationtablestatus  : 1   ; // [16] Arbitration Table Status
        UINT32    vcnegotiationpending  : 1   ; // [17] VC Negotiation Pending
        UINT32    vc_res_status0        : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_VC_CAP9_U;

// Define the union PCIE_EEP_PORT_LOGIC0_U
// 端口逻辑寄存器
// 0x700
typedef union tagEepPortLogic0
{
    // Define the struct Bits
    struct
    {
        UINT32    ack_lat_timer         : 16  ; // [15..0] Round Trip Latency Time Limit
        UINT32    replay_timer          : 16  ; // [31..16] Replay Time Limit
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC0_U;

// Define the union PCIE_EEP_PORT_LOGIC2_U
// 端口逻辑寄存器
// 0x708
typedef union tagEepPortLogic2
{
    // Define the struct Bits
    struct
    {
        UINT32    linknumber            : 8   ; // [7..0] Link Number，不适用于Endpoint
        UINT32    Reserved_70           : 7   ; // [14..8] Reserved
        UINT32    forcelink             : 1   ; // [15] Force Link
        UINT32    linkstate             : 6   ; // [21..16] Link State
        UINT32    Reserved_69           : 2   ; // [23..22] Reserved
        UINT32    port_force_link       : 8   ; // [31..24] Low Power Entrance Count
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC2_U;

// Define the union PCIE_EEP_PORT_LOGIC3_U
// 端口逻辑寄存器
// 0x70C
typedef union tagEepPortLogic3
{
    // Define the struct Bits
    struct
    {
        UINT32    ackfrequency          : 8   ; // [7..0] Ack Frequency
        UINT32    n_fts                 : 8   ; // [15..8] N_FTS
        UINT32    commonclockn_fts      : 8   ; // [23..16] Common Clock N_FTS
        UINT32    l0sentrancelatency    : 3   ; // [26..24] L0s Entrance Latency000：1us;001：2us;010：3us;011：4us;100：5us;101：6us;110：7us;111：7us。
        UINT32    l1entrancelatency     : 3   ; // [29..27] L1 Entrance Latency000：1us;001：2us;010：4us;011：8us;100：16us;101：32us;110：64us;111：64us。
        UINT32    enteraspml1withoutreceiveinl0s  : 1   ; // [30] Enter ASPM L1 without receive in L0s0：发送接收端都处于L0s一段空闲时间后，core才能进入L1状态;
        UINT32    ack_aspm              : 1   ; // [31] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC3_U;

// Define the union PCIE_EEP_PORT_LOGIC4_U
// 端口逻辑寄存器
// 0x710
typedef union tagEepPortLogic4
{
    // Define the struct Bits
    struct
    {
        UINT32    vendorspecificdllprequest  : 1   ; // [0] Vendor Specific DLLP Request0：不发送Vendor Specific DLLP Register定义的DLLP;1：发送Vendor Specific DLLP Register定义的DLLP。
        UINT32    scrambledisable       : 1   ; // [1] Scramble Disable0：禁用加扰;1：使能加扰。
        UINT32    loopbackenable        : 1   ; // [2] Loopback Enable0：禁用loopback;1：使能loopback。
        UINT32    resetassert           : 1   ; // [3] Reset Assert，不适用于EP0：不触发recovery状态;
        UINT32    Reserved_73           : 1   ; // [4] Reserved
        UINT32    dlllinkenable         : 1   ; // [5] DLL Link Enable0：禁用initFC DLLP发送以及建立链路;1：使能initFC DLLP发送以及建立链路。
        UINT32    Reserved_72           : 1   ; // [6] Reserved
        UINT32    fastlinkmode          : 1   ; // [7] Fast Link Mode0：禁用Fast Link Mode;1：使能Fast Link Mode。
        UINT32    Reserved_71           : 8   ; // [15..8] Reserved
        UINT32    linkmodeenable        : 6   ; // [21..16] Link Mode Enable000001：x1;
        UINT32    crosslinkenable       : 1   ; // [22] Crosslink Enable0：禁用crosslink;1：使能crosslink。
        UINT32    crosslinkactive       : 1   ; // [23] Crosslink Active0：未发生crosslink;1：发生crosslink。
        UINT32    port_link_ctrl        : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC4_U;

// Define the union PCIE_EEP_PORT_LOGIC5_U
// 端口逻辑寄存器
// 0x714
typedef union tagEepPortLogic5
{
    // Define the struct Bits
    struct
    {
        UINT32    insertlaneskewfortransmit  : 24  ; // [23..0] Insert Lane Skew for Transmit
        UINT32    flowcontroldisable    : 1   ; // [24] Flow Control Disable0：不禁用core发送FC DLLP;1：禁用core发送FC DLLP。
        UINT32    ack_nakdisable        : 1   ; // [25] Ack/Nak Disable0：不禁用core发送Ack/Nak DLLP;1：禁用core发送Ack/Nak DLLP。
        UINT32    Reserved_74           : 5   ; // [30..26] reserved
        UINT32    lane_skew             : 1   ; // [31] Disable Lane-to-Lane Deskew0：不禁用Lane-to-Lane Deskew;1：禁用Lane-to-Lane Deskew。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC5_U;

// Define the union PCIE_EEP_PORT_LOGIC6_U
// 端口逻辑寄存器
// 0x718
typedef union tagEepPortLogic6
{
    // Define the struct Bits
    struct
    {
        UINT32    numberoftssymbols     : 4   ; // [3..0] Number of TS Symbols
        UINT32    Reserved_76           : 4   ; // [7..4] Reserved
        UINT32    numberofskpsymbols    : 3   ; // [10..8] Number of SKP Symbols
        UINT32    Reserved_75           : 3   ; // [13..11] Reserved
        UINT32    timermodifierforreplaytimer  : 5   ; // [18..14] Timer Modifier for Replay Timer
        UINT32    timermodifierforack_naklatencytimer  : 5   ; // [23..19] Timer Modifier for Ack/Nak Latency Timer
        UINT32    timermodifierforflowcontrolwatchdogtimer  : 5   ; // [28..24] Timer Modifier for Flow Control Watchdog Timer
        UINT32    sym_num               : 3   ; // [31..29] Configuration Requests targeted at function numbers above this value will be returned with UR (unsupported request).
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC6_U;

// Define the union PCIE_EEP_PORT_LOGIC7_U
// 端口逻辑寄存器
// 0x71C
typedef union tagEepPortLogic7
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0posteddataqueuedepth  : 11  ; // [10..0] SKP Interval Value
        UINT32    Reserved_77           : 4   ; // [14..11] Reserved
        UINT32    sym_timer             : 1   ; // [15] Disable FC Watchdog Timer0：不禁用FC Watchdog Timer;1：禁用FC Watchdog Timer。
        UINT32    maskfunctionmismatchfilteringfo  : 1   ; // [16] Mask function mismatch filtering for incoming Requests0：不使用Mask;1：使用Mask。
        UINT32    maskpoisonedtlpfiltering  : 1   ; // [17] Mask poisoned TLP filtering0：不使用Mask;1：使用Mask。
        UINT32    maskbarmatchfiltering  : 1   ; // [18] Mask BAR match filtering0：不使用Mask;1：使用Mask。
        UINT32    masktype1configurationrequestfiltering  : 1   ; // [19] Mask Type 1 Configuration Request filtering0：不使用Mask;1：使用Mask。
        UINT32    masklockedrequestfiltering  : 1   ; // [20] Mask Locked Request filtering0：不使用Mask;1：使用Mask。
        UINT32    masktagerrorrulesforreceivedcompletions  : 1   ; // [21] Mask Tag error rules for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maskrequesteridmismatcherrorforreceivedcompletions  : 1   ; // [22] Mask Requester ID mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maskfunctionmismatcherrorforreceivedcompletions  : 1   ; // [23] Mask function mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_traffic_classmis_match_error_forreceived_completions  : 1   ; // [24] Mask Traffic Class mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_attributesmismatcherrorforreceivedcompletions  : 1   ; // [25] Mask Attributes mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_length_mismatch_error_forreceive_dcompletions  : 1   ; // [26] Mask Length mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maske_crcerror_filtering  : 1   ; // [27] Mask ECRC error filtering0：不使用Mask;1：使用Mask。
        UINT32    maske_crcerror_filtering_forcompletions  : 1   ; // [28] Mask ECRC error filtering for Completions0：不使用Mask;1：使用Mask。
        UINT32    message_control       : 1   ; // [29] 0：send decoded Message on the SII,then drop the Message TLPs;
        UINT32    maskfilteringofreceived  : 1   ; // [30] Mask filtering of received I/O Requests (RC mode only)0：不使用Mask;1：使用Mask。
        UINT32    flt_mask1             : 1   ; // [31] Mask filtering of received Configuration Requests (RC mode only)0：不使用Mask;1：使用Mask。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC7_U;

// Define the union PCIE_EEP_PORT_LOGIC8_U
// 端口逻辑寄存器
// 0x720
typedef union tagEepPortLogic8
{
    // Define the struct Bits
    struct
    {
        UINT32    cx_flt_mask_venmsg0_drop  : 1   ; // [0] CX_FLT_MASK_VENMSG0_DROP0：丢弃Vendor MSG Type 0并报告UR错误;1：不丢弃Vendor MSG Type 0。
        UINT32    cx_flt_mask_venmsg1_drop  : 1   ; // [1] CX_FLT_MASK_VENMSG1_DROP0：丢弃Vendor MSG Type 1;1：不丢弃Vendor MSG Type 1。
        UINT32    cx_flt_mask_dabort_4ucpl  : 1   ; // [2] CX_FLT_MASK_DABORT_4UCPL0：对于unexpected CPL使能DLLP abort;1：对于unexpected CPL禁用DLLP abort。
        UINT32    cx_flt_mask_handle_flush  : 1   ; // [3] CX_FLT_MASK_HANDLE_FLUSH0：禁用core filter处理flush请求;1：使能core filter处理flush请求。
        UINT32    flt_mask2             : 28  ; // [31..4] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC8_U;

// Define the union PCIE_EEP_PORT_LOGIC9_U
// 端口逻辑寄存器
// 0x724
typedef union tagEepPortLogic9
{
    // Define the struct Bits
    struct
    {
        UINT32    amba_multi_outbound_decomp_np  : 1   ; // [0] Enable AMBA Multiple Outbound Decomposed NP Sub-Request0：禁用;1：使能。
        UINT32    amba_obnp_ctrl        : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC9_U;

// Define the union PCIE_EEP_PORT_LOGIC12_U
// 端口逻辑寄存器
// 0x730
typedef union tagEepPortLogic12
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitposteddatafccredits  : 12  ; // [11..0] Transmit Posted Data FC Credits
        UINT32    transmitpostedheaderfccredits  : 8   ; // [19..12] Transmit Posted Header FC Credits
        UINT32    tx_pfc_status         : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC12_U;

// Define the union PCIE_EEP_PORT_LOGIC13_U
// 端口逻辑寄存器
// 0x734
typedef union tagEepPortLogic13
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitnon_posteddatafccredits  : 12  ; // [11..0] Transmit Non-Posted Data FC Credits
        UINT32    transmitnon_postedheaderfccredits  : 8   ; // [19..12] Transmit Non-Posted Header FC Credits
        UINT32    tx_npfc_status        : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC13_U;

// Define the union PCIE_EEP_PORT_LOGIC14_U
// 端口逻辑寄存器
// 0x738
typedef union tagEepPortLogic14
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitcompletiondatafccredits  : 12  ; // [11..0] Transmit Completion Data FC Credits
        UINT32    transmitcompletionheaderfccredits  : 8   ; // [19..12] Transmit Completion Header FC Credits
        UINT32    tx_cplfc_status       : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC14_U;

// Define the union PCIE_EEP_PORT_LOGIC15_U
// 端口逻辑寄存器
// 0x73C
typedef union tagEepPortLogic15
{
    // Define the struct Bits
    struct
    {
        UINT32    rx_tlp_fc_credit_not_retured  : 1   ; // [0] Received TLP FC Credits Not ReturnedIndicates that the core has sent a TLP but has not yet received anUpdateFC DLLP indicating that the credits for that TLP have been restoredby the receiver at the other end of the link
        UINT32    tx_retry_buf_not_empty  : 1   ; // [1] Transmit Retry Buffer Not EmptyIndicates that there is data in the transmit retry buffer.
        UINT32    rx_queue_not_empty    : 1   ; // [2] Received Queue Not EmptyIndicates there is data in one or more of the receive buffers
        UINT32    Reserved_79           : 13  ; // [15..3] Reserved
        UINT32    fc_latency_timer_override_value  : 13  ; // [28..16] FC Latency Timer Override Value
        UINT32    Reserved_78           : 2   ; // [30..29] Reserved
        UINT32    fc_latency_timer_override_en  : 1   ; // [31] FC Latency Timer Override Enable
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC15_U;

// Define the union PCIE_EEP_PORT_LOGIC16_U
// 端口逻辑寄存器
// 0x748
typedef union tagEepPortLogic16
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0posteddatacredits  : 12  ; // [11..0] VC0 Posted Data Credits
        UINT32    vc0postedheadercredits  : 8   ; // [19..12] VC0 Posted Header Credits
        UINT32    Reserved_81           : 1   ; // [20] Reserved
        UINT32    vc0_postedtlpqueuemode  : 1   ; // [21] VC0 Posted TLP Queue Mode0：未选择store-and-forword;1：选择store-and-forword。
        UINT32    vc0postedtlpqueuemode  : 1   ; // [22] VC0 Posted TLP Queue Mode0：未选择cut_through;1：选择cut_through。
        UINT32    vc0postedtlpqueuemo   : 1   ; // [23] VC0 Posted TLP Queue Mode0：未选择Bypass;1：选择Bypass。
        UINT32    Reserved_80           : 6   ; // [29..24] Reserved
        UINT32    tlptypeorderingforvc0  : 1   ; // [30] TLP Type Ordering for VC00：Strict ordering;1：Ordering follows the rules in PCIe 3.0。
        UINT32    rx_pque_ctrl          : 1   ; // [31] VC Ordering for Receive Queues0：round robin;
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC16_U;

// Define the union PCIE_EEP_PORT_LOGIC17_U
// 端口逻辑寄存器
// 0x74C
typedef union tagEepPortLogic17
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0non_posteddatacredits  : 12  ; // [11..0] VC0 Non-Posted data Credits
        UINT32    vc0non_postedheadercredits  : 8   ; // [19..12] VC0 Non-Posted Header Credits
        UINT32    rx_npque_ctrl         : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC17_U;

// Define the union PCIE_EEP_PORT_LOGIC18_U
// 端口逻辑寄存器
// 0x750
typedef union tagEepPortLogic18
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_comp_data_credits  : 12  ; // [11..0] VC0 Completion Data Credits
        UINT32    vc0_cpl_header_credt  : 8   ; // [19..12] VC0 Completion header credits
        UINT32    Reserved_83           : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC18_U;

// Define the union PCIE_EEP_PORT_LOGIC19_U
// 端口逻辑寄存器
// 0x7A8
typedef union tagEepPortLogic19
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_posted_data_que_path  : 14  ; // [13..0] VC0 Posted Data Queue Depth
        UINT32    Reserved_84           : 2   ; // [15..14] Reserved
        UINT32    vco_posted_head_queue_depth  : 10  ; // [25..16] VC0 Posted Header Queue Depth
        UINT32    vc_pbuf_ctrl          : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC19_U;

// Define the union PCIE_EEP_PORT_LOGIC20_U
// 端口逻辑寄存器
// 0x7AC
typedef union tagEepPortLogic20
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_np_data_que_depth  : 14  ; // [13..0] VC0 Non-Posted Data Queue Depth
        UINT32    Reserved_86           : 2   ; // [15..14] Reserved
        UINT32    vco_np_header_que_depth  : 10  ; // [25..16] VC0 Non-Posted Header Queue Depth
        UINT32    vc_npbuf_ctrl         : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC20_U;

// Define the union PCIE_EEP_PORT_LOGIC21_U
// 端口逻辑寄存器
// 0x7B0
typedef union tagEepPortLogic21
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_comp_data_queue_depth  : 14  ; // [13..0] VC0 Completion Data Queue Depth
        UINT32    Reserved_88           : 2   ; // [15..14] Reserved
        UINT32    vco_posted_head_queue_depth  : 10  ; // [25..16] VC0 Posted Header Queue Depth
        UINT32    Reserved_87           : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC21_U;

// Define the union PCIE_EEP_PORT_LOGIC22_U
// 端口逻辑寄存器
// 0x80C
typedef union tagEepPortLogic22
{
    // Define the struct Bits
    struct
    {
        UINT32    n_fts                 : 8   ; // [7..0] Sets the Number of Fast Training Sequences (N_FTS) that the core advertises as its N_FTS during Gen2 or Gen3 Link training
        UINT32    pre_determ_num_of_lane  : 9   ; // [16..8] Predetermined Number of Lanes1：1 lane;2：2 lanes;其他值：保留。
        UINT32    det_sp_change         : 1   ; // [17] Directed Speed Change0：指示LTSSM在链路初始化完成后不改变到GEN2速率;1：指示LTSSM在链路初始化完成后改变到GEN2速率。
        UINT32    config_phy_tx_sw      : 1   ; // [18] Config PHY Tx Swing0：Low Swing;1：Full Swing。
        UINT32    config_tx_comp_rcv_bit  : 1   ; // [19] Config Tx Compliance Receive Bit0：不指示LTSSM发送含有声明compliance接受比特的TS有序集;1：指示LTSSM发送含有声明compliance接受比特的TS有序集。
        UINT32    set_emp_level         : 1   ; // [20] Used to set the de-emphasis level for Upstream Ports0：-6dB;1：-3.5dB。
        UINT32    Reserved_89           : 11  ; // [31..21] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORT_LOGIC22_U;

// Define the union PCIE_EEP_PORTLOGIC25_U
// 端口逻辑寄存器
// 0x818
typedef union tagEepPortlogic25
{
    // Define the struct Bits
    struct
    {
        UINT32    remote_rd_req_size    : 3   ; // [2..0] Remote Read Request Size000：128;001：256;010：512;011：1024;100：2048;101：4096;110：保留;111：保留。
        UINT32    Reserved_92           : 5   ; // [7..3] Reserved
        UINT32    remote_max_brd_tag    : 8   ; // [15..8] Remote Max Bridge Tag
        UINT32    Reserved_91           : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC25_U;

// Define the union PCIE_EEP_PORTLOGIC26_U
// 端口逻辑寄存器
// 0x81C
typedef union tagEepPortlogic26
{
    // Define the struct Bits
    struct
    {
        UINT32    resize_master_resp_compser  : 1   ; // [0] Resize Master Response Composer0：不改变AXI Master Response Composer Contro Register 0的值;1：改变AXI Master Response Composer Contro Register 0的值。
        UINT32    axi_ctrl1             : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC26_U;

// Define the union PCIE_EEP_PORTLOGIC54_U
// 端口逻辑寄存器
// 0x900
typedef union tagEepPortlogic54
{
    // Define the struct Bits
    struct
    {
        UINT32    region_index          : 4   ; // [3..0] Region Index
        UINT32    Reserved_93           : 27  ; // [30..4] Reserved
        UINT32    iatu_view             : 1   ; // [31] Region Direction0：Outbound;1：Inbound。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC54_U;

// Define the union PCIE_EEP_PORTLOGIC55_U
// 端口逻辑寄存器
// 0x904
typedef union tagEepPortlogic55
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu1_type            : 5   ; // [4..0] 出站TLP的地址在该区域内则该TLP的TYPE字段用该值替换;入站TLP的TYPE字段如果等于该值则执行地址转换。
        UINT32    iatu1_tc              : 3   ; // [7..5] 出站TLP的地址在该区域内则该TLP的TC字段用该值替换;入站TLP的TC字段如果等于该值则执行地址转换。
        UINT32    iatu1_td              : 1   ; // [8] 出站TLP的地址在该区域内则该TLP的TD字段用该值替换;入站TLP的TD字段如果等于该值则执行地址转换。
        UINT32    iatu1_attr            : 2   ; // [10..9] 出站TLP的地址在该区域内则该TLP的ATTR字段用该值替换;入站TLP的ATTR字段如果等于该值则执行地址转换。
        UINT32    Reserved_97           : 5   ; // [15..11] Reserved
        UINT32    iatu1_at              : 2   ; // [17..16] 出站TLP的地址在该区域内则该TLP的AT字段用该值替换;入站TLP的AT字段如果等于该值则执行地址转换。
        UINT32    Reserved_96           : 2   ; // [19..18] Reserved
        UINT32    iatu1_id              : 3   ; // [22..20] 出站TLP的地址在该区域内则该TLP的Requester ID的功能号字段用该值替换;对于入站MEM/IO，如果与该功能号的BAR匹配，则执行地址转换;对于入站CFG，如果功能号字段等于该值则执行地址转换。
        UINT32    Reserved_95           : 9   ; // [31..23] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC55_U;

// Define the union PCIE_EEP_PORTLOGIC56_U
// 端口逻辑寄存器
// 0x908
typedef union tagEepPortlogic56
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu2_type            : 8   ; // [7..0] 出站TLP的地址在该区域内，并且转换的TLP的TYPE字段为消息，那么该TLP的Message Code字段用该值替换;
        UINT32    iatu2_bar_num         : 3   ; // [10..8] BAR Number对于Outbound不适用。
        UINT32    Reserved_101          : 3   ; // [13..11] Reserved
        UINT32    iatu2_tc_match_en     : 1   ; // [14] TC Match Enable对于Outbound不适用。
        UINT32    iatu2_td_match_en     : 1   ; // [15] TD Match Enable对于Outbound不适用。
        UINT32    iatu2_attr_match_en   : 1   ; // [16] ATTR Match Enable对于Outbound不适用。
        UINT32    Reserved_100          : 1   ; // [17] Reserved
        UINT32    iatu2_at_match_en     : 1   ; // [18] AT Match Enable对于Outbound不适用。
        UINT32    iatu2_func_num_match_en  : 1   ; // [19] Function Number Match Enable对于Outbound不适用。
        UINT32    iatu2_virtual_func_num_match_en  : 1   ; // [20] Virtual Function Number Match Enable对于Outbound不适用。
        UINT32    message_code_match_en  : 1   ; // [21] Message Code Match Enable对于Outbound不适用。
        UINT32    Reserved_99           : 2   ; // [23..22] Reserved
        UINT32    iatu2_response_code   : 2   ; // [25..24] Response Code对于Outbound不适用。
        UINT32    Reserved_98           : 1   ; // [26] Reserved
        UINT32    iatu2_fuzzy_type_match_mode  : 1   ; // [27] Fuzzy Type Match Mode对于Outbound不适用。
        UINT32    iatu2_cfg_shift_mode  : 1   ; // [28] CFG Shift Mode0：不使用CFG Shift Mode;1：使用CFG Shift Mode。
        UINT32    iatu2_ivert_mode      : 1   ; // [29] Invert Mode0：不使用Invert Mode;1：使用Invert Mode。
        UINT32    iatu2_match_mode      : 1   ; // [30] Match Mode对于Outbound不适用。
        UINT32    iatu2_region_en       : 1   ; // [31] Region Enable0：禁用该区域地址转换;1：使能该区域地址转换。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC56_U;

// Define the union PCIE_EEP_PORTLOGIC57_U
// 端口逻辑寄存器
// 0x90C
typedef union tagEepPortlogic57
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu_start_low        : 12  ; // [11..0] Forms Bits [11:0] of the start address of the address region to be translated.
        UINT32    iatu_start_high       : 20  ; // [31..12] Forms Bits [31:12] of the start address of the address region to be translated.
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC57_U;

// Define the union PCIE_EEP_PORTLOGIC59_U
// 端口逻辑寄存器
// 0x914
typedef union tagEepPortlogic59
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu_limit_low        : 12  ; // [11..0] Forms Bits [11:0] of the end address of the address region to be translated
        UINT32    iatu_limit_high       : 20  ; // [31..12] Forms Bits [31:12] of the end address of the address region to be translated
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC59_U;

// Define the union PCIE_EEP_PORTLOGIC60_U
// 端口逻辑寄存器
// 0x918
typedef union tagEepPortlogic60
{
    // Define the struct Bits
    struct
    {
        UINT32    xlated_addr_high      : 12  ; // [11..0] Forms Bits [11:0] of the start address of the new address of the translated region
        UINT32    xlated_addr_low       : 20  ; // [31..12] Forms Bits [31:12] of the of the new address of the translated region
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC60_U;

// Define the union PCIE_EEP_PORTLOGIC62_U
// 端口逻辑寄存器
// 0x97C
typedef union tagEepPortlogic62
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_wr_eng_en         : 1   ; // [0] DMA Write Engine Enable0：禁用DMA Write Engine;1：使能DMA Write Engine。
        UINT32    dma_wr_ena            : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC62_U;

// Define the union PCIE_EEP_PORTLOGIC63_U
// 端口逻辑寄存器
// 0x980
typedef union tagEepPortlogic63
{
    // Define the struct Bits
    struct
    {
        UINT32    wr_doorbell_num       : 3   ; // [2..0] Doorbell Number必须写入0x0来启动DMA写操作，目前仅支持单通道。
        UINT32    Reserved_103          : 28  ; // [30..3] Reserved
        UINT32    dma_wr_dbell_stop     : 1   ; // [31] Stop0：不停止产生请求;1：停止产生请求。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC63_U;

// Define the union PCIE_EEP_PORTLOGIC64_U
// 端口逻辑寄存器
// 0x99C
typedef union tagEepPortlogic64
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_read_eng_en       : 1   ; // [0] DMA Read Engine Enable0：禁用DMA Read Engine;1：使能DMA Read Engine。
        UINT32    Reserved_104          : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC64_U;

// Define the union PCIE_EEP_PORTLOGIC65_U
// 端口逻辑寄存器
// 0x9A0
typedef union tagEepPortlogic65
{
    // Define the struct Bits
    struct
    {
        UINT32    rd_doorbell_num       : 3   ; // [2..0] Doorbell Number必须写入0x0来启动DMA读操作，目前仅支持单通道。
        UINT32    Reserved_106          : 28  ; // [30..3] Reserved
        UINT32    dma_rd_dbell_stop     : 1   ; // [31] Stop0：不停止产生请求;1：停止产生请求。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC65_U;

// Define the union PCIE_EEP_PORTLOGIC66_U
// 端口逻辑寄存器
// 0x9BC
typedef union tagEepPortlogic66
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_status       : 8   ; // [7..0] Done Interrupt Status0：未产生完成中断;1：产生完成中断。
        UINT32    Reserved_108          : 8   ; // [15..8] Reserved
        UINT32    abort_int_status      : 8   ; // [23..16] Abort Interrupt Status0：未丢弃出错传输;1：丢弃出错传输。
        UINT32    Reserved_107          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC66_U;

// Define the union PCIE_EEP_PORTLOGIC67_U
// 端口逻辑寄存器
// 0x9C4
typedef union tagEepPortlogic67
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_mask         : 8   ; // [7..0] Done Interrupt Mask0：不使用Done Interrupt Mask;1：使用Done Interrupt Mask。
        UINT32    Reserved_111          : 8   ; // [15..8] Reserved
        UINT32    abort_int_mask        : 8   ; // [23..16] Abort Interrupt Mask0：不使用Abort Interrupt Mask;
        UINT32    Reserved_110          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC67_U;

// Define the union PCIE_EEP_PORTLOGIC68_U
// 端口逻辑寄存器
// 0x9C8
typedef union tagEepPortlogic68
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_clr          : 8   ; // [7..0] Done Interrupt Clear0：不清除Done Interrupt Status字段;1：清除Done Interrupt Status字段。
        UINT32    Reserved_114          : 8   ; // [15..8] Reserved
        UINT32    abort_int_clr         : 8   ; // [23..16] Abort Interrupt Clear0：不清除Abort Interrupt Status字段;1：清除Abort Interrupt Status字段。
        UINT32    Reserved_113          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC68_U;

// Define the union PCIE_EEP_PORTLOGIC69_U
// 端口逻辑寄存器
// 0x9CC
typedef union tagEepPortlogic69
{
    // Define the struct Bits
    struct
    {
        UINT32    app_rd_err_det        : 8   ; // [7..0] Application Read Error Detected0：未检测到Application Read Error ;1：检测到Application Read Error。
        UINT32    Reserved_116          : 8   ; // [15..8] Reserved
        UINT32    ll_element_fetch_err_det  : 8   ; // [23..16] Linked List Element Fetch Error Detected0：未检测到Linked List Element Fetch Error;1：检测到Linked List Element Fetch Error。
        UINT32    Reserved_115          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC69_U;

// Define the union PCIE_EEP_PORTLOGIC74_U
// 端口逻辑寄存器
// 0x9E0
typedef union tagEepPortlogic74
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_wr_c0_imwr_data   : 16  ; // [15..0] The DMA uses this field to generate the data field for the Done or Abort IMWr TLPs it generates for write Channel 0
        UINT32    dma_wr_c1_imwr_data   : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC74_U;

// Define the union PCIE_EEP_PORTLOGIC75_U
// 端口逻辑寄存器
// 0xA00
typedef union tagEepPortlogic75
{
    // Define the struct Bits
    struct
    {
        UINT32    wr_ch_ll_remote_abort_int_en  : 8   ; // [7..0] Write Channel LL Remote Abort Interrupt Enable (LLRAIE)0：禁用Write Channel LL Remote Abort Interrupt;1：使能Write Channel LL Remote Abort Interrupt。
        UINT32    Reserved_118          : 8   ; // [15..8] Reserved
        UINT32    wr_ch_ll_local_abort_int_en  : 8   ; // [23..16] Write Channel LL Local Abort Interrupt Enable (LLLAIE)0：禁用Write Channel LL Local Abort Interrupt;1：使能Write Channel LL Local Abort Interrupt。
        UINT32    Reserved_117          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC75_U;

// Define the union PCIE_EEP_PORTLOGIC76_U
// 端口逻辑寄存器
// 0xA10
typedef union tagEepPortlogic76
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_status       : 8   ; // [7..0] Done Interrupt Status0：未产生完成中断;1：产生完成中断。
        UINT32    Reserved_121          : 8   ; // [15..8] Reserved
        UINT32    abort_int_status      : 8   ; // [23..16] Abort Interrupt Status0：未丢弃出错传输;1：丢弃出错传输。
        UINT32    Reserved_120          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC76_U;

// Define the union PCIE_EEP_PORTLOGIC77_U
// 端口逻辑寄存器
// 0xA18
typedef union tagEepPortlogic77
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_mask         : 8   ; // [7..0] Done Interrupt Mask0：不使用Done Interrupt Mask;1：使用Done Interrupt Mask。
        UINT32    Reserved_123          : 8   ; // [15..8] Reserved
        UINT32    abort_int_mask        : 8   ; // [23..16] Abort Interrupt Mask0：不使用Abort Interrupt Mask;
        UINT32    dma_rd_int_mask       : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC77_U;

// Define the union PCIE_EEP_PORTLOGIC78_U
// 端口逻辑寄存器
// 0xA1C
typedef union tagEepPortlogic78
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_clr          : 8   ; // [7..0] Done Interrupt Clear0：不清除Done Interrupt Status字段;1：清除Done Interrupt Status字段。
        UINT32    Reserved_125          : 8   ; // [15..8] Reserved
        UINT32    abort_int_clr         : 8   ; // [23..16] Abort Interrupt Clear0：不清除Abort Interrupt Status字段;1：清除Abort Interrupt Status字段。
        UINT32    dma_rd_int_clr        : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC78_U;

// Define the union PCIE_EEP_PORTLOGIC79_U
// 端口逻辑寄存器
// 0xA24
typedef union tagEepPortlogic79
{
    // Define the struct Bits
    struct
    {
        UINT32    app_wr_err_det        : 8   ; // [7..0] Application Read Error Detected0：未检测到Application Read Error ;1：检测到Application Read Error。
        UINT32    Reserved_126          : 8   ; // [15..8] Reserved
        UINT32    link_list_fetch_err_det  : 8   ; // [23..16] Linked List Element Fetch Error Detected0：未检测到Linked List Element Fetch Error;1：检测到Linked List Element Fetch Error。
        UINT32    dma_rd_err_low        : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC79_U;

// Define the union PCIE_EEP_PORTLOGIC80_U
// 端口逻辑寄存器
// 0xA28
typedef union tagEepPortlogic80
{
    // Define the struct Bits
    struct
    {
        UINT32    unspt_request         : 8   ; // [7..0] Unsupported Request0：未检测到Unsupported Request;1：检测到Unsupported Request。
        UINT32    completer_abort       : 8   ; // [15..8] Completer Abort0：未检测到Completer Abort;1：检测到Completer Abort。
        UINT32    cpl_time_out          : 8   ; // [23..16] Completion Time Out
        UINT32    data_poison           : 8   ; // [31..24] Data Poisoning0：未检测到Data Poisoning;1：检测到Data Poisoning。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC80_U;

// Define the union PCIE_EEP_PORTLOGIC81_U
// 端口逻辑寄存器
// 0xA34
typedef union tagEepPortlogic81
{
    // Define the struct Bits
    struct
    {
        UINT32    remote_abort_int_en   : 8   ; // [7..0] Read Channel LL Remote Abort Interrupt Enable (LLRAIE)0：禁用Read Channel LL Remote Abort Interrupt;1：使能Read Channel LL Remote Abort Interrupt。
        UINT32    Reserved_128          : 8   ; // [15..8] Reserved
        UINT32    local_abort_int_en    : 8   ; // [23..16] Read Channel LL Local Abort Interrupt Enable (LLLAIE)0：禁用Read Channel LL Local Abort Interrupt;1：使能Read Channel LL Local Abort Interrupt。
        UINT32    dma_rd_ll_err_ena     : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC81_U;

// Define the union PCIE_EEP_PORTLOGIC86_U
// 端口逻辑寄存器
// 0xA6C
typedef union tagEepPortlogic86
{
    // Define the struct Bits
    struct
    {
        UINT32    channel_dir           : 3   ; // [2..0] 
        UINT32    Reserved_131          : 28  ; // [30..3] Reserved
        UINT32    dma_ch_con_idx        : 1   ; // [31] Channel Direction0：写通道0;1：读通道0。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC86_U;

// Define the union PCIE_EEP_PORTLOGIC87_U
// 端口逻辑寄存器
// 0xA70
typedef union tagEepPortlogic87
{
    // Define the struct Bits
    struct
    {
        UINT32    cycle_bit             : 1   ; // [0] Cycle Bit (CB)
        UINT32    toggle_cycle_bit      : 1   ; // [1] Toggle Cycle Bit (TCB)
        UINT32    load_link_pointer     : 1   ; // [2] Load Link Pointer (LLP)
        UINT32    local_int_en          : 1   ; // [3] Local Interrupt Enable (LIE)0：禁用Local Interrupt;1：使能Local Interrupt。
        UINT32    remote_int_en         : 1   ; // [4] Remote Interrupt Enable (RIE)0：禁用Remote Interrupt;1：使能Remote Interrupt。
        UINT32    channel_status        : 2   ; // [6..5] Channel Status00：保留;01：Running;10：Halted;11：Stopped。
        UINT32    Reserved_135          : 1   ; // [7] Reserved
        UINT32    consumer_cycle_state  : 1   ; // [8] Consumer Cycle State (CCS)
        UINT32    linked_list_en        : 1   ; // [9] Linked List Enable (LLE)0：禁用Linked List;1：使能Linked List。
        UINT32    Reserved_134          : 2   ; // [11..10] Reserved
        UINT32    func_num_dma          : 5   ; // [16..12] Function Number (FN) for Generated MRd/MWr DMA TLPs
        UINT32    Reserved_133          : 7   ; // [23..17] Reserved
        UINT32    no_snoop              : 1   ; // [24] No Snoop TLP Header Bit (NS)
        UINT32    ro                    : 1   ; // [25] Relaxed Ordering TLP Header Bit (RO)
        UINT32    td                    : 1   ; // [26] Traffic Digest TLP Header Bit (TD)
        UINT32    tc                    : 3   ; // [29..27] Traffic Class TLP Header Bit (TC)
        UINT32    dma_ch_ctrl           : 2   ; // [31..30] Address Translation TLP Header Bit (AT)
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC87_U;

// Define the union PCIE_EEP_PORTLOGIC93_U
// 端口逻辑寄存器
// 0xA8C
typedef union tagEepPortlogic93
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_137          : 2   ; // [1..0] Reserved
        UINT32    dma_ll_ptr_low        : 30  ; // [31..2] Lower Bits of the address of the Linked List Transfer List in local memory
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EEP_PORTLOGIC93_U;
/******************************************************************************/
/*                      PhosphorV660 NTB 寄存器定义                           */
/******************************************************************************/
#define PCIE_MEEP_SBAR23XLAT_LOWER_REG            (0x0)          /* SBAR23地址转换寄存器低32位 */
#define PCIE_MEEP_SBAR23XLAT_UPPER_REG            (0x4)          /* SBAR23地址转换寄存器高32位 */
#define PCIE_MEEP_SBAR45XLAT_LOWER_REG            (0x8)          /* SBAR45地址转换寄存器低32位 */
#define PCIE_MEEP_SBAR45XLAT_UPPER_REG            (0xC)          /* SBAR45地址转换寄存器高32位 */
#define PCIE_MEEP_SBAR23LMT_LOWER_REG             (0x10)         /* SBAR23的limit寄存器低32位 */
#define PCIE_MEEP_SBAR23LMT_UPPER_REG             (0x14)         /* SBAR23的limit寄存器高32位 */
#define PCIE_MEEP_SBAR45LMT_LOWER_REG             (0x18)         /* SBAR45的limit寄存器低32位 */
#define PCIE_MEEP_SBAR45LMT_UPPER_REG             (0x1C)         /* SBAR45的limit寄存器高32位 */
#define PCIE_MEEP_SDOORBELL_REG                   (0x20)         /* Secondary侧的门铃寄存器 */
#define PCIE_MEEP_SDOORBELL_MASK_REG              (0x24)         /* Secondary侧的门铃屏蔽寄存器 */
#define PCIE_MEEP_CBDF_SBDF_REG                   (0x28)         /* Secondary侧的BDF */
#define PCIE_MEEP_NTB_CNTL_REG                    (0x2C)         /* NTB控制寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR0_REG                (0x1000)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR1_REG                (0x1004)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR2_REG                (0x1008)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR3_REG                (0x100C)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR4_REG                (0x1010)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR5_REG                (0x1014)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR6_REG                (0x1018)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR7_REG                (0x101C)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR8_REG                (0x1020)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR9_REG                (0x1024)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR10_REG               (0x1028)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR11_REG               (0x102C)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR12_REG               (0x1030)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR13_REG               (0x1034)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR14_REG               (0x1038)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_CFG_HDR15_REG               (0x103C)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MEEP_PCI_PM_CAP0_REG                 (0x1040)       /* PCI电源管理功能寄存器 */
#define PCIE_MEEP_PCI_PM_CAP1_REG                 (0x1044)       /* PCI电源管理功能寄存器 */
#define PCIE_MEEP_PCI_MSI_CAP0_REG                (0x1050)       /* PCI MSI功能寄存器 */
#define PCIE_MEEP_PCI_MSI_CAP1_REG                (0x1054)       /* PCI MSI功能寄存器 */
#define PCIE_MEEP_PCI_MSI_CAP2_REG                (0x1058)       /* PCI MSI功能寄存器 */
#define PCIE_MEEP_PCI_MSI_CAP3_REG                (0x105C)       /* PCI MSI功能寄存器 */
#define PCIE_MEEP_PCIE_CAP0_REG                   (0x1070)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP1_REG                   (0x1074)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP2_REG                   (0x1078)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP3_REG                   (0x107C)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP4_REG                   (0x1080)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP5_REG                   (0x1084)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP6_REG                   (0x1088)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP7_REG                   (0x108C)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP8_REG                   (0x1090)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP9_REG                   (0x1094)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP10_REG                  (0x1098)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP11_REG                  (0x109C)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_PCIE_CAP12_REG                  (0x10A0)       /* PCI Express功能寄存器 */
#define PCIE_MEEP_SLOT_CAP_REG                    (0x10C0)       /* Slot Numbering功能寄存器 */
#define PCIE_MEEP_AER_CAP0_REG                    (0x1100)       /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP1_REG                    (0x1104)       /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP2_REG                    (0x1108)       /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP3_REG                    (0x110C)       /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP4_REG                    (0x1110)       /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP5_REG                    (0x1114)       /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP6_REG                    (0x1118)       /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP7_REG                    (0x11C)        /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP8_REG                    (0x120)        /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP9_REG                    (0x124)        /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP10_REG                   (0x128)        /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP11_REG                   (0x112C)       /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP12_REG                   (0x1130)       /* 高级错误报告寄存器 */
#define PCIE_MEEP_AER_CAP13_REG                   (0x1134)       /* 高级错误报告寄存器 */
#define PCIE_MEEP_VC_CAP0_REG                     (0x1140)       /* 虚拟通道功能寄存器 */
#define PCIE_MEEP_VC_CAP1_REG                     (0x1144)       /* 虚拟通道功能寄存器 */
#define PCIE_MEEP_VC_CAP2_REG                     (0x1148)       /* 虚拟通道功能寄存器 */
#define PCIE_MEEP_VC_CAP3_REG                     (0x114C)       /* 虚拟通道功能寄存器 */
#define PCIE_MEEP_VC_CAP4_REG                     (0x1150)       /* 虚拟通道功能寄存器 */
#define PCIE_MEEP_VC_CAP5_REG                     (0x1154)       /* 虚拟通道功能寄存器 */
#define PCIE_MEEP_VC_CAP6_REG                     (0x1158)       /* 虚拟通道功能寄存器 */
#define PCIE_MEEP_VC_CAP7_REG                     (0x115C)       /* 虚拟通道功能寄存器 */
#define PCIE_MEEP_VC_CAP8_REG                     (0x1160)       /* 虚拟通道功能寄存器 */
#define PCIE_MEEP_VC_CAP9_REG                     (0x1164)       /* 虚拟通道功能寄存器 */
#define PCIE_MEEP_PORT_LOGIC0_REG                 (0x1700)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC1_REG                 (0x1704)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC2_REG                 (0x1708)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC3_REG                 (0x170C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC4_REG                 (0x1710)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC5_REG                 (0x1714)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC6_REG                 (0x1718)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC7_REG                 (0x171C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC8_REG                 (0x1720)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC9_REG                 (0x1724)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC10_REG                (0x1728)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC11_REG                (0x172C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC12_REG                (0x1730)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC13_REG                (0x1734)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC14_REG                (0x1738)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC15_REG                (0x173C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC16_REG                (0x1748)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC17_REG                (0x174C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC18_REG                (0x1750)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC19_REG                (0x17A8)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC20_REG                (0x17AC)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC21_REG                (0x17B0)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORT_LOGIC22_REG                (0x180C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC23_REG                 (0x1810)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC24_REG                 (0x1814)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC25_REG                 (0x1818)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC26_REG                 (0x181C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC27_REG                 (0x1820)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC28_REG                 (0x1824)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC29_REG                 (0x1828)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC30_REG                 (0x182C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC31_REG                 (0x1830)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC32_REG                 (0x1834)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC33_REG                 (0x1838)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC34_REG                 (0x183C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC35_REG                 (0x1840)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC36_REG                 (0x1844)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC37_REG                 (0x1848)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC38_REG                 (0x184C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC39_REG                 (0x1850)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC40_REG                 (0x1854)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC41_REG                 (0x1858)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC42_REG                 (0x185C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC43_REG                 (0x1860)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC44_REG                 (0x1864)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC45_REG                 (0x1868)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC46_REG                 (0x186C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC47_REG                 (0x1870)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC48_REG                 (0x1874)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC49_REG                 (0x1878)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC50_REG                 (0x187C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC51_REG                 (0x1880)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC52_REG                 (0x1884)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC53_REG                 (0x1888)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC54_REG                 (0x1900)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC55_REG                 (0x1904)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC56_REG                 (0x908)        /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC57_REG                 (0x190C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC58_REG                 (0x1910)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC59_REG                 (0x1914)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC60_REG                 (0x1918)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC61_REG                 (0x191C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC62_REG                 (0x197C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC63_REG                 (0x1980)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC64_REG                 (0x199C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC65_REG                 (0x19A0)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC66_REG                 (0x19BC)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC67_REG                 (0x19C4)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC68_REG                 (0x19C8)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC69_REG                 (0x19CC)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC70_REG                 (0x19D0)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC71_REG                 (0x19D4)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC72_REG                 (0x19D8)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC73_REG                 (0x19DC)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC74_REG                 (0x19E0)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC75_REG                 (0x1A00)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC76_REG                 (0x1A10)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC77_REG                 (0x1A18)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC78_REG                 (0x1A1C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC79_REG                 (0x1A24)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC80_REG                 (0x1A28)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC81_REG                 (0x1A34)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC82_REG                 (0x1A3C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC83_REG                 (0x1A40)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC84_REG                 (0x1A44)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC85_REG                 (0xA48)        /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC86_REG                 (0xA6C)        /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC87_REG                 (0x1A70)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC88_REG                 (0x1A78)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC89_REG                 (0x1A7C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC90_REG                 (0x1A80)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC91_REG                 (0x1A84)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC92_REG                 (0x1A88)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC93_REG                 (0x1A8C)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PORTLOGIC94_REG                 (0x1A90)       /* 端口逻辑寄存器 */
#define PCIE_MEEP_PBAR23XLAT_LOWER_REG            (0x8000)       /* PBAR23地址转换寄存器低32位 */
#define PCIE_MEEP_PBAR23XLAT_UPPER_REG            (0x8004)       /* PBAR23地址转换寄存器高32位 */
#define PCIE_MEEP_PBAR45XLAT_LOWER_REG            (0x8008)       /* PBAR45地址转换寄存器低32位 */
#define PCIE_MEEP_PBAR45XLAT_UPPER_REG            (0x800C)       /* PBAR45地址转换寄存器高32位 */
#define PCIE_MEEP_PBAR23LMT_LOWER_REG             (0x8010)       /* PBAR23的limit寄存器低32位 */
#define PCIE_MEEP_PBAR23LMT_UPPER_REG             (0x8014)       /* PBAR23的limit寄存器高32位 */
#define PCIE_MEEP_PBAR45LMT_LOWER_REG             (0x8018)       /* PBAR45的limit寄存器低32位 */
#define PCIE_MEEP_PBAR45LMT_UPPER_REG             (0x801C)       /* PBAR45的limit寄存器高32位 */
#define PCIE_MEEP_PDOORBELL_REG                   (0x8020)       /* 8020 */
#define PCIE_MEEP_PDOORBELL_MASK_REG              (0x8024)       /* Primary侧的门铃屏蔽寄存器 */
#define PCIE_MEEP_B2B_BAR01XLAT_LOWER_REG         (0x8028)       /* B2B模式PBAR01地址转换寄存器低32位 */
#define PCIE_MEEP_B2B_BAR01XLAT_UPPER_REG         (0x802C)       /* B2B模式PBAR01地址转换寄存器高32位 */
#define PCIE_MEEP_B2B_DOORBELL_REG                (0x8030)       /* B2B模式下的DOORBELL寄存器 */
#define PCIE_MEEP_SPAD0_REG                       (0x8038)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD1_REG                       (0x803C)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD2_REG                       (0x8040)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD3_REG                       (0x8044)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD4_REG                       (0x8048)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD5_REG                       (0x804C)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD6_REG                       (0x8050)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD7_REG                       (0x8054)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD8_REG                       (0x8058)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD9_REG                       (0x805C)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD10_REG                      (0x8060)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD11_REG                      (0x8064)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD12_REG                      (0x8068)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD13_REG                      (0x806C)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD14_REG                      (0x8070)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD15_REG                      (0x8074)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD16_REG                      (0x8078)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD17_REG                      (0x807C)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD18_REG                      (0x8080)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD19_REG                      (0x8084)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD20_REG                      (0x8088)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD21_REG                      (0x808C)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD22_REG                      (0x8090)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD23_REG                      (0x8094)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD24_REG                      (0x8098)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD25_REG                      (0x809C)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD26_REG                      (0x80A0)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD27_REG                      (0x80A4)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD28_REG                      (0x80A8)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD29_REG                      (0x80AC)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD30_REG                      (0x80B0)       /* 便签本寄存器 */
#define PCIE_MEEP_SPAD31_REG                      (0x80B4)       /* 便签本寄存器 */
#define PCIE_MEEP_PPD_REG                         (0x8138)       /* 端口定义寄存器 */
#define PCIE_MEEP_DEVICE_VENDOR_ID_REG            (0x9000)       /* 设备ID和厂商ID */
#define PCIE_MEEP_PCISTS_PCICMD_REG               (0x9004)       /* 控制和状况寄存器 */
#define PCIE_MEEP_CCR_RID_REG                     (0x9008)       /* 类代码和修订版ID */
#define PCIE_MEEP_PBAR01_BASE_LOWER_REG           (0x9010)       /* 基地址寄存器01低32位 */
#define PCIE_MEEP_PBAR01_BASE_UPPER_REG           (0x9014)       /* 基地址寄存器01高32位 */
#define PCIE_MEEP_PBAR23_BASE_LOWER_REG           (0x9018)       /* 基地址寄存器23低32位 */
#define PCIE_MEEP_PBAR23_BASE_UPPER_REG           (0x901C)       /* 基地址寄存器23低32位 */
#define PCIE_MEEP_PBAR45_BASE_LOWER_REG           (0x9020)       /* 基地址寄存器45高32位 */
#define PCIE_MEEP_PBAR45_BASE_UPPER_REG           (0x9024)       /* 基地址寄存器45高32位 */
#define PCIE_MEEP_CARDBUSCISPTR_REG               (0x9028)       /* Card Bus CIS指针 */
#define PCIE_MEEP_SUBSYSTEMID_REG                 (0x902C)       /* 子系统Vendor ID */
#define PCIE_MEEP_EXPANSIONROM_BASE_ADDR_REG      (0x9030)       /* 扩展ROM基地址 */
#define PCIE_MEEP_CAPPTR_REG                      (0x9034)       /* 功能指针 */
#define PCIE_MEEP_INTERRUPT_REG                   (0x903C)       /* 中断引脚，中断线 */
#define PCIE_MEEP_MSI_CAPABILITY_REGISTER_REG     (0x9050)       /* MSI功能寄存器 */
#define PCIE_MEEP_MSI_LOWER32_BITADDRESS_REG      (0x9054)       /* MSI低32位地址寄存器 */
#define PCIE_MEEP_MSI_UPPER32_BIT_ADDRESS_REG     (0x9058)       /* MSI高32位地址寄存器 */
#define PCIE_MEEP_MSI_DATA_REG                    (0x905C)       /* MSI数据 */
#define PCIE_MEEP_MSI_MASK_REG                    (0x9060)       /* MSI屏蔽寄存器 */
#define PCIE_MEEP_MSI_PENDING_REG                 (0x9064)       /* MSI状态寄存器 */
#define PCIE_MEEP_PCIE_CAPABILITY_REGISTER_REG    (0x9070)       /* PCIe功能寄存器组 */
#define PCIE_MEEP_DEVICE_CAPABILITIES_REGISTER_REG  (0x9074)       /* 设备功能寄存器 */
#define PCIE_MEEP_DEVICE_STATUS_REGISTER_REG      (0x9078)       /* 设备状况和控制寄存器 */
#define PCIE_MEEP_LINK_CAPABILITY_REG             (0x907C)       /* 链路功能寄存器 */
#define PCIE_MEEP_LINK_CONTROL_STATUS_REG         (0x9080)       /* 链路控制和状况寄存器 */
#define PCIE_MEEP_AER_CAP_HEADER_REG              (0x9100)       /* AER功能寄存器头 */
#define PCIE_MEEP_UC_ERROR_STATUS_REG             (0x9104)       /* 不可修正错误状况寄存器 */
#define PCIE_MEEP_UC_ERROR_MASK_REG               (0x9108)       /* 不可修正错误屏蔽寄存器 */
#define PCIE_MEEP_UC_ERROR_SEVERITY_REG           (0x910C)       /* 不可修正错误严重程度寄存器 */
#define PCIE_MEEP_C_ERROR_STATUS_REG              (0x9110)       /* 可修正错误状况寄存器 */
#define PCIE_MEEP_C_ERROR_MASK_REG                (0x9114)       /* 可修正错误屏蔽寄存器 */
#define PCIE_MEEP_ADVANCED_ERROR_CAPABILITIES_AND_CONTROL_REG  (0x9118)       /* AER 功能和控制寄存器 */
#define PCIE_MEEP_HEADER_LOG_REGISTERS_1_REG      (0x911C)       /* 头日志寄存器1 */
#define PCIE_MEEP_HEADER_LOG_REGISTERS_2_REG      (0x9120)       /* 头日志寄存器2 */
#define PCIE_MEEP_HEADER_LOG_REGISTERS_3_REG      (0x9124)       /* 头日志寄存器3 */
#define PCIE_MEEP_HEADER_LOG_REGISTERS_4_REG      (0x9128)       /* 头日志寄存器4 */
#define PCIE_MEEP_TLP_PREFIX_LOGREGISTERS_1_REG   (0x9130)       /* TLP前缀日志寄存器1 */
#define PCIE_MEEP_TLP_PREFIX_LOGREGISTERS_2_REG   (0x9134)       /* TLP前缀日志寄存器2 */
#define PCIE_MEEP_TLP_PREFIX_LOGREGISTERS_3_REG   (0x9138)       /* TLP前缀日志寄存器3 */
#define PCIE_MEEP_TLP_PREFIX_LOGREGISTERS_4_REG   (0x913C)       /* TLP前缀日志寄存器4 */
#define PCIE_MEEP_NTB_IEP_CONFIG_SPACE_LOWER_REG  (0x9700)       /* iEP配置空间低32位地址 */
#define PCIE_MEEP_NTB_IEP_CONFIG_SPACE_UPPER_REG  (0x9704)       /* iEP配置空间低32位地址 */
#define PCIE_MEEP_NTB_IEP_BAR01_CTRL_REG          (0x9708)       /* 映射到BAR01空间的TLP头控制寄存器 */
#define PCIE_MEEP_NTB_IEP_BAR23_CTRL_REG          (0x970C)       /* 映射到BAR23空间的TLP头控制寄存器 */
#define PCIE_MEEP_NTB_IEP_BAR45_CTRL_REG          (0x9710)       /* 映射到BAR45空间的TLP头控制寄存器 */
#define PCIE_MEEP_MSI_CTRL_ADDRESS_LOWER_REG      (0x9714)       /* MSI控制器低32位地址 */
#define PCIE_MEEP_MSI_CTRL_ADDRESS_UPPER_REG      (0x9718)       /* MSI控制器低32位地址 */
#define PCIE_MEEP_MSI_CTRL_INT_EN_REG             (0x971C)       /* MSI Interrupt使能信号 */
#define PCIE_MEEP_MSI_CTRL_INT0_MASK_REG          (0x9720)       /* MSI Interrupt屏蔽信号 */
#define PCIE_MEEP_MSI_CTRL_INT_STATUS_REG         (0x9724)       /* MSI Interrupt状态标志 */
#define PCIE_MEEP_DBI_RO_WR_EN_REG                (0x9728)       /* 写Read-Only控制寄存器 */
#define PCIE_MEEP_AXI_ERR_RESPONSE_REG            (0x972C)       /* AXI总线ErrorResponse控制寄存器 */
// Define the union PCIE_MEEP_SBAR23XLAT_LOWER_U
// SBAR23地址转换寄存器低32位
// 0x0
typedef union tagMeepSbar23xlatLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_0            : 12  ; // [11..0] 保留
        UINT32    sbar23xlat_lower      : 20  ; // [31..12] SBAR23地址转换寄存器低32位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_SBAR23XLAT_LOWER_U;

// Define the union PCIE_MEEP_SBAR45XLAT_LOWER_U
// SBAR45地址转换寄存器低32位
// 0x8
typedef union tagMeepSbar45xlatLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_1            : 12  ; // [11..0] 保留
        UINT32    sbar45xlat_lower      : 20  ; // [31..12] SBAR45地址转换寄存器低32位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_SBAR45XLAT_LOWER_U;

// Define the union PCIE_MEEP_SBAR23LMT_LOWER_U
// SBAR23的limit寄存器低32位
// 0x10
typedef union tagMeepSbar23lmtLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_2            : 12  ; // [11..0] 保留
        UINT32    sbar45limit_lower     : 20  ; // [31..12] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_SBAR23LMT_LOWER_U;

// Define the union PCIE_MEEP_SBAR45LMT_LOWER_U
// SBAR45的limit寄存器低32位
// 0x18
typedef union tagMeepSbar45lmtLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_3            : 12  ; // [11..0] 保留
        UINT32    sbar45limit_lower     : 20  ; // [31..12] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_SBAR45LMT_LOWER_U;

// Define the union PCIE_MEEP_SBAR45LMT_UPPER_U
// SBAR45的limit寄存器高32位
// 0x1C
typedef union tagMeepSbar45lmtUpper
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_4            : 12  ; // [11..0] 保留
        UINT32    sbar45limit_upper     : 20  ; // [31..12] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_SBAR45LMT_UPPER_U;

// Define the union PCIE_MEEP_CBDF_SBDF_U
// Secondary侧的BDF
// 0x28
typedef union tagMeepCbdfSbdf
{
    // Define the struct Bits
    struct
    {
        UINT32    sfunc                 : 3   ; // [2..0] Secondary侧EP的Function号，在NTB/NTB模式下由Primary侧配置
        UINT32    sdev                  : 5   ; // [7..3] Secondary侧EP的Device号，在NTB/NTB模式下由Primary侧配置
        UINT32    sbus                  : 8   ; // [15..8] Secondary侧EP的总线号，默认为127，在NTB/NTB模式下由Primary侧配置
        UINT32    cap_sfunc             : 3   ; // [18..16] 在NTB-to-RP模式下由Remote CPU分配的Function号
        UINT32    cap_sdev              : 5   ; // [23..19] 在NTB-to-RP模式下由Remote CPU分配的Device号
        UINT32    cap_sbus              : 8   ; // [31..24] 在NTB-to-RP模式下由Remote CPU分配的Bus号
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_CBDF_SBDF_U;

// Define the union PCIE_MEEP_NTB_CNTL_U
// NTB控制寄存器
// 0x2C
typedef union tagMeepNtbCntl
{
    // Define the struct Bits
    struct
    {
        UINT32    s_link_disable        : 1   ; // [0] 在NTB-to-RP模式下，只有当该位置起时，Remote CPU才可以访问Seconadry侧的配置空间，该位对于Local CPU是RW的，对于Remote CPU来说是RO的。
        UINT32    Reserved_6            : 1   ; // [1] 保留位
        UINT32    eep_shadow_en         : 1   ; // [2] 访问eEP的shadow寄存器，例如eEP的BAR mask寄存器，访问之前需要将该位写为1，访问结束以后，需要将该位写为0。
        UINT32    Reserved_5            : 29  ; // [31..3] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_NTB_CNTL_U;

// Define the union PCIE_MEEP_PCI_CFG_HDR0_U
// PCI兼容配置头空间寄存器
// 0x1000
typedef union tagMeepPciCfgHdr0
{
    // Define the struct Bits
    struct
    {
        UINT32    vendor_id             : 16  ; // [15..0] 厂商ID号
        UINT32    device_id             : 16  ; // [31..16] 设备ID号
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_CFG_HDR0_U;

// Define the union PCIE_MEEP_PCI_CFG_HDR1_U
// PCI兼容配置头空间寄存器
// 0x1004
typedef union tagMeepPciCfgHdr1
{
    // Define the struct Bits
    struct
    {
        UINT32    io_space_enable       : 1   ; // [0] I/O Sapace Enable0：该设备不能响应I/O请求;1：该设备能够响应I/O请求。
        UINT32    memory_space_enable   : 1   ; // [1] Memory Space Enable0：该设备不能响应存储器请求;1：该设备能够响应存储器请求。
        UINT32    bus_master_enable     : 1   ; // [2] Bus Master Enable0：该设备不能作为主设备;1：该设备能够作为主设备。
        UINT32    specialcycleenable    : 1   ; // [3] Special Cycle Enalbe不适用于PCIe，硬连线为0
        UINT32    memory_write_and_invalidate  : 1   ; // [4] Memory Write and Invalidata不适用于PCIe，硬连线为0
        UINT32    vga_palette_snoop_enable  : 1   ; // [5] VGA Palette Snoop不适用于PCIe，硬连线为0
        UINT32    parity_error_response  : 1   ; // [6] Parity Error Response0：对奇偶校验错误不作出响应;1：对奇偶校验错误作出响应。
        UINT32    idsel_stepping_waitcycle_control  : 1   ; // [7] IDSEL Stepping/Wait Cycle Control不适用于PCIe，硬连线为0
        UINT32    serr_enable           : 1   ; // [8] SERR#信号使能0：可以使用SERR#信号;
        UINT32    fastback_to_backenable  : 1   ; // [9] Faster Back-to-Back Enaable不适用于PCIe，硬连线为0
        UINT32    interrupt_disable     : 1   ; // [10] INTx Assertion Disable0：允许使用INTx方式提交中断;1：禁用INTx方式提交中断。
        UINT32    Reserved_10           : 5   ; // [15..11] Reserved
        UINT32    Reserved_9            : 3   ; // [18..16] Reserved
        UINT32    intx_status           : 1   ; // [19] INTx Status0：设备未使用INTx方式向处理器提交了中断请求;1：设备使用INTx方式向处理器提交了中断请求。
        UINT32    capabilitieslist      : 1   ; // [20] Capabilities List指示Capability Pointer寄存器中的值有效，硬连线为1
        UINT32    pcibus66mhzcapable    : 1   ; // [21] 66MHz Capable不适用于PCIe，硬连线为0
        UINT32    Reserved_8            : 1   ; // [22] Reserved
        UINT32    fastback_to_back      : 1   ; // [23] Faster Back-to-Back Capable不适用于PCIe，硬连线为0
        UINT32    masterdataparityerror  : 1   ; // [24] Master Data Parity Error0：除置一条件满足之外的其他情况;1：PERR#信号有效，或者总线出现数据传输错误时，或者Command寄存器的Parity Error Response位为1时。
        UINT32    devsel_timing         : 2   ; // [26..25] DEVSEL Timing不适用于PCIe，硬连线为0
        UINT32    signaled_target_abort  : 1   ; // [27] Signaled Target Abort由PCI目标设备设置0：未发生目标设备夭折时序;1：发生目标设备夭折时序。
        UINT32    received_target_abort  : 1   ; // [28] Received Target Abort由PCI主设备设置0：未发生目标设备夭折时序;1：发生目标设备夭折时序。
        UINT32    received_master_abort  : 1   ; // [29] Received Master Abort由PCI主设备设置0：未发生主设备夭折时序;1：发生主设备夭折时序。
        UINT32    signaled_system_error  : 1   ; // [30] Signaled System Error0：SERR#信号无效;1：SERR#信号有效。
        UINT32    detected_parity_error  : 1   ; // [31] Detected Parity Error0：未检测到奇偶校验错误;1：检测到奇偶校验错误。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_CFG_HDR1_U;

// Define the union PCIE_MEEP_PCI_CFG_HDR2_U
// PCI兼容配置头空间寄存器
// 0x1008
typedef union tagMeepPciCfgHdr2
{
    // Define the struct Bits
    struct
    {
        UINT32    revision_identification  : 8   ; // [7..0] Revision IDPCIe设备的版本号
        UINT32    Reserved_11           : 8   ; // [15..8] Programming Interface
        UINT32    sub_class             : 8   ; // [23..16] Subclass Code
        UINT32    baseclass             : 8   ; // [31..24] Base Class Code
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_CFG_HDR2_U;

// Define the union PCIE_MEEP_PCI_CFG_HDR3_U
// PCI兼容配置头空间寄存器
// 0x100C
typedef union tagMeepPciCfgHdr3
{
    // Define the struct Bits
    struct
    {
        UINT32    cache_line_size       : 8   ; // [7..0] Cache Line Size不适用于PCIe设备，对此寄存器执行写操作不会影响PCIe core的功能
        UINT32    mstr_lat_tmr          : 8   ; // [15..8] Master Latency Timer不适用于PCIe设备，硬连线为0
        UINT32    multi_function_device  : 7   ; // [22..16] Configuration Header Format0：Type0配置头空间;1：Type1配置头空间。
        UINT32    hdr_type              : 1   ; // [23] Multi Function Device0：单功能设备;1：多功能设备。
        UINT32    bist                  : 8   ; // [31..24] BIST Register该版本IP不支持该功能，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_CFG_HDR3_U;

// Define the union PCIE_MEEP_PCI_CFG_HDR4_U
// PCI兼容配置头空间寄存器
// 0x1010
typedef union tagMeepPciCfgHdr4
{
    // Define the struct Bits
    struct
    {
        UINT32    sbar01_space_inicator  : 1   ; // [0] 指示BAR类型0：Memory BAR;1：I/O BAR。
        UINT32    sbar01_type           : 2   ; // [2..1] 指示Memory BAR类型00：32-bit BAR;10：64-bit BAR;01：保留;11：保留。
        UINT32    sbar01_prefetchable   : 1   ; // [3] 指示Memory BAR是否可预取0：不可预取;1：可预取。
        UINT32    sbar01_lower          : 28  ; // [31..4] 64位BAR0地址的[31:4]位若dbi_cs2有效，则为BAR0_MASK的[31:4]位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_CFG_HDR4_U;

// Define the union PCIE_MEEP_PCI_CFG_HDR6_U
// PCI兼容配置头空间寄存器
// 0x1018
typedef union tagMeepPciCfgHdr6
{
    // Define the struct Bits
    struct
    {
        UINT32    sbar23_space_inicator  : 1   ; // [0] 0 =BAR23 is a memory BAR1 =BAR23 is an I/O BARNTB只支持Memory空间，不支持IO空间
        UINT32    sbar23_type           : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    sbar23_prefetchable   : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_12           : 8   ; // [11..4] 保留位
        UINT32    sbar23_lower          : 20  ; // [31..12] 64位BAR23地址的[31:12]位若dbi_cs2有效，则为BAR0_MASK的[31:12]位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_CFG_HDR6_U;

// Define the union PCIE_MEEP_PCI_CFG_HDR8_U
// PCI兼容配置头空间寄存器
// 0x1020
typedef union tagMeepPciCfgHdr8
{
    // Define the struct Bits
    struct
    {
        UINT32    sbar45_space_inicator  : 1   ; // [0] 0 =BAR01 is a memory BAR1 =BAR01 is an I/O BARNTB只支持Memory空间，不支持IO空间
        UINT32    sbar45_type           : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    sbar45_prefetchable   : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_13           : 8   ; // [11..4] 保留位
        UINT32    sbar45_lower          : 20  ; // [31..12] 64位BAR45地址的[31:4]位若dbi_cs2有效，则为BAR0_MASK的[31:4]位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_CFG_HDR8_U;

// Define the union PCIE_MEEP_PCI_CFG_HDR11_U
// PCI兼容配置头空间寄存器
// 0x102C
typedef union tagMeepPciCfgHdr11
{
    // Define the struct Bits
    struct
    {
        UINT32    subsystem_vendor_id   : 16  ; // [15..0] 子系统厂商ID
        UINT32    subsystemid           : 16  ; // [31..16] 子系统ID
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_CFG_HDR11_U;

// Define the union PCIE_MEEP_PCI_CFG_HDR13_U
// PCI兼容配置头空间寄存器
// 0x1034
typedef union tagMeepPciCfgHdr13
{
    // Define the struct Bits
    struct
    {
        UINT32    cap_ptr               : 8   ; // [7..0] First Capability Pointer
        UINT32    Reserved_14           : 24  ; // [31..8] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_CFG_HDR13_U;

// Define the union PCIE_MEEP_PCI_CFG_HDR15_U
// PCI兼容配置头空间寄存器
// 0x103C
typedef union tagMeepPciCfgHdr15
{
    // Define the struct Bits
    struct
    {
        UINT32    int_line              : 8   ; // [7..0] Interrupt Line
        UINT32    int_pin               : 8   ; // [15..8] Interrupt Pin00：不使用INTx类型上报中断;01：使用INTA;02：使用INTB;03：使用INTC;04：使用INTD。
        UINT32    Min_Grant             : 8   ; // [23..16] 不适用于PCIe，硬连线为0
        UINT32    Max_Latency           : 8   ; // [31..24] 不适用于PCIe，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_CFG_HDR15_U;

// Define the union PCIE_MEEP_PCI_MSI_CAP0_U
// PCI MSI功能寄存器
// 0x1050
typedef union tagMeepPciMsiCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_cap_id            : 8   ; // [7..0] MSI Capability ID
        UINT32    next_capability_pointer  : 8   ; // [15..8] Next Capability Pointer
        UINT32    msi_enabled           : 1   ; // [16] MSI Enabled0：禁用MSI;1：使能MSI。
        UINT32    multiple_message_capable  : 3   ; // [19..17] Multiple Message Capable000：PCIe设备可以使用1个中断向量;001：PCIe设备可以使用2个中断向量;010：PCIe设备可以使用4个中断向量;011：PCIe设备可以使用8个中断向量;100：PCIe设备可以使用16个中断向量;101：PCIe设备可以使用32个中断向量;110：保留;111：保留。
        UINT32    multiple_message_enabled  : 3   ; // [22..20] Multiple Message Enabled表示分配给当前PCIe设备的中断向量数目000：PCIe设备被分配给1个中断向量;001：PCIe设备被分配给2个中断向量;010：PCIe设备被分配给4个中断向量;011：PCIe设备被分配给8个中断向量;100：PCIe设备被分配给16个中断向量;101：PCIe设备被分配给32个中断向量;110：保留;111：保留。
        UINT32    msi_64_en             : 1   ; // [23] 64-bit Address Capable0：不支持64-bit地址;
        UINT32    pvm                   : 1   ; // [24] MSI Per Vector Masking (PVM) supported0：不支持MSI PVM;1：支持MSI PVM。
        UINT32    Reserved_18           : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_MSI_CAP0_U;

// Define the union PCIE_MEEP_PCI_MSI_CAP1_U
// PCI MSI功能寄存器
// 0x1054
typedef union tagMeepPciMsiCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_20           : 2   ; // [1..0] Reserved
        UINT32    msi_addr_low          : 30  ; // [31..2] MSI的低32bit地址的[31:2]位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_MSI_CAP1_U;

// Define the union PCIE_MEEP_PCI_MSI_CAP3_U
// PCI MSI功能寄存器
// 0x105C
typedef union tagMeepPciMsiCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_data              : 16  ; // [15..0] MSI数据
        UINT32    Reserved_21           : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCI_MSI_CAP3_U;

// Define the union PCIE_MEEP_PCIE_CAP0_U
// PCI Express功能寄存器
// 0x1070
typedef union tagMeepPcieCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie_cap_id           : 8   ; // [7..0] PCI Express Capability ID
        UINT32    pcie_next_ptr         : 8   ; // [15..8] Next Capability Pointer
        UINT32    pcie_capability_version  : 4   ; // [19..16] PCI Express Capability Version
        UINT32    device_port_type      : 4   ; // [23..20] Device/Port Type0100：PCIe RC;
        UINT32    slot_implemented      : 1   ; // [24] Slot Implemented
        UINT32    interrupt_message_number  : 5   ; // [29..25] Interrupt Message Number
        UINT32    Reserved_22           : 2   ; // [31..30] RsvdP
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP0_U;

// Define the union PCIE_MEEP_PCIE_CAP1_U
// PCI Express功能寄存器
// 0x1074
typedef union tagMeepPcieCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    max_payload_size_supported  : 3   ; // [2..0] Max_Payload_Size Supported000：128Byte;001：256Byte;010：512Byte;011：1024Byte;100：2048Byte;101：4096Byte;110：保留;111：保留。
        UINT32    phantom_function_supported  : 2   ; // [4..3] Phantom Function Supported，该版本IP不支持。
        UINT32    extended_tagfield_supported  : 1   ; // [5] Extended Tag Field Supported0：不支持扩展Tag字段;1：支持扩展Tag字段。
        UINT32    endpoint_l0sacceptable_latency  : 3   ; // [8..6] Endpoint L0s Acceptable Latency对于非Endpoint必须为000
        UINT32    endpoint_l1acceptable_latency  : 3   ; // [11..9] Endpoint L1 Acceptable Latency对于非Endpoint必须为000
        UINT32    undefined             : 3   ; // [14..12] Reserved
        UINT32    Reserved_24           : 3   ; // [17..15] Reserved
        UINT32    captured_slot_power_limit_value  : 8   ; // [25..18] 捕获的插槽功率极限值，硬连线0x0，只读
        UINT32    captured_slot_power_limit_scale  : 2   ; // [27..26] 捕获的插槽功率极限因子，硬连线0x0，只读
        UINT32    function_level_reset  : 1   ; // [28] Function级的复位，NTB不支持该功能
        UINT32    dev_cap               : 3   ; // [31..29] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP1_U;

// Define the union PCIE_MEEP_PCIE_CAP2_U
// PCI Express功能寄存器
// 0x1078
typedef union tagMeepPcieCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    correctable_error_reporting_enable  : 1   ; // [0] Correctable Error Reporting Enable0：不支持发送“可纠正错误”消息;1：支持发送“可纠正错误”消息。
        UINT32    non_fatal_error_reporting_enable  : 1   ; // [1] Non-Fatal Error Reporting Enable0：不支持发送“非致命错误”消息;1：支持发送“非致命错误”消息。
        UINT32    fatal_error_reporting_enable  : 1   ; // [2] Fatal Error Reporting Enable0：不支持发送“致命错误”消息;1：支持发送“致命错误”消息。
        UINT32    urenable              : 1   ; // [3] Unsupported Request Reporting Enable0：不支持发送“不被支持请求”消息;1：支持发送“不被支持请求”消息。
        UINT32    enable_relaxed_ordering  : 1   ; // [4] Enable Relaxed Ordering0：不支持灵活事务顺序;1：支持灵活事务顺序。
        UINT32    max_payload_size      : 3   ; // [7..5] Max_Payload_Size000：128Byte;001：256Byte;010：512Byte;011：1024Byte;100：2048Byte;101：4096Byte;110：保留;111：保留。
        UINT32    extended_tagfieldenable  : 1   ; // [8] Extended Tag Field Enable0：禁用扩展Tag字段;1：使能扩展Tag字段。
        UINT32    phantom_function_enable  : 1   ; // [9] Phantom Function Enable0：禁用Phantom Function;1：使能Phantom Function。
        UINT32    auxpowerpmenable      : 1   ; // [10] AUX Power PM Enable0：禁用附加电源;1：使能附加电源。
        UINT32    enablenosnoop         : 1   ; // [11] Enable No Snoop0：禁用No Snoop特性;1：使能No Snoop特性。
        UINT32    max_read_request_size  : 3   ; // [14..12] Max_Read_Request_Size000：128Byte;001：256Byte;010：512Byte;011：1024Byte;100：2048Byte;101：4096Byte;110：保留;111：保留。
        UINT32    Reserved_26           : 1   ; // [15] reserved
        UINT32    correctableerrordetected  : 1   ; // [16] Correctable Error Detected0：没有检测到可纠正错误;1：检测到可纠正错误。
        UINT32    non_fatalerrordetected  : 1   ; // [17] Non-Fatal Error detected0：没有检测到非致命错误;1：检测到非致命错误。
        UINT32    fatalerrordetected    : 1   ; // [18] Fatal Error Detected0：没有检测到致命错误;1：检测到致命错误。
        UINT32    unsupportedrequestdetected  : 1   ; // [19] Unsupported Request Detected0：没有收到不被支持的请求;1：收到不被支持的请求。
        UINT32    auxpowerdetected      : 1   ; // [20] Aux Power Detected0：没有检测到辅助电源;1：检测到辅助电源。
        UINT32    transactionpending    : 1   ; // [21] Transaction Pending硬连线为0
        UINT32    Reserved_25           : 10  ; // [31..22] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP2_U;

// Define the union PCIE_MEEP_PCIE_CAP3_U
// PCI Express功能寄存器
// 0x107C
typedef union tagMeepPcieCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    max_link_speed        : 4   ; // [3..0] Max Link Speeds0001：2.5GT/s;0010：5.0GT/s;0100：8.0GT/s;其他值：不支持。
        UINT32    max_link_width        : 6   ; // [9..4] Maximum Link Width000001：x1通道;000010：x2通道;000100：x4通道;001000：x8通道;010000：x16通道;其他值：保留。
        UINT32    active_state_power_management  : 2   ; // [11..10] Active State Link PM Support0：不支持ASPM;1：支持ASPM。
        UINT32    l0s_exitlatency       : 3   ; // [14..12] L0s Exit Latency000：小于64ns;
        UINT32    l1_exit_latency       : 3   ; // [17..15] L1 Exit Latency000：小于1us;
        UINT32    clock_power_management  : 1   ; // [18] Clock Power Management0：不支持Clock Power Management;1：支持Clock Power Management。
        UINT32    surprise_down_error_report_cap  : 1   ; // [19] Surprise Down Error Reporting Capable，该版本IP不支持，硬连线为0
        UINT32    data_link_layer_active_report_cap  : 1   ; // [20] Data Link Layer Active Reporting Capable，对于RC硬连线为10：不支持Data Link Layer Active Reporting;1：支持Data Link Layer Active Reporting。
        UINT32    link_bandwidth_noti_cap  : 1   ; // [21] Link Bandwidth Notification Capability，对于RC硬连线为10：不支持Link Bandwidth Notification Capability;1：支持Link Bandwidth Notification Capability。
        UINT32    aspm_option_compliance  : 1   ; // [22] ASPM Optionality Compliance0：不支持ASPM Optionality Compliance;1：支持ASPM Optionality Compliance。
        UINT32    Reserved_27           : 1   ; // [23] Reserved
        UINT32    port_number           : 8   ; // [31..24] Port Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP3_U;

// Define the union PCIE_MEEP_PCIE_CAP4_U
// PCI Express功能寄存器
// 0x1080
typedef union tagMeepPcieCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    active_state_power_management  : 2   ; // [1..0] NTB模式下不支持，硬连线到0
        UINT32    Reserved_30           : 1   ; // [2] 保留
        UINT32    rcb                   : 1   ; // [3] 0表示能返回64B边界的完成报文
        UINT32    link_disable          : 1   ; // [4] NTB模式下不支持，硬连线到0
        UINT32    retrain_link          : 1   ; // [5] NTB模式下不支持，硬连线到0
        UINT32    common_clock_config   : 1   ; // [6] NTB模式下不支持，硬连线到0
        UINT32    extended_sync         : 1   ; // [7] NTB模式下不支持，硬连线到0
        UINT32    enable_clock_pwr_management  : 1   ; // [8] NTB模式下不支持，硬连线到0
        UINT32    hw_auto_width_disable  : 1   ; // [9] NTB模式下不支持，硬连线到0
        UINT32    link_bandwidth_management_int_en  : 1   ; // [10] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_int_en  : 1   ; // [11] NTB模式下不支持，硬连线到0
        UINT32    Reserved_29           : 4   ; // [15..12] 保留
        UINT32    current_link_speed    : 4   ; // [19..16] 4'b0001 : 2.5Gbps4'b0010 : 5Gbps4'b0011 : 8Gbps其它值:保留当链路没有建立的时候，该无意义
        UINT32    negotiated_link_width  : 6   ; // [25..20] 协商的链路宽度，可能值为x1/x2/x4/x8
        UINT32    Reserved_28           : 1   ; // [26] 保留位
        UINT32    link_training         : 1   ; // [27] 链路协商正在进行的状态
        UINT32    slot_clock_configration  : 1   ; // [28] 表示设备是否使用连接器上提供的参考物理时钟
        UINT32    data_link_layer_active  : 1   ; // [29] 链路层的活动状态
        UINT32    link_bandwidth_management_status  : 1   ; // [30] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_status  : 1   ; // [31] NTB模式下不支持，硬连线到0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP4_U;

// Define the union PCIE_MEEP_PCIE_CAP5_U
// PCI Express功能寄存器
// 0x1084
typedef union tagMeepPcieCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    attentionbuttonpresent  : 1   ; // [0] Attention Indicator Present0：没有Attention Indicator;1：有Attention Indicator。
        UINT32    powercontrollerpresent  : 1   ; // [1] Power Controller Present0：没有Power Controller;1：有Power Controller。
        UINT32    mrlsensorpresent      : 1   ; // [2] MRL Sensor Present0：没有MRL Sensor;1：有MRL Sensor。
        UINT32    attentionindicatorpresent  : 1   ; // [3] Attention Indicator Present0：没有Attention Indicator;1：有Attention Indicator。
        UINT32    powerindicatorpresent  : 1   ; // [4] Power Indicator Present0：没有Power Indicator;1：有Power Indicator。
        UINT32    hot_plugsurprise      : 1   ; // [5] Hot-Plug Surprise0：不支持Hot-Plug Surprise;1：支持Hot-Plug Surprise。
        UINT32    hot_plugcapable       : 1   ; // [6] Hot-Plug Capable0：不支持热插拔;1：支持热插拔。
        UINT32    slotpowerlimitvalue   : 8   ; // [14..7] Slot Power Limit Value
        UINT32    slotpowerlimitscale   : 2   ; // [16..15] Slot Power Limit Scale
        UINT32    electromechanicalinterlockpresen  : 1   ; // [17] Electromechanical Interlock Present0：没有Electromechanical Interlock ;1：有Electromechanical Interlock 。
        UINT32    no_cmd_complete_support  : 1   ; // [18] No Command Complete Support0：支持Command Complete;1：不支持No Command Complete。
        UINT32    phy_slot_number       : 13  ; // [31..19] Physical Slot Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP5_U;

// Define the union PCIE_MEEP_PCIE_CAP6_U
// PCI Express功能寄存器
// 0x1088
typedef union tagMeepPcieCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    attentionbuttonpressedenable  : 1   ; // [0] Attention Button Pressed Enable0：禁用Attention Button Pressed;1：使能Attention Button Pressed。
        UINT32    powerfaultdetectedenable  : 1   ; // [1] Power Fault Detected Enable0：禁用Power Fault Detected;1：使能Power Fault Detected。
        UINT32    mrlsensorchangedenable  : 1   ; // [2] MRL Sensor Changed Enable0：禁用MRL Sensor Changed;1：使能MRL Sensor Changed。
        UINT32    presencedetectchangedenable  : 1   ; // [3] Presence Detect Changed Enable0：禁用Presence Detect Changed;1：使能Presence Detect Changed。
        UINT32    commandcompletedinterruptenable  : 1   ; // [4] Command Completed Interrupt Enable0：禁用Command Completed Interrupt;1：使能Command Completed Interrupt。
        UINT32    hot_pluginterruptenable  : 1   ; // [5] Hot-Plug Interrupt Enable0：禁用Hot-Plug Interrupt;1：使能Hot-Plug Interrupt。
        UINT32    attentionindicatorcontrol  : 2   ; // [7..6] Attention Indicator Control00：保留;01：On;10：Blink;11：Off。
        UINT32    powerindicatorcontrol  : 2   ; // [9..8] Power Indicator Control00：保留;01：On;10：Blink;11：Off。
        UINT32    powercontrollercontrol  : 1   ; // [10] Power Controller Control0：禁用Power Controller Control;1：使能Power Controller Control。
        UINT32    electromechanicalinterlockcontrol  : 1   ; // [11] Electromechanical Interlock Control0：禁用Electromechanical Interlock Control;1：使能AElectromechanical Interlock Control。
        UINT32    datalinklayerstatechangedenable  : 1   ; // [12] Data Link Layer State Changed Enable0：禁用Data Link Layer State Changed;1：使能Data Link Layer State Changed Enable。
        UINT32    Reserved_31           : 3   ; // [15..13] Reserved
        UINT32    attentionbuttonpressed  : 1   ; // [16] Attention Button Pressed0：Attention Button Not Pressed;1：Attention Button Pressed。
        UINT32    powerfaultdetected    : 1   ; // [17] Power Fault Detected0：Power Fault Not Detected;1：Power Fault Detected。
        UINT32    mrlsensorchanged      : 1   ; // [18] MRL Sensor Changed0：MRL Sensor Not Changed;1：MRL Sensor Changed。
        UINT32    presencedetectchanged  : 1   ; // [19] Presence Detect Changed0：Presence Detect Not Changed;1：Presence Detect Changed。
        UINT32    commandcompleted      : 1   ; // [20] Command Completed0：Command Not Completed;1：Command Completed。
        UINT32    mrlsensorstate        : 1   ; // [21] MRL Sensor State0：不处于MRL Sensor State;1：处于MRL Sensor State。
        UINT32    presencedetectstate   : 1   ; // [22] Presence Detect State0：不处于Presence Detect State;1：处于Presence Detect State。
        UINT32    electromechanicalinterlockstatus  : 1   ; // [23] Electromechanical Interlock Status0：不处于Electromechanical Interlock Status;1：处于Electromechanical Interlock Status。
        UINT32    datalinklayerstatechanged  : 1   ; // [24] Data Link Layer State Changed0：Data Link Layer State Not Changed;1：Data Link Layer State Changed。
        UINT32    slot_ctrl_status      : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP6_U;

// Define the union PCIE_MEEP_PCIE_CAP7_U
// PCI Express功能寄存器
// 0x108C
typedef union tagMeepPcieCap7
{
    // Define the struct Bits
    struct
    {
        UINT32    systemerroroncorrectableerrorenable  : 1   ; // [0] System Error on Correctable Error Enable0：禁用System Error on Correctable Error;1：使能System Error on Correctable Error。
        UINT32    systemerroronnon_fatalerrorenable  : 1   ; // [1] System Error on Non-fatal Error Enable0：禁用System Error on Non-fatal Error ;1：使能System Error on Non-fatal Error 。
        UINT32    systemerroronfatalerrorenable  : 1   ; // [2] System Error on Fatal Error Enable0：禁用System Error on Fatal Error ;1：使能System Error on Fatal Error 。
        UINT32    pmeinterruptenable    : 1   ; // [3] PME Interrupt Enable0：禁用PME Interrupt;1：使能PME Interrupt。
        UINT32    crssoftwarevisibilityenable  : 1   ; // [4] CRS Software Visibility Enable，该版本IP不支持，硬连线为0
        UINT32    Reserved_32           : 11  ; // [15..5] Reserved
        UINT32    crssoftwarevisibility  : 1   ; // [16] CRS Software Visibility，该版本IP不支持，硬连线为0
        UINT32    root_cap              : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP7_U;

// Define the union PCIE_MEEP_PCIE_CAP8_U
// PCI Express功能寄存器
// 0x1090
typedef union tagMeepPcieCap8
{
    // Define the struct Bits
    struct
    {
        UINT32    pmerequesterid        : 16  ; // [15..0] PME Requester ID
        UINT32    pmestatus             : 1   ; // [16] PME Status0：不指示PME Status;1：指示PME Status。
        UINT32    pmepending            : 1   ; // [17] PME Pending0：指示无PME Pending;1：指示PME Pending。
        UINT32    root_status           : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP8_U;

// Define the union PCIE_MEEP_PCIE_CAP9_U
// PCI Express功能寄存器
// 0x1094
typedef union tagMeepPcieCap9
{
    // Define the struct Bits
    struct
    {
        UINT32    completiontimeoutrangessupported  : 4   ; // [3..0] Completion Timeout Ranges SupportedRange A: 50us to 10ms;Range B: 10ms to 250ms;Range C: 250ms to 4s;Range D: 4s to 64s。
        UINT32    completiontimeoutdisablesupported  : 1   ; // [4] Completion Timeout Disable Supported0：不支持禁用Completion Timeout;1：支持禁用Completion Timeout。
        UINT32    ariforwardingsupported  : 1   ; // [5] ARI Forwarding Supported0：不支持ARI Forwarding;1：支持ARI Forwarding。
        UINT32    atomicoproutingsupported  : 1   ; // [6] AtomicOp Routing Supported，不适用于Endpoint。
        UINT32    _2_bitatomicopcompletersupported  : 1   ; // [7] 32-bit AtomicOp Completer Supported0：不支持32-bit AtomicOp Completer ;1：支持32-bit AtomicOp Completer 。
        UINT32    _4_bitatomicopcompletersupported  : 1   ; // [8] 64-bit AtomicOp Completer Supported0：不支持64-bit AtomicOp Completer;1：支持64-bit AtomicOp Completer。
        UINT32    _28_bitcascompletersupported  : 1   ; // [9] 128-bit CAS Completer Supported0：不支持128-bit CAS Completer;1：支持128-bit CAS Completer。
        UINT32    noro_enabledpr_prpassing  : 1   ; // [10] No RO-enabled PR-PR Passing0：No RO-enabled PR-PR Passing;1：RO-enabled PR-PR Passing。
        UINT32    Reserved_33           : 1   ; // [11] Reserved
        UINT32    tphcompletersupported  : 2   ; // [13..12] TPH Completer Supported00：接收端不支持TPH和扩展TPH报文;01：接收端仅支持TPH报文;10：保留;11：接收端支持TPH和扩展TPH报文。
        UINT32    dev_cap2              : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP9_U;

// Define the union PCIE_MEEP_PCIE_CAP10_U
// PCI Express功能寄存器
// 0x1098
typedef union tagMeepPcieCap10
{
    // Define the struct Bits
    struct
    {
        UINT32    completiontimeoutvalue  : 4   ; // [3..0] Completion Timeout Value0000b：Default range: 50us to 50ms;0001b：50us to 100us;0010b：1ms to 10ms;0101b：16ms to 55ms;0110b：65ms to 210ms;1001b：260ms to 900ms;1010b：1s to 3.5s;1101b：4s to 13s;1110b：17s to 64s;其他值：保留。
        UINT32    completiontimeoutdisable  : 1   ; // [4] Completion Timeout Disable0：不禁用Completion Timeout;1：禁用Completion Timeout。
        UINT32    ariforwardingsupported  : 1   ; // [5] ARI Forwarding Supported0：不支持ARI Forwarding;1：支持ARI Forwarding。
        UINT32    atomicoprequesterenable  : 1   ; // [6] AtomicOp Requester Enable0：禁用AtomicOp Requester;1：使能AtomicOp Requester。
        UINT32    atomicopegressblocking  : 1   ; // [7] AtomicOp Egress Blocking对于Endpoint不使用，reserved
        UINT32    idorequestenable      : 1   ; // [8] IDO Request Enable0：禁用IDO Request Enable;1：使能IDO Request Enable。
        UINT32    idocompletionenable   : 1   ; // [9] IDO Completion Enable0：禁用IDO Completion Enable;1：使能IDO Completion Enable。
        UINT32    dev_ctrl2             : 22  ; // [31..10] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP10_U;

// Define the union PCIE_MEEP_PCIE_CAP11_U
// PCI Express功能寄存器
// 0x109C
typedef union tagMeepPcieCap11
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_35           : 1   ; // [0] Reserved
        UINT32    gen1_suport           : 1   ; // [1] Gen1链路速度支持0：不支持2.5GT/s;1：支持2.5GT/s。
        UINT32    gen2_suport           : 1   ; // [2] Gen2链路速度支持0：不支持5.0GT/s;1：支持5.0GT/s。
        UINT32    gen3_suport           : 1   ; // [3] Gen3链路速度支持0：不支持8.0GT/s;1：支持8.0GT/s。
        UINT32    Reserved_34           : 4   ; // [7..4] Reserved
        UINT32    crosslink_supported   : 1   ; // [8] Crosslink Supported
        UINT32    link_cap2             : 23  ; // [31..9] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP11_U;

// Define the union PCIE_MEEP_PCIE_CAP12_U
// PCI Express功能寄存器
// 0x10A0
typedef union tagMeepPcieCap12
{
    // Define the struct Bits
    struct
    {
        UINT32    targetlinkspeed       : 4   ; // [3..0] Target Link Speed
        UINT32    entercompliance       : 1   ; // [4] Enter Compliance0：不令链路进入Compliance模式;1：令链路进入Compliance模式。
        UINT32    hardwareautonomousspeeddisa  : 1   ; // [5] Hardware Autonomous Speed Disable0：不禁用Hardware Autonomous Speed;1：禁用Hardware Autonomous Speed。
        UINT32    selectablede_empha    : 1   ; // [6] Selectable De-emphasis0：-6dB;1：-3.5dB。
        UINT32    transmitmargin        : 3   ; // [9..7] Transmit Margin
        UINT32    _entermodifiedcompliance  : 1   ; // [10] Enter Modified Compliance0：如果LTSSM进入Polling.Compliance状态，不发送modified compliance pattern;1：如果LTSSM进入Polling.Compliance状态，发送一个modified compliance pattern。
        UINT32    compliancesos         : 1   ; // [11] Compliance SOS0：在发送Compliance Pattern或Modified Pattern时不在中间插入SKP有序集;1：在发送Compliance Pattern或Modified Pattern时在中间插入SKP有序集。
        UINT32    de_emphasislevel      : 4   ; // [15..12] De-emphasis Level0001：-3.5dB;0000：-6dB其他值：保留。
        UINT32    currentde_emphasislevel  : 1   ; // [16] Current De-emphasis Level0：-6dB;1：-3.5dB。
        UINT32    equalizationcomplete  : 1   ; // [17] Equalization Complete0：Equalization未完成;1：Equalization完成。
        UINT32    equalizationphase1successful  : 1   ; // [18] Equalization Phase 1 Successful0：Equalization Phase 1不成功;1：Equalization Phase 1成功。
        UINT32    equalizationphase2successful  : 1   ; // [19] Equalization Phase 2 Successful0：Equalization Phase 2不成功;1：Equalization Phase 2成功。
        UINT32    equalizationphase3successful  : 1   ; // [20] Equalization Phase 3 Successful0：Equalization Phase 3不成功;1：Equalization Phase 3成功。
        UINT32    linkequalizationrequest  : 1   ; // [21] Link Equalization Request0：没有请求Link Equalization;1：请求Link Equalization 。
        UINT32    link_ctrl2_status2    : 10  ; // [31..22] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_CAP12_U;

// Define the union PCIE_MEEP_SLOT_CAP_U
// Slot Numbering功能寄存器
// 0x10C0
typedef union tagMeepSlotCap
{
    // Define the struct Bits
    struct
    {
        UINT32    slotnumberingcapabilitiesid  : 8   ; // [7..0] Slot Numbering Capabilities ID
        UINT32    nextcapabilitypointer  : 8   ; // [15..8] Next Capability Pointer
        UINT32    add_incardslotsprovided  : 5   ; // [20..16] Add-in Card Slots Provided
        UINT32    firstinchassis        : 1   ; // [21] First in Chassis
        UINT32    Reserved_36           : 2   ; // [23..22] Reserved
        UINT32    slot_cap              : 8   ; // [31..24] Chassis Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_SLOT_CAP_U;

// Define the union PCIE_MEEP_AER_CAP0_U
// 高级错误报告寄存器
// 0x1100
typedef union tagMeepAerCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pciexpressextendedcapabilityid  : 16  ; // [15..0] PCI Express Extended Capability ID
        UINT32    capabilityversion     : 4   ; // [19..16] Capability Version
        UINT32    aer_cap_hdr           : 12  ; // [31..20] Next Capability Offset
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_CAP0_U;

// Define the union PCIE_MEEP_AER_CAP1_U
// 高级错误报告寄存器
// 0x1104
typedef union tagMeepAerCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_42           : 1   ; // [0] 未定义
        UINT32    Reserved_41           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrorsta  : 1   ; // [4] Data Link Protocol Error Status0：未检测到Data Link Protocol Error;1：检测到Data Link Protocol Error。
        UINT32    surprisedownerrorstatus  : 1   ; // [5] Surprise Down Error Status，该版本IP不支持。
        UINT32    Reserved_40           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpstatu      : 1   ; // [12] Poisoned TLP Status0：未检测到Poisoned TLP;1：检测到Poisoned TLP。
        UINT32    flowcontrolprotocolerrorst  : 1   ; // [13] Flow Control Protocol Error Status0：未检测到Flow Control Protocol Error;1：检测到Flow Control Protocol Error。
        UINT32    completiontimeouts    : 1   ; // [14] Completion Timeout Status0：未检测到Completion Timeout;
        UINT32    completerabortstatus  : 1   ; // [15] Completer Abort Status0：未检测到Completer Abort;1：检测到Completer Abort。
        UINT32    receiveroverflowstatus  : 1   ; // [16] Unexpected Completion Status0：未检测到Unexpected Completion;1：检测到Unexpected Completion。
        UINT32    malformedtlpstatus    : 1   ; // [17] Receiver Overflow Status0：未检测到Receiver Overflow;1：检测到Receiver Overflow。
        UINT32    ecrcerrorstatus       : 1   ; // [18] Malformed TLP Status0：未检测到Malformed TLP;1：检测到Malformed TLP。
        UINT32    ecrcerrorstat         : 1   ; // [19] ECRC Error Status0：未检测到ECRC Error;1：检测到ECRC Error。
        UINT32    unsupportedrequesterrorstatus  : 1   ; // [20] Unsupported Request Error Status0：未检测到Unsupported Request Error;1：检测到Unsupported Request Error;。
        UINT32    Reserved_39           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedstatus  : 1   ; // [24] AtomicOp Egress Blocked Status0：AtomicOp Egress is not Blocked;1：AtomicOp Egress is Blocked。
        UINT32    uncorr_err_status     : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_CAP1_U;

// Define the union PCIE_MEEP_AER_CAP2_U
// 高级错误报告寄存器
// 0x1108
typedef union tagMeepAerCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_46           : 1   ; // [0] 未定义
        UINT32    Reserved_45           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrormask  : 1   ; // [4] Data Link Protocol Error Mask0：Data Link Protocol Error is not Masked;1：Data Link Protocol Error is Masked。
        UINT32    surprisedownerrormask  : 1   ; // [5] Surprise Down Error Mask，该版本IP不支持。
        UINT32    Reserved_44           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpmask       : 1   ; // [12] Poisoned TLP Mask0：Poisoned TLP is not Masked;1：Poisoned TLP is Masked。
        UINT32    flowcontrolprotocolerrormask  : 1   ; // [13] Flow Control Protocol Error Mask0：Flow Control Protocol Error is not Masked;1：Flow Control Protocol Error is Masked。
        UINT32    completiontimeoutmask  : 1   ; // [14] Completion Timeout Mask0：Completion Timeout is not Masked;1：Completion Timeout is Masked。
        UINT32    completerabortmask    : 1   ; // [15] Completer Abort Mask0：Completer Abort is not Masked;1：Completer Abort is Masked。
        UINT32    unexpectedcompletionmask  : 1   ; // [16] Unexpected Completion Mask0：Unexpected Completion is not Masked;1：Unexpected Completion is Masked。
        UINT32    receiveroverflowmask  : 1   ; // [17] Receiver Overflow Mask0：Receiver Overflow is not Masked;1：Receiver Overflow is Masked。
        UINT32    malformedtlpmask      : 1   ; // [18] Malformed TLP Mask0：Malformed TLP is not Masked;1：Malformed TLP is Masked。
        UINT32    ecrcerrormask         : 1   ; // [19] ECRC Error Mask0：ECRC Error is not Masked;1：ECRC Error is Masked。
        UINT32    unsupportedrequesterrormask  : 1   ; // [20] Unsupported Request Error Mask0：Unsupported Request Error is not Masked;1：Unsupported Request Error is Masked。
        UINT32    Reserved_43           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedmask  : 1   ; // [24] AtomicOp Egress Blocked Mask0：AtomicOp Egress Blocked is not Masked;1：AtomicOp Egress Blocked is Masked。
        UINT32    uncorr_err_mask       : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_CAP2_U;

// Define the union PCIE_MEEP_AER_CAP3_U
// 高级错误报告寄存器
// 0x110C
typedef union tagMeepAerCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_50           : 1   ; // [0] 未定义
        UINT32    Reserved_49           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrorsever  : 1   ; // [4] Data Link Protocol Error Severity0：Non-fatal;1：Fatal。
        UINT32    surprisedownerrorseverity  : 1   ; // [5] Surprise Down Error Severity，该版本IP不支持
        UINT32    Reserved_48           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpseverity   : 1   ; // [12] Poisoned TLP Severity0：Non-fatal;1：Fatal。
        UINT32    flowcontrolprotocolerrorseveri  : 1   ; // [13] Flow Control Protocol Error Severity0：Non-fatal;1：Fatal。
        UINT32    completiontimeoutseverity  : 1   ; // [14] Completion Timeout Severity0：Non-fatal;1：Fatal。
        UINT32    completerabortseverity  : 1   ; // [15] Completer Abort Severity0：Non-fatal;1：Fatal。
        UINT32    unexpectedcompletionseverity  : 1   ; // [16] Unexpected Completion Severity0：Non-fatal;1：Fatal。
        UINT32    receiveroverflowseverity  : 1   ; // [17] Receiver Overflow Severity0：Non-fatal;1：Fatal。
        UINT32    malformedtlpseverity  : 1   ; // [18] Malformed TLP Severity0：Non-fatal;1：Fatal。
        UINT32    ecrcerrorseverity     : 1   ; // [19] ECRC Error Severity0：Non-fatal;1：Fatal。
        UINT32    unsupportedrequesterrorseverity  : 1   ; // [20] Unsupported Request Error Severity0：Non-fatal;1：Fatal。
        UINT32    Reserved_47           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedseverity  : 1   ; // [24] AtomicOp Egress Blocked Severity0：Non-fatal;1：Fatal。
        UINT32    uncorr_err_ser        : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_CAP3_U;

// Define the union PCIE_MEEP_AER_CAP4_U
// 高级错误报告寄存器
// 0x1110
typedef union tagMeepAerCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    receivererrorstatus   : 1   ; // [0] Receiver Error Status0：未检测到Receiver Error;1：检测到Receiver Error。
        UINT32    Reserved_52           : 5   ; // [5..1] Reserved
        UINT32    badtlpstatus          : 1   ; // [6] Bad TLP Status0：未检测到Bad TLP;1：检测到Bad TLP。
        UINT32    baddllpstatus         : 1   ; // [7] Bad DLLP Status0：未检测到Bad DLLP;1：检测到Bad DLLP。
        UINT32    replay_numrolloverstatus  : 1   ; // [8] REPLAY_NUM Rollover Status0：未检测到REPLAY_NUM Rollover;1：检测到REPLAY_NUM Rollover。
        UINT32    Reserved_51           : 3   ; // [11..9] Reserved
        UINT32    replytimertimeoutstatus  : 1   ; // [12] Reply Timer Timeout Status0：未检测到Reply Timer Timeout;1：检测到Reply Timer Timeout。
        UINT32    advisorynon_fatalerrorstatus  : 1   ; // [13] Advisory Non-Fatal Error Status0：未检测到Advisory Non-Fatal Error;1：检测到Advisory Non-Fatal Error。
        UINT32    corr_err_status       : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_CAP4_U;

// Define the union PCIE_MEEP_AER_CAP5_U
// 高级错误报告寄存器
// 0x1114
typedef union tagMeepAerCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    receivererrormask     : 1   ; // [0] Receiver Error Mask0：Receiver Error is not Masked;1：Receiver Error is Masked。
        UINT32    Reserved_54           : 5   ; // [5..1] Reserved
        UINT32    badtlpmask            : 1   ; // [6] Bad TLP Mask0：Bad TLP is not Masked;1：Bad TLP is Masked。
        UINT32    baddllpmask           : 1   ; // [7] Bad DLLP Mask0：Bad DLLP is not Masked;1：Bad DLLP is Masked。
        UINT32    replay_numrollovermask  : 1   ; // [8] REPLAY_NUM Rollover Mask0：REPLAY_NUM Rollover is not Masked;1：REPLAY_NUM Rollover is Masked。
        UINT32    Reserved_53           : 3   ; // [11..9] Reserved
        UINT32    replytimertimeoutmask  : 1   ; // [12] Reply Timer Timeout Mask0：Reply Timer Timeout is not Masked;1：Reply Timer Timeout is Masked。
        UINT32    advisorynon_fatalerrormask  : 1   ; // [13] Advisory Non-Fatal Error Mask0：Advisory Non-Fatal Error is not Maskd;1：Advisory Non-Fatal Error is Masked。
        UINT32    corr_err_mask         : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_CAP5_U;

// Define the union PCIE_MEEP_AER_CAP6_U
// 高级错误报告寄存器
// 0x1118
typedef union tagMeepAerCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    firsterrorpointer     : 5   ; // [4..0] First Error Pointer
        UINT32    ecrcgenerationcapability  : 1   ; // [5] ECRC Generation Capability0：no capability;1：has capability。
        UINT32    ecrcgenerationenable  : 1   ; // [6] ECRC Generation Enable0：disable;1：enable。
        UINT32    ecrccheckcapable      : 1   ; // [7] ECRC Check Capable0：no capability;1：has capability。
        UINT32    ecrccheckenable       : 1   ; // [8] ECRC Check Enable0：diable;1：enable。
        UINT32    adv_cap_ctrl          : 23  ; // [31..9] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_CAP6_U;

// Define the union PCIE_MEEP_AER_CAP11_U
// 高级错误报告寄存器
// 0x112C
typedef union tagMeepAerCap11
{
    // Define the struct Bits
    struct
    {
        UINT32    correctableerrorreportingenable  : 1   ; // [0] Correctable Error Reporting Enable0：disable;1：enable。
        UINT32    non_fatalerrorreportingenable  : 1   ; // [1] Non-Fatal Error Reporting Enable0：disable;1：enable。
        UINT32    fatalerrorreportingenable  : 1   ; // [2] Fatal Error Reporting Enable0：disable;1：enable。
        UINT32    root_err_cmd          : 29  ; // [31..3] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_CAP11_U;

// Define the union PCIE_MEEP_AER_CAP12_U
// 高级错误报告寄存器
// 0x1130
typedef union tagMeepAerCap12
{
    // Define the struct Bits
    struct
    {
        UINT32    err_correceived       : 1   ; // [0] ERR_COR Received0：未收到ERR_COR;1：收到ERR_COR。
        UINT32    multipleerr_correceived  : 1   ; // [1] Multiple ERR_COR Received0：未收到多个ERR_COR;1：收到多个ERR_COR。
        UINT32    err_fatal_nonfatalreceived  : 1   ; // [2] ERR_FATAL/NONFATAL Received0：未收到ERR_FATAL/NONFATAL;1：收到ERR_FATAL/NONFATAL。
        UINT32    multipleerr_fatal_nonfatalreceived  : 1   ; // [3] Multiple ERR_FATAL/NONFATAL Received0：未收到多个ERR_FATAL/NONFATAL;1：收到多个ERR_FATAL/NONFATAL。
        UINT32    firstuncorrectablefatal  : 1   ; // [4] First Uncorrectable Fatal0：指示没有收到第一个Uncorrectable Fatal;1：指示收到第一个Uncorrectable Fatal。
        UINT32    non_fatalerrormessagesreceived  : 1   ; // [5] Non-Fatal Error Messages Received0：未收到Non-Fatal Error Messages;1：收到Non-Fatal Error Messages。
        UINT32    fatalerrormessagesreceived  : 1   ; // [6] Fatal Error Messages Received0：未收到Fatal Error Messages;1：收到Fatal Error Messages。
        UINT32    Reserved_57           : 20  ; // [26..7] Reserved
        UINT32    root_err_status       : 5   ; // [31..27] Advanced Error Interrupt Message Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_CAP12_U;

// Define the union PCIE_MEEP_AER_CAP13_U
// 高级错误报告寄存器
// 0x1134
typedef union tagMeepAerCap13
{
    // Define the struct Bits
    struct
    {
        UINT32    err_corsourceidentification  : 16  ; // [15..0] ERR_COR Source Identification
        UINT32    err_src_id            : 16  ; // [31..16] ERR_FATAL/NONFATAL Source Identification
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_CAP13_U;

// Define the union PCIE_MEEP_VC_CAP0_U
// 虚拟通道功能寄存器
// 0x1140
typedef union tagMeepVcCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pciexpressextendedcapabilityid  : 16  ; // [15..0] PCI Express Extended Capability ID
        UINT32    capabilityversion     : 4   ; // [19..16] Capability Version
        UINT32    vc_cap_hdr            : 12  ; // [31..20] Next Capability Offset
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_VC_CAP0_U;

// Define the union PCIE_MEEP_VC_CAP1_U
// 虚拟通道功能寄存器
// 0x1144
typedef union tagMeepVcCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    extendedvccount       : 3   ; // [2..0] Extended VC Count
        UINT32    Reserved_60           : 1   ; // [3] Reserved
        UINT32    lowpriorityextendedvccount  : 3   ; // [6..4] Low Priority Extended VC Count
        UINT32    Reserved_59           : 1   ; // [7] Reserved
        UINT32    referenceclock        : 2   ; // [9..8] Reference Clock，不适用于Endpoint，硬连线为0
        UINT32    portarbitrationtableentrysize  : 2   ; // [11..10] Port Arbitration Table Entry Size，不适用于Endpoint，硬连线为0
        UINT32    vc_cap1               : 20  ; // [31..12] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_VC_CAP1_U;

// Define the union PCIE_MEEP_VC_CAP2_U
// 虚拟通道功能寄存器
// 0x1148
typedef union tagMeepVcCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    vcarbitrationcapability  : 8   ; // [7..0] VC Arbitration Capability
        UINT32    Reserved_61           : 16  ; // [23..8] Reserved
        UINT32    vc_cap2               : 8   ; // [31..24] VC Arbitration Table Offset，该版本IP不支持
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_VC_CAP2_U;

// Define the union PCIE_MEEP_VC_CAP3_U
// 虚拟通道功能寄存器
// 0x114C
typedef union tagMeepVcCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    loadvcarbitrationtable  : 1   ; // [0] Load VC Arbitration Table
        UINT32    vcarbitrationselect   : 3   ; // [3..1] VC Arbitration Select
        UINT32    Reserved_63           : 12  ; // [15..4] Reserved
        UINT32    arbitrationtablestatus  : 1   ; // [16] Arbitration Table Status
        UINT32    Reserved_62           : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_VC_CAP3_U;

// Define the union PCIE_MEEP_VC_CAP4_U
// 虚拟通道功能寄存器
// 0x1150
typedef union tagMeepVcCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    portarbitrationcapability  : 8   ; // [7..0] Port Arbitration Capability
        UINT32    Reserved_66           : 6   ; // [13..8] Reserved
        UINT32    Reserved_65           : 1   ; // [14] 未定义
        UINT32    rejectsnooptransactions  : 1   ; // [15] Reject Snoop Transactions，不适用于Endpoint，硬连线为0
        UINT32    maximumtimeslots      : 7   ; // [22..16] Maximum Time Slots，不适用于Endpoint
        UINT32    Reserved_64           : 1   ; // [23] Reserved
        UINT32    vc_res_cap            : 8   ; // [31..24] Port Arbitration Table Offset，不适用于Endpoint，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_VC_CAP4_U;

// Define the union PCIE_MEEP_VC_CAP5_U
// 虚拟通道功能寄存器
// 0x1154
typedef union tagMeepVcCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    tc_vcmap              : 8   ; // [7..0] TC/VC Map
        UINT32    Reserved_69           : 8   ; // [15..8] Reserved
        UINT32    loadportarbitrationtable  : 1   ; // [16] Load Port Arbitration Table，不适用于Endpoint
        UINT32    portarbitrationselec  : 3   ; // [19..17] Port Arbitration Select，对于Endpoint硬连线为0
        UINT32    Reserved_68           : 4   ; // [23..20] Reserved
        UINT32    vcid                  : 3   ; // [26..24] VC ID，硬连线为0
        UINT32    Reserved_67           : 4   ; // [30..27] Reserved
        UINT32    vc_res_ctrl           : 1   ; // [31] VC Enable，硬连线为1
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_VC_CAP5_U;

// Define the union PCIE_MEEP_VC_CAP6_U
// 虚拟通道功能寄存器
// 0x1158
typedef union tagMeepVcCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_70           : 16  ; // [15..0] Reserved
        UINT32    portarbitrationtablestatus  : 1   ; // [16] Port Arbitration Table Status
        UINT32    vcnegotiationpending  : 1   ; // [17] VC Negotiation Pending
        UINT32    vc_res_status         : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_VC_CAP6_U;

// Define the union PCIE_MEEP_VC_CAP7_U
// 虚拟通道功能寄存器
// 0x115C
typedef union tagMeepVcCap7
{
    // Define the struct Bits
    struct
    {
        UINT32    portarbitrationcapability  : 8   ; // [7..0] Port Arbitration Capability，硬连线为1
        UINT32    Reserved_73           : 6   ; // [13..8] Reserved
        UINT32    Reserved_72           : 1   ; // [14] 未定义
        UINT32    rejectsnooptransactions  : 1   ; // [15] Reject Snoop Transactions
        UINT32    maximumtimeslots      : 7   ; // [22..16] Maximum Time Slots
        UINT32    Reserved_71           : 1   ; // [23] Reserved
        UINT32    vc_res_cap0           : 8   ; // [31..24] Port Arbitration Table Offset，不适用于Endpoint，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_VC_CAP7_U;

// Define the union PCIE_MEEP_VC_CAP8_U
// 虚拟通道功能寄存器
// 0x1160
typedef union tagMeepVcCap8
{
    // Define the struct Bits
    struct
    {
        UINT32    tc_vcmap              : 8   ; // [7..0] TC/VC Map
        UINT32    Reserved_76           : 8   ; // [15..8] Reserved
        UINT32    loadportarbitrationtable  : 1   ; // [16] Load Port Arbitration Table
        UINT32    portarbitrationselect  : 3   ; // [19..17] Port Arbitration Select，对于Endpoint硬连线为0
        UINT32    Reserved_75           : 4   ; // [23..20] Reserved
        UINT32    vcid                  : 3   ; // [26..24] VC ID
        UINT32    Reserved_74           : 4   ; // [30..27] Reserved
        UINT32    vc_res_ctrl0          : 1   ; // [31] VC Enable0：VC禁用;1：VC使能。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_VC_CAP8_U;

// Define the union PCIE_MEEP_VC_CAP9_U
// 虚拟通道功能寄存器
// 0x1164
typedef union tagMeepVcCap9
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_77           : 16  ; // [15..0] Reserved
        UINT32    arbitrationtablestatus  : 1   ; // [16] Arbitration Table Status
        UINT32    vcnegotiationpending  : 1   ; // [17] VC Negotiation Pending
        UINT32    vc_res_status0        : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_VC_CAP9_U;

// Define the union PCIE_MEEP_PORT_LOGIC0_U
// 端口逻辑寄存器
// 0x1700
typedef union tagMeepPortLogic0
{
    // Define the struct Bits
    struct
    {
        UINT32    ack_lat_timer         : 16  ; // [15..0] Round Trip Latency Time Limit
        UINT32    replay_timer          : 16  ; // [31..16] Replay Time Limit
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC0_U;

// Define the union PCIE_MEEP_PORT_LOGIC2_U
// 端口逻辑寄存器
// 0x1708
typedef union tagMeepPortLogic2
{
    // Define the struct Bits
    struct
    {
        UINT32    linknumber            : 8   ; // [7..0] Link Number，不适用于Endpoint
        UINT32    Reserved_80           : 7   ; // [14..8] Reserved
        UINT32    forcelink             : 1   ; // [15] Force Link
        UINT32    linkstate             : 6   ; // [21..16] Link State
        UINT32    Reserved_79           : 2   ; // [23..22] Reserved
        UINT32    port_force_link       : 8   ; // [31..24] Low Power Entrance Count
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC2_U;

// Define the union PCIE_MEEP_PORT_LOGIC3_U
// 端口逻辑寄存器
// 0x170C
typedef union tagMeepPortLogic3
{
    // Define the struct Bits
    struct
    {
        UINT32    ackfrequency          : 8   ; // [7..0] Ack Frequency
        UINT32    n_fts                 : 8   ; // [15..8] N_FTS
        UINT32    commonclockn_fts      : 8   ; // [23..16] Common Clock N_FTS
        UINT32    l0sentrancelatency    : 3   ; // [26..24] L0s Entrance Latency000：1us;001：2us;010：3us;011：4us;100：5us;101：6us;110：7us;111：7us。
        UINT32    l1entrancelatency     : 3   ; // [29..27] L1 Entrance Latency000：1us;001：2us;010：4us;011：8us;100：16us;101：32us;110：64us;111：64us。
        UINT32    enteraspml1withoutreceiveinl0s  : 1   ; // [30] Enter ASPM L1 without receive in L0s0：发送接收端都处于L0s一段空闲时间后，core才能进入L1状态;
        UINT32    ack_aspm              : 1   ; // [31] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC3_U;

// Define the union PCIE_MEEP_PORT_LOGIC4_U
// 端口逻辑寄存器
// 0x1710
typedef union tagMeepPortLogic4
{
    // Define the struct Bits
    struct
    {
        UINT32    vendorspecificdllprequest  : 1   ; // [0] Vendor Specific DLLP Request0：不发送Vendor Specific DLLP Register定义的DLLP;1：发送Vendor Specific DLLP Register定义的DLLP。
        UINT32    scrambledisable       : 1   ; // [1] Scramble Disable0：禁用加扰;1：使能加扰。
        UINT32    loopbackenable        : 1   ; // [2] Loopback Enable0：禁用loopback;1：使能loopback。
        UINT32    resetassert           : 1   ; // [3] Reset Assert，不适用于EP0：不触发recovery状态;
        UINT32    Reserved_83           : 1   ; // [4] Reserved
        UINT32    dlllinkenable         : 1   ; // [5] DLL Link Enable0：禁用initFC DLLP发送以及建立链路;1：使能initFC DLLP发送以及建立链路。
        UINT32    Reserved_82           : 1   ; // [6] Reserved
        UINT32    fastlinkmode          : 1   ; // [7] Fast Link Mode0：禁用Fast Link Mode;1：使能Fast Link Mode。
        UINT32    Reserved_81           : 8   ; // [15..8] Reserved
        UINT32    linkmodeenable        : 6   ; // [21..16] Link Mode Enable000001：x1;
        UINT32    crosslinkenable       : 1   ; // [22] Crosslink Enable0：禁用crosslink;1：使能crosslink。
        UINT32    crosslinkactive       : 1   ; // [23] Crosslink Active0：未发生crosslink;1：发生crosslink。
        UINT32    port_link_ctrl        : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC4_U;

// Define the union PCIE_MEEP_PORT_LOGIC5_U
// 端口逻辑寄存器
// 0x1714
typedef union tagMeepPortLogic5
{
    // Define the struct Bits
    struct
    {
        UINT32    insertlaneskewfortransmit  : 24  ; // [23..0] Insert Lane Skew for Transmit
        UINT32    flowcontroldisable    : 1   ; // [24] Flow Control Disable0：不禁用core发送FC DLLP;1：禁用core发送FC DLLP。
        UINT32    ack_nakdisable        : 1   ; // [25] Ack/Nak Disable0：不禁用core发送Ack/Nak DLLP;1：禁用core发送Ack/Nak DLLP。
        UINT32    Reserved_84           : 5   ; // [30..26] reserved
        UINT32    lane_skew             : 1   ; // [31] Disable Lane-to-Lane Deskew0：不禁用Lane-to-Lane Deskew;1：禁用Lane-to-Lane Deskew。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC5_U;

// Define the union PCIE_MEEP_PORT_LOGIC6_U
// 端口逻辑寄存器
// 0x1718
typedef union tagMeepPortLogic6
{
    // Define the struct Bits
    struct
    {
        UINT32    numberoftssymbols     : 4   ; // [3..0] Number of TS Symbols
        UINT32    Reserved_86           : 4   ; // [7..4] Reserved
        UINT32    numberofskpsymbols    : 3   ; // [10..8] Number of SKP Symbols
        UINT32    Reserved_85           : 3   ; // [13..11] Reserved
        UINT32    timermodifierforreplaytimer  : 5   ; // [18..14] Timer Modifier for Replay Timer
        UINT32    timermodifierforack_naklatencytimer  : 5   ; // [23..19] Timer Modifier for Ack/Nak Latency Timer
        UINT32    timermodifierforflowcontrolwatchdogtimer  : 5   ; // [28..24] Timer Modifier for Flow Control Watchdog Timer
        UINT32    sym_num               : 3   ; // [31..29] Configuration Requests targeted at function numbers above this value will be returned with UR (unsupported request).
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC6_U;

// Define the union PCIE_MEEP_PORT_LOGIC7_U
// 端口逻辑寄存器
// 0x171C
typedef union tagMeepPortLogic7
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0posteddataqueuedepth  : 11  ; // [10..0] SKP Interval Value
        UINT32    Reserved_87           : 4   ; // [14..11] Reserved
        UINT32    sym_timer             : 1   ; // [15] Disable FC Watchdog Timer0：不禁用FC Watchdog Timer;1：禁用FC Watchdog Timer。
        UINT32    maskfunctionmismatchfilteringfo  : 1   ; // [16] Mask function mismatch filtering for incoming Requests0：不使用Mask;1：使用Mask。
        UINT32    maskpoisonedtlpfiltering  : 1   ; // [17] Mask poisoned TLP filtering0：不使用Mask;1：使用Mask。
        UINT32    maskbarmatchfiltering  : 1   ; // [18] Mask BAR match filtering0：不使用Mask;1：使用Mask。
        UINT32    masktype1configurationrequestfiltering  : 1   ; // [19] Mask Type 1 Configuration Request filtering0：不使用Mask;1：使用Mask。
        UINT32    masklockedrequestfiltering  : 1   ; // [20] Mask Locked Request filtering0：不使用Mask;1：使用Mask。
        UINT32    masktagerrorrulesforreceivedcompletions  : 1   ; // [21] Mask Tag error rules for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maskrequesteridmismatcherrorforreceivedcompletions  : 1   ; // [22] Mask Requester ID mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maskfunctionmismatcherrorforreceivedcompletions  : 1   ; // [23] Mask function mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_traffic_classmis_match_error_forreceived_completions  : 1   ; // [24] Mask Traffic Class mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_attributesmismatcherrorforreceivedcompletions  : 1   ; // [25] Mask Attributes mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_length_mismatch_error_forreceive_dcompletions  : 1   ; // [26] Mask Length mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maske_crcerror_filtering  : 1   ; // [27] Mask ECRC error filtering0：不使用Mask;1：使用Mask。
        UINT32    maske_crcerror_filtering_forcompletions  : 1   ; // [28] Mask ECRC error filtering for Completions0：不使用Mask;1：使用Mask。
        UINT32    message_control       : 1   ; // [29] 0：send decoded Message on the SII,then drop the Message TLPs;
        UINT32    maskfilteringofreceived  : 1   ; // [30] Mask filtering of received I/O Requests (RC mode only)0：不使用Mask;1：使用Mask。
        UINT32    flt_mask1             : 1   ; // [31] Mask filtering of received Configuration Requests (RC mode only)0：不使用Mask;1：使用Mask。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC7_U;

// Define the union PCIE_MEEP_PORT_LOGIC8_U
// 端口逻辑寄存器
// 0x1720
typedef union tagMeepPortLogic8
{
    // Define the struct Bits
    struct
    {
        UINT32    cx_flt_mask_venmsg0_drop  : 1   ; // [0] CX_FLT_MASK_VENMSG0_DROP0：丢弃Vendor MSG Type 0并报告UR错误;1：不丢弃Vendor MSG Type 0。
        UINT32    cx_flt_mask_venmsg1_drop  : 1   ; // [1] CX_FLT_MASK_VENMSG1_DROP0：丢弃Vendor MSG Type 1;1：不丢弃Vendor MSG Type 1。
        UINT32    cx_flt_mask_dabort_4ucpl  : 1   ; // [2] CX_FLT_MASK_DABORT_4UCPL0：对于unexpected CPL使能DLLP abort;1：对于unexpected CPL禁用DLLP abort。
        UINT32    cx_flt_mask_handle_flush  : 1   ; // [3] CX_FLT_MASK_HANDLE_FLUSH0：禁用core filter处理flush请求;1：使能core filter处理flush请求。
        UINT32    flt_mask2             : 28  ; // [31..4] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC8_U;

// Define the union PCIE_MEEP_PORT_LOGIC9_U
// 端口逻辑寄存器
// 0x1724
typedef union tagMeepPortLogic9
{
    // Define the struct Bits
    struct
    {
        UINT32    amba_multi_outbound_decomp_np  : 1   ; // [0] Enable AMBA Multiple Outbound Decomposed NP Sub-Request0：禁用;1：使能。
        UINT32    amba_obnp_ctrl        : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC9_U;

// Define the union PCIE_MEEP_PORT_LOGIC12_U
// 端口逻辑寄存器
// 0x1730
typedef union tagMeepPortLogic12
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitposteddatafccredits  : 12  ; // [11..0] Transmit Posted Data FC Credits
        UINT32    transmitpostedheaderfccredits  : 8   ; // [19..12] Transmit Posted Header FC Credits
        UINT32    tx_pfc_status         : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC12_U;

// Define the union PCIE_MEEP_PORT_LOGIC13_U
// 端口逻辑寄存器
// 0x1734
typedef union tagMeepPortLogic13
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitnon_posteddatafccredits  : 12  ; // [11..0] Transmit Non-Posted Data FC Credits
        UINT32    transmitnon_postedheaderfccredits  : 8   ; // [19..12] Transmit Non-Posted Header FC Credits
        UINT32    tx_npfc_status        : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC13_U;

// Define the union PCIE_MEEP_PORT_LOGIC14_U
// 端口逻辑寄存器
// 0x1738
typedef union tagMeepPortLogic14
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitcompletiondatafccredits  : 12  ; // [11..0] Transmit Completion Data FC Credits
        UINT32    transmitcompletionheaderfccredits  : 8   ; // [19..12] Transmit Completion Header FC Credits
        UINT32    tx_cplfc_status       : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC14_U;

// Define the union PCIE_MEEP_PORT_LOGIC15_U
// 端口逻辑寄存器
// 0x173C
typedef union tagMeepPortLogic15
{
    // Define the struct Bits
    struct
    {
        UINT32    rx_tlp_fc_credit_not_retured  : 1   ; // [0] 
        UINT32    tx_retry_buf_not_empty  : 1   ; // [1] 
        UINT32    rx_queue_not_empty    : 1   ; // [2] 
        UINT32    Reserved_89           : 13  ; // [15..3] Received TLP FC Credits Not Returned0：Received TLP FC Credits Returned;1：Received TLP FC Credits Not Returned。
        UINT32    fc_latency_timer_override_value  : 13  ; // [28..16] Transmit Retry Buffer Not Empty0：Transmit Retry Buffer Empty;1：Transmit Retry Buffer Not Empty。
        UINT32    Reserved_88           : 2   ; // [30..29] Received Queue Not Empty0：Received Queue Empty;1：Received Queue Not Empty。
        UINT32    fc_latency_timer_override_en  : 1   ; // [31] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC15_U;

// Define the union PCIE_MEEP_PORT_LOGIC16_U
// 端口逻辑寄存器
// 0x1748
typedef union tagMeepPortLogic16
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0posteddatacredits  : 12  ; // [11..0] VC0 Posted Data Credits
        UINT32    vc0postedheadercredits  : 8   ; // [19..12] VC0 Posted Header Credits
        UINT32    Reserved_91           : 1   ; // [20] Reserved
        UINT32    vc0_postedtlpqueuemode  : 1   ; // [21] VC0 Posted TLP Queue Mode0：未选择store-and-forword;1：选择store-and-forword。
        UINT32    vc0postedtlpqueuemode  : 1   ; // [22] VC0 Posted TLP Queue Mode0：未选择cut_through;1：选择cut_through。
        UINT32    vc0postedtlpqueuemo   : 1   ; // [23] VC0 Posted TLP Queue Mode0：未选择Bypass;1：选择Bypass。
        UINT32    Reserved_90           : 6   ; // [29..24] Reserved
        UINT32    tlptypeorderingforvc0  : 1   ; // [30] TLP Type Ordering for VC00：Strict ordering;1：Ordering follows the rules in PCIe 3.0。
        UINT32    rx_pque_ctrl          : 1   ; // [31] VC Ordering for Receive Queues0：round robin;
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC16_U;

// Define the union PCIE_MEEP_PORT_LOGIC17_U
// 端口逻辑寄存器
// 0x174C
typedef union tagMeepPortLogic17
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0non_posteddatarcredits  : 12  ; // [11..0] VC0 Non-Posted data Credits
        UINT32    vc0non_postedheadercredits  : 8   ; // [19..12] VC0 Non-Posted Header Credits
        UINT32    Reserved_93           : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC17_U;

// Define the union PCIE_MEEP_PORT_LOGIC18_U
// 端口逻辑寄存器
// 0x1750
typedef union tagMeepPortLogic18
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_comp_data_credits  : 12  ; // [11..0] VC0 Completion Data Credits
        UINT32    vc0_cpl_header_credt  : 8   ; // [19..12] VC0 Completion header credits
        UINT32    Reserved_94           : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC18_U;

// Define the union PCIE_MEEP_PORT_LOGIC19_U
// 端口逻辑寄存器
// 0x17A8
typedef union tagMeepPortLogic19
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_posted_data_que_path  : 14  ; // [13..0] VC0 Posted Data Queue Depth
        UINT32    Reserved_95           : 2   ; // [15..14] Reserved
        UINT32    vco_posted_head_queue_depth  : 10  ; // [25..16] VC0 Posted Header Queue Depth
        UINT32    vc_pbuf_ctrl          : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC19_U;

// Define the union PCIE_MEEP_PORT_LOGIC20_U
// 端口逻辑寄存器
// 0x17AC
typedef union tagMeepPortLogic20
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_np_data_que_depth  : 14  ; // [13..0] VC0 Non-Posted Data Queue Depth
        UINT32    Reserved_97           : 2   ; // [15..14] Reserved
        UINT32    vco_np_header_que_depth  : 10  ; // [25..16] VC0 Non-Posted Header Queue Depth
        UINT32    vc_npbuf_ctrl         : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC20_U;

// Define the union PCIE_MEEP_PORT_LOGIC21_U
// 端口逻辑寄存器
// 0x17B0
typedef union tagMeepPortLogic21
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_comp_data_queue_depth  : 14  ; // [13..0] VC0 Completion Data Queue Depth
        UINT32    Reserved_99           : 2   ; // [15..14] Reserved
        UINT32    vco_posted_head_queue_depth  : 10  ; // [25..16] VC0 Posted Header Queue Depth
        UINT32    Reserved_98           : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC21_U;

// Define the union PCIE_MEEP_PORT_LOGIC22_U
// 端口逻辑寄存器
// 0x180C
typedef union tagMeepPortLogic22
{
    // Define the struct Bits
    struct
    {
        UINT32    n_fts                 : 8   ; // [7..0] Sets the Number of Fast Training Sequences (N_FTS) that the core advertises as its N_FTS during Gen2 or Gen3 Link training
        UINT32    pre_determ_num_of_lane  : 9   ; // [16..8] Predetermined Number of Lanes1：1 lane;2：2 lanes;其他值：保留。
        UINT32    det_sp_change         : 1   ; // [17] Directed Speed Change0：指示LTSSM在链路初始化完成后不改变到GEN2速率;1：指示LTSSM在链路初始化完成后改变到GEN2速率。
        UINT32    config_phy_tx_sw      : 1   ; // [18] Config PHY Tx Swing0：Low Swing;1：Full Swing。
        UINT32    config_tx_comp_rcv_bit  : 1   ; // [19] Config Tx Compliance Receive Bit0：不指示LTSSM发送含有声明compliance接受比特的TS有序集;1：指示LTSSM发送含有声明compliance接受比特的TS有序集。
        UINT32    set_emp_level         : 1   ; // [20] Used to set the de-emphasis level for Upstream Ports0：-6dB;1：-3.5dB。
        UINT32    Reserved_100          : 11  ; // [31..21] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORT_LOGIC22_U;

// Define the union PCIE_MEEP_PORTLOGIC25_U
// 端口逻辑寄存器
// 0x1818
typedef union tagMeepPortlogic25
{
    // Define the struct Bits
    struct
    {
        UINT32    remote_rd_req_size    : 3   ; // [2..0] Remote Read Request Size000：128;001：256;010：512;011：1024;100：2048;101：4096;110：保留;111：保留。
        UINT32    Reserved_103          : 5   ; // [7..3] Reserved
        UINT32    remote_max_brd_tag    : 8   ; // [15..8] Remote Max Bridge Tag
        UINT32    Reserved_102          : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC25_U;

// Define the union PCIE_MEEP_PORTLOGIC26_U
// 端口逻辑寄存器
// 0x181C
typedef union tagMeepPortlogic26
{
    // Define the struct Bits
    struct
    {
        UINT32    resize_master_resp_compser  : 1   ; // [0] Resize Master Response Composer0：不改变AXI Master Response Composer Contro Register 0的值;1：改变AXI Master Response Composer Contro Register 0的值。
        UINT32    axi_ctrl1             : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC26_U;

// Define the union PCIE_MEEP_PORTLOGIC55_U
// 端口逻辑寄存器
// 0x1904
typedef union tagMeepPortlogic55
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu1_type            : 5   ; // [4..0] 出站TLP的地址在该区域内则该TLP的TYPE字段用该值替换;入站TLP的TYPE字段如果等于该值则执行地址转换。
        UINT32    iatu1_tc              : 3   ; // [7..5] 出站TLP的地址在该区域内则该TLP的TC字段用该值替换;入站TLP的TC字段如果等于该值则执行地址转换。
        UINT32    iatu1_td              : 1   ; // [8] 出站TLP的地址在该区域内则该TLP的TD字段用该值替换;入站TLP的TD字段如果等于该值则执行地址转换。
        UINT32    iatu1_attr            : 2   ; // [10..9] 出站TLP的地址在该区域内则该TLP的ATTR字段用该值替换;入站TLP的ATTR字段如果等于该值则执行地址转换。
        UINT32    Reserved_107          : 5   ; // [15..11] Reserved
        UINT32    iatu1_at              : 2   ; // [17..16] 出站TLP的地址在该区域内则该TLP的AT字段用该值替换;入站TLP的AT字段如果等于该值则执行地址转换。
        UINT32    Reserved_106          : 2   ; // [19..18] Reserved
        UINT32    iatu1_id              : 3   ; // [22..20] 出站TLP的地址在该区域内则该TLP的Requester ID的功能号字段用该值替换;对于入站MEM/IO，如果与该功能号的BAR匹配，则执行地址转换;对于入站CFG，如果功能号字段等于该值则执行地址转换。
        UINT32    Reserved_105          : 9   ; // [31..23] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC55_U;

// Define the union PCIE_MEEP_PORTLOGIC56_U
// 端口逻辑寄存器
// 0x908
typedef union tagMeepPortlogic56
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu2_type            : 8   ; // [7..0] 出站TLP的地址在该区域内，并且转换的TLP的TYPE字段为消息，那么该TLP的Message Code字段用该值替换;
        UINT32    iatu2_bar_num         : 3   ; // [10..8] BAR Number对于Outbound不适用。
        UINT32    Reserved_111          : 3   ; // [13..11] Reserved
        UINT32    iatu2_tc_match_en     : 1   ; // [14] TC Match Enable对于Outbound不适用。
        UINT32    iatu2_td_match_en     : 1   ; // [15] TD Match Enable对于Outbound不适用。
        UINT32    iatu2_attr_match_en   : 1   ; // [16] ATTR Match Enable对于Outbound不适用。
        UINT32    Reserved_110          : 1   ; // [17] Reserved
        UINT32    iatu2_at_match_en     : 1   ; // [18] AT Match Enable对于Outbound不适用。
        UINT32    iatu2_func_num_match_en  : 1   ; // [19] Function Number Match Enable对于Outbound不适用。
        UINT32    iatu2_virtual_func_num_match_en  : 1   ; // [20] Virtual Function Number Match Enable对于Outbound不适用。
        UINT32    message_code_match_en  : 1   ; // [21] Message Code Match Enable对于Outbound不适用。
        UINT32    Reserved_109          : 2   ; // [23..22] Reserved
        UINT32    iatu2_response_code   : 2   ; // [25..24] Response Code对于Outbound不适用。
        UINT32    Reserved_108          : 1   ; // [26] Reserved
        UINT32    iatu2_fuzzy_type_match_mode  : 1   ; // [27] Fuzzy Type Match Mode对于Outbound不适用。
        UINT32    iatu2_cfg_shift_mode  : 1   ; // [28] CFG Shift Mode0：不使用CFG Shift Mode;1：使用CFG Shift Mode。
        UINT32    iatu2_ivert_mode      : 1   ; // [29] Invert Mode0：不使用Invert Mode;1：使用Invert Mode。
        UINT32    iatu2_match_mode      : 1   ; // [30] Match Mode对于Outbound不适用。
        UINT32    iatu2_region_en       : 1   ; // [31] Region Enable0：禁用该区域地址转换;1：使能该区域地址转换。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC56_U;

// Define the union PCIE_MEEP_PORTLOGIC57_U
// 端口逻辑寄存器
// 0x190C
typedef union tagMeepPortlogic57
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu_start_low        : 12  ; // [11..0] Forms Bits [11:0] of the start address of the address region to be translated.
        UINT32    iatu_start_high       : 20  ; // [31..12] Forms Bits [31:12] of the start address of the address region to be translated.
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC57_U;

// Define the union PCIE_MEEP_PORTLOGIC59_U
// 端口逻辑寄存器
// 0x1914
typedef union tagMeepPortlogic59
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu_limit_low        : 12  ; // [11..0] Forms Bits [11:0] of the end address of the address region to be translated
        UINT32    iatu_limit_high       : 20  ; // [31..12] Forms Bits [31:12] of the end address of the address region to be translated
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC59_U;

// Define the union PCIE_MEEP_PORTLOGIC60_U
// 端口逻辑寄存器
// 0x1918
typedef union tagMeepPortlogic60
{
    // Define the struct Bits
    struct
    {
        UINT32    xlated_addr_high      : 12  ; // [11..0] Forms Bits [11:0] of the start address of the new address of the translated region
        UINT32    xlated_addr_low       : 20  ; // [31..12] Forms Bits [31:12] of the of the new address of the translated region
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC60_U;

// Define the union PCIE_MEEP_PORTLOGIC62_U
// 端口逻辑寄存器
// 0x197C
typedef union tagMeepPortlogic62
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_wr_eng_en         : 1   ; // [0] DMA Write Engine Enable0：禁用DMA Write Engine;1：使能DMA Write Engine。
        UINT32    dma_wr_ena            : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC62_U;

// Define the union PCIE_MEEP_PORTLOGIC63_U
// 端口逻辑寄存器
// 0x1980
typedef union tagMeepPortlogic63
{
    // Define the struct Bits
    struct
    {
        UINT32    wr_doorbell_num       : 3   ; // [2..0] Doorbell Number必须写入0x0来启动DMA写操作，目前仅支持单通道。
        UINT32    Reserved_115          : 28  ; // [30..3] Reserved
        UINT32    dma_wr_dbell_stop     : 1   ; // [31] Stop0：不停止产生请求;1：停止产生请求。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC63_U;

// Define the union PCIE_MEEP_PORTLOGIC64_U
// 端口逻辑寄存器
// 0x199C
typedef union tagMeepPortlogic64
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_read_eng_en       : 1   ; // [0] DMA Read Engine Enable0：禁用DMA Read Engine;1：使能DMA Read Engine。
        UINT32    dma_rd_ena            : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC64_U;

// Define the union PCIE_MEEP_PORTLOGIC65_U
// 端口逻辑寄存器
// 0x19A0
typedef union tagMeepPortlogic65
{
    // Define the struct Bits
    struct
    {
        UINT32    rd_doorbell_num       : 3   ; // [2..0] Doorbell Number必须写入0x0来启动DMA读操作，目前仅支持单通道。
        UINT32    Reserved_117          : 28  ; // [30..3] Reserved
        UINT32    dma_rd_dbell_stop     : 1   ; // [31] Stop0：不停止产生请求;1：停止产生请求。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC65_U;

// Define the union PCIE_MEEP_PORTLOGIC66_U
// 端口逻辑寄存器
// 0x19BC
typedef union tagMeepPortlogic66
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_status       : 1   ; // [0] Done Interrupt Status0：未产生完成中断;1：产生完成中断。
        UINT32    Reserved_119          : 15  ; // [15..1] Reserved
        UINT32    abort_int_status      : 1   ; // [16] Abort Interrupt Status0：未丢弃出错传输;1：丢弃出错传输。
        UINT32    Reserved_118          : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC66_U;

// Define the union PCIE_MEEP_PORTLOGIC67_U
// 端口逻辑寄存器
// 0x19C4
typedef union tagMeepPortlogic67
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_mask         : 1   ; // [0] Done Interrupt Mask0：不使用Done Interrupt Mask;1：使用Done Interrupt Mask。
        UINT32    Reserved_122          : 15  ; // [15..1] Reserved
        UINT32    abort_int_mask        : 1   ; // [16] Abort Interrupt Mask0：不使用Abort Interrupt Mask;
        UINT32    Reserved_121          : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC67_U;

// Define the union PCIE_MEEP_PORTLOGIC68_U
// 端口逻辑寄存器
// 0x19C8
typedef union tagMeepPortlogic68
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_clr          : 1   ; // [0] Done Interrupt Clear0：不清除Done Interrupt Status字段;1：清除Done Interrupt Status字段。
        UINT32    Reserved_125          : 15  ; // [15..1] Reserved
        UINT32    abort_int_clr         : 1   ; // [16] Abort Interrupt Clear0：不清除Abort Interrupt Status字段;1：清除Abort Interrupt Status字段。
        UINT32    Reserved_124          : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC68_U;

// Define the union PCIE_MEEP_PORTLOGIC69_U
// 端口逻辑寄存器
// 0x19CC
typedef union tagMeepPortlogic69
{
    // Define the struct Bits
    struct
    {
        UINT32    app_rd_err_det        : 1   ; // [0] Application Read Error Detected0：未检测到Application Read Error ;1：检测到Application Read Error。
        UINT32    Reserved_127          : 15  ; // [15..1] Reserved
        UINT32    ll_element_fetch_err_det  : 1   ; // [16] Linked List Element Fetch Error Detected0：未检测到Linked List Element Fetch Error;1：检测到Linked List Element Fetch Error。
        UINT32    Reserved_126          : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC69_U;

// Define the union PCIE_MEEP_PORTLOGIC74_U
// 端口逻辑寄存器
// 0x19E0
typedef union tagMeepPortlogic74
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_wr_c0_imwr_data   : 16  ; // [15..0] The DMA uses this field to generate the data field for the Done or Abort IMWr TLPs it generates for write Channel 0
        UINT32    dma_wr_c1_imwr_data   : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC74_U;

// Define the union PCIE_MEEP_PORTLOGIC75_U
// 端口逻辑寄存器
// 0x1A00
typedef union tagMeepPortlogic75
{
    // Define the struct Bits
    struct
    {
        UINT32    wr_ch_ll_remote_abort_int_en  : 1   ; // [0] Write Channel LL Remote Abort Interrupt Enable (LLRAIE)0：禁用Write Channel LL Remote Abort Interrupt;1：使能Write Channel LL Remote Abort Interrupt。
        UINT32    Reserved_129          : 15  ; // [15..1] Reserved
        UINT32    wr_ch_ll_local_abort_int_en  : 1   ; // [16] Write Channel LL Local Abort Interrupt Enable (LLLAIE)0：禁用Write Channel LL Local Abort Interrupt;1：使能Write Channel LL Local Abort Interrupt。
        UINT32    Reserved_128          : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC75_U;

// Define the union PCIE_MEEP_PORTLOGIC76_U
// 端口逻辑寄存器
// 0x1A10
typedef union tagMeepPortlogic76
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_status       : 1   ; // [0] Done Interrupt Status0：未产生完成中断;1：产生完成中断。
        UINT32    Reserved_132          : 15  ; // [15..1] Reserved
        UINT32    abort_int_status      : 1   ; // [16] Abort Interrupt Status0：未丢弃出错传输;1：丢弃出错传输。
        UINT32    Reserved_131          : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC76_U;

// Define the union PCIE_MEEP_PORTLOGIC77_U
// 端口逻辑寄存器
// 0x1A18
typedef union tagMeepPortlogic77
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_mask         : 1   ; // [0] Done Interrupt Mask0：不使用Done Interrupt Mask;1：使用Done Interrupt Mask。
        UINT32    Reserved_134          : 15  ; // [15..1] Reserved
        UINT32    abort_int_mask        : 1   ; // [16] Abort Interrupt Mask0：不使用Abort Interrupt Mask;
        UINT32    dma_rd_int_mask       : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC77_U;

// Define the union PCIE_MEEP_PORTLOGIC78_U
// 端口逻辑寄存器
// 0x1A1C
typedef union tagMeepPortlogic78
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_clr          : 1   ; // [0] Done Interrupt Clear0：不清除Done Interrupt Status字段;1：清除Done Interrupt Status字段。
        UINT32    Reserved_136          : 15  ; // [15..1] Reserved
        UINT32    abort_int_clr         : 1   ; // [16] Abort Interrupt Clear0：不清除Abort Interrupt Status字段;1：清除Abort Interrupt Status字段。
        UINT32    dma_rd_int_clr        : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC78_U;

// Define the union PCIE_MEEP_PORTLOGIC79_U
// 端口逻辑寄存器
// 0x1A24
typedef union tagMeepPortlogic79
{
    // Define the struct Bits
    struct
    {
        UINT32    app_wr_err_det        : 1   ; // [0] Application Read Error Detected0：未检测到Application Read Error ;1：检测到Application Read Error。
        UINT32    Reserved_137          : 15  ; // [15..1] Reserved
        UINT32    link_list_fetch_err_det  : 1   ; // [16] Linked List Element Fetch Error Detected0：未检测到Linked List Element Fetch Error;1：检测到Linked List Element Fetch Error。
        UINT32    dma_rd_err_low        : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC79_U;

// Define the union PCIE_MEEP_PORTLOGIC80_U
// 端口逻辑寄存器
// 0x1A28
typedef union tagMeepPortlogic80
{
    // Define the struct Bits
    struct
    {
        UINT32    unspt_request         : 8   ; // [7..0] Unsupported Request0：未检测到Unsupported Request;1：检测到Unsupported Request。
        UINT32    completer_abort       : 8   ; // [15..8] Completer Abort0：未检测到Completer Abort;1：检测到Completer Abort。
        UINT32    cpl_time_out          : 8   ; // [23..16] Completion Time Out
        UINT32    data_poison           : 8   ; // [31..24] Data Poisoning0：未检测到Data Poisoning;1：检测到Data Poisoning。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC80_U;

// Define the union PCIE_MEEP_PORTLOGIC81_U
// 端口逻辑寄存器
// 0x1A34
typedef union tagMeepPortlogic81
{
    // Define the struct Bits
    struct
    {
        UINT32    remote_abort_int_en   : 1   ; // [0] Read Channel LL Remote Abort Interrupt Enable (LLRAIE)0：禁用Read Channel LL Remote Abort Interrupt;1：使能Read Channel LL Remote Abort Interrupt。
        UINT32    Reserved_139          : 15  ; // [15..1] Reserved
        UINT32    local_abort_int_en    : 1   ; // [16] Read Channel LL Local Abort Interrupt Enable (LLLAIE)0：禁用Read Channel LL Local Abort Interrupt;1：使能Read Channel LL Local Abort Interrupt。
        UINT32    dma_rd_ll_err_ena     : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC81_U;

// Define the union PCIE_MEEP_PORTLOGIC86_U
// 端口逻辑寄存器
// 0xA6C
typedef union tagMeepPortlogic86
{
    // Define the struct Bits
    struct
    {
        UINT32    channel_dir           : 3   ; // [2..0] Reserved
        UINT32    Reserved_143          : 28  ; // [30..3] Reserved
        UINT32    dma_ch_con_idx        : 1   ; // [31] Channel Direction0：写通道0;1：读通道0。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC86_U;

// Define the union PCIE_MEEP_PORTLOGIC87_U
// 端口逻辑寄存器
// 0x1A70
typedef union tagMeepPortlogic87
{
    // Define the struct Bits
    struct
    {
        UINT32    cycle_bit             : 1   ; // [0] Cycle Bit (CB)
        UINT32    toggle_cycle_bit      : 1   ; // [1] Toggle Cycle Bit (TCB)
        UINT32    load_link_pointer     : 1   ; // [2] Load Link Pointer (LLP)
        UINT32    local_int_en          : 1   ; // [3] Local Interrupt Enable (LIE)0：禁用Local Interrupt;1：使能Local Interrupt。
        UINT32    remote_int_en         : 1   ; // [4] Remote Interrupt Enable (RIE)0：禁用Remote Interrupt;1：使能Remote Interrupt。
        UINT32    channel_status        : 2   ; // [6..5] Channel Status00：保留;01：Running;10：Halted;11：Stopped。
        UINT32    Reserved_147          : 1   ; // [7] Reserved
        UINT32    consumer_cycle_state  : 1   ; // [8] Consumer Cycle State (CCS)
        UINT32    linked_list_en        : 1   ; // [9] Linked List Enable (LLE)0：禁用Linked List;1：使能Linked List。
        UINT32    Reserved_146          : 2   ; // [11..10] Reserved
        UINT32    func_num_dma          : 5   ; // [16..12] Function Number (FN) for Generated MRd/MWr DMA TLPs
        UINT32    Reserved_145          : 7   ; // [23..17] Reserved
        UINT32    no_snoop              : 1   ; // [24] No Snoop TLP Header Bit (NS)
        UINT32    ro                    : 1   ; // [25] Relaxed Ordering TLP Header Bit (RO)
        UINT32    td                    : 1   ; // [26] Traffic Digest TLP Header Bit (TD)
        UINT32    tc                    : 3   ; // [29..27] Traffic Class TLP Header Bit (TC)
        UINT32    dma_ch_ctrl           : 2   ; // [31..30] Address Translation TLP Header Bit (AT)
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC87_U;

// Define the union PCIE_MEEP_PORTLOGIC93_U
// 端口逻辑寄存器
// 0x1A8C
typedef union tagMeepPortlogic93
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_150          : 2   ; // [1..0] Reserved
        UINT32    dma_ll_ptr_low        : 30  ; // [31..2] Lower Bits of the address of the Linked List Transfer List in local memory
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PORTLOGIC93_U;

// Define the union PCIE_MEEP_PBAR23XLAT_LOWER_U
// PBAR23地址转换寄存器低32位
// 0x8000
typedef union tagMeepPbar23xlatLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_151          : 12  ; // [11..0] 保留
        UINT32    PBAR23_Xlat_Lower     : 20  ; // [31..12] PBAR23地址转换寄存器低32位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PBAR23XLAT_LOWER_U;

// Define the union PCIE_MEEP_PBAR45XLAT_LOWER_U
// PBAR45地址转换寄存器低32位
// 0x8008
typedef union tagMeepPbar45xlatLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_153          : 12  ; // [11..0] 保留
        UINT32    PBAR45_Xlat_Lower     : 20  ; // [31..12] PBAR45地址转换寄存器低32位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PBAR45XLAT_LOWER_U;

// Define the union PCIE_MEEP_PBAR23LMT_LOWER_U
// PBAR23的limit寄存器低32位
// 0x8010
typedef union tagMeepPbar23lmtLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_154          : 12  ; // [11..0] 保留
        UINT32    PBAR23_Limit_Lower    : 20  ; // [31..12] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PBAR23LMT_LOWER_U;

// Define the union PCIE_MEEP_PBAR45LMT_LOWER_U
// PBAR45的limit寄存器低32位
// 0x8018
typedef union tagMeepPbar45lmtLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_155          : 12  ; // [11..0] 保留
        UINT32    PBAR45_Limit_Lower    : 20  ; // [31..12] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PBAR45LMT_LOWER_U;

// Define the union PCIE_MEEP_PBAR45LMT_UPPER_U
// PBAR45的limit寄存器高32位
// 0x801C
typedef union tagMeepPbar45lmtUpper
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_156          : 12  ; // [11..0] 保留
        UINT32    PBAR45_Limit_Upper    : 20  ; // [31..12] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PBAR45LMT_UPPER_U;

// Define the union PCIE_MEEP_B2B_BAR01XLAT_Lower_U
// B2B模式PBAR01地址转换寄存器低32位
// 0x8028
typedef union tagMeepB2bBar01xlatLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_157          : 17  ; // [16..0] 保留位
        UINT32    B2B_PBAR01_Xlat_Lower  : 15  ; // [31..17] B2B模式下，PBAR01的地址转换寄存器低位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_B2B_BAR01XLAT_Lower_U;

// Define the union PCIE_MEEP_PPD_U
// 端口定义寄存器
// 0x8138
typedef union tagMeepPpd
{
    // Define the struct Bits
    struct
    {
        UINT32    port_def              : 1   ; // [0] NTB连接方式定义1'b0 : NTB-to-NTB模式1'b1 : NTB-to-RP模式
        UINT32    Reserved_159          : 31  ; // [31..1] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PPD_U;

// Define the union PCIE_MEEP_Device_Vendor_ID_U
// 设备ID和厂商ID
// 0x9000
typedef union tagMeepDeviceVendorId
{
    // Define the struct Bits
    struct
    {
        UINT32    Vendor_ID             : 16  ; // [15..0] 厂商ID
        UINT32    Device_ID             : 16  ; // [31..16] 设备ID
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_Device_Vendor_ID_U;

// Define the union PCIE_MEEP_PCISTS_PCICMD_U
// 控制和状况寄存器
// 0x9004
typedef union tagMeepPcistsPcicmd
{
    // Define the struct Bits
    struct
    {
        UINT32    io_space_enable       : 1   ; // [0] I/O Sapace Enable0：该设备不能响应I/O请求;1：该设备能够响应I/O请求。
        UINT32    memory_space_enable   : 1   ; // [1] Memory Space Enable0：该设备不能响应存储器请求;1：该设备能够响应存储器请求。
        UINT32    bus_master_enable     : 1   ; // [2] Bus Master Enable0：该设备不能作为主设备;1：该设备能够作为主设备。
        UINT32    specialcycleenable    : 1   ; // [3] Special Cycle Enalbe不适用于PCIe，硬连线为0
        UINT32    memory_write_and_invalidate  : 1   ; // [4] Memory Write and Invalidata不适用于PCIe，硬连线为0
        UINT32    vga_palette_snoop_enable  : 1   ; // [5] Parity Error Response0：对奇偶校验错误不作出响应;1：对奇偶校验错误作出响应。
        UINT32    parity_error_response  : 1   ; // [6] 奇偶校验错误响应，用于控制将Master的数据奇偶校验错误记录在status寄存器，当该bit为0时，status寄存器不会记录该错误。
        UINT32    idsel_stepping_waitcycle_control  : 1   ; // [7] PCIe不支持，硬连线为0
        UINT32    serr_enable           : 1   ; // [8] 用于控制设备将Non-Fatal和Fatal错误报告给RC
        UINT32    fastback_to_backenable  : 1   ; // [9] 
        UINT32    Interrupt_Disable     : 1   ; // [10] 中断禁用，控制PCIe设备产生INTx中断消息的能力
        UINT32    Reserved_164          : 5   ; // [15..11] 保留
        UINT32    Reserved_163          : 3   ; // [18..16] 保留
        UINT32    intx_status           : 1   ; // [19] 中断状况，表示该功能有个未完成的中断请求
        UINT32    capabilitieslist      : 1   ; // [20] 功能列表.该比特为1表示存在扩展功能列表。
        UINT32    pcibus66mhzcapable    : 1   ; // [21] PCIe不支持，保留
        UINT32    Reserved_162          : 1   ; // [22] PCIe不支持，保留
        UINT32    fastback_to_back      : 1   ; // [23] PCIe不支持，保留
        UINT32    masterdataparityerror  : 1   ; // [24] 主控数据奇偶错误，如果在命令寄存器中设置了奇偶错误允许比特时，如果收到错误的完成或者写请求中毒时，设置该比特
        UINT32    devsel_timing         : 2   ; // [26..25] PCIe不支持，保留
        UINT32    Signaled_Target_Abort  : 1   ; // [27] 已发送目标异常中断，当充当完成者的功能通过发送完成者异常中断完成状况到请求者要求终止请求时，该比特置为1
        UINT32    Received_Target_Abort  : 1   ; // [28] 已接收目标异常中断，当请求者接收到一个带完成者异常中断完成状况的完成时，设置该比特
        UINT32    Received_Master_Abort  : 1   ; // [29] 已接收控制器异常中断，当请求者接收到一个带未受支持的的请求完成状况时，设置该比特。
        UINT32    Signaled_System_Error  : 1   ; // [30] 已发信号系统错误，当功能发送ERR_FATAL或者ERR_NONFATAL消息，并且命令寄存器中的SEER允许比特为1时，设置该比特
        UINT32    Detected_Parity_Error  : 1   ; // [31] 已发现奇偶错误，不论功能的命令寄存器中的奇偶错误启用比特的状态如何，只要该功能受到一个中毒TLP，就设置该比特。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCISTS_PCICMD_U;

// Define the union PCIE_MEEP_CCR_RID_U
// 类代码和修订版ID
// 0x9008
typedef union tagMeepCcrRid
{
    // Define the struct Bits
    struct
    {
        UINT32    revision_identification  : 8   ; // [7..0] 修订版ID
        UINT32    Reserved_165          : 8   ; // [15..8] 保留
        UINT32    sub_class             : 8   ; // [23..16] 子类代码，在NTB模式下，该寄存器的值硬连线到0x80h表示“其它类型桥设备”
        UINT32    baseclass             : 8   ; // [31..24] 类代码，桥设备，硬连线到0x06
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_CCR_RID_U;

// Define the union PCIE_MEEP_PBAR01_BASE_LOWER_U
// 基地址寄存器01低32位
// 0x9010
typedef union tagMeepPbar01BaseLower
{
    // Define the struct Bits
    struct
    {
        UINT32    BAR01_Space_Inicator  : 1   ; // [0] 0 =BAR0 is a memory BAR1 =BAR0 is an I/O BARNTB只支持Memory空间，不支持IO空间
        UINT32    BAR01_Type            : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    BAR01_Prefetchable    : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_166          : 13  ; // [16..4] 保留位
        UINT32    base_address_register_01_lower  : 15  ; // [31..17] BAR01基地址低位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PBAR01_BASE_LOWER_U;

// Define the union PCIE_MEEP_PBAR23_BASE_LOWER_U
// 基地址寄存器23低32位
// 0x9018
typedef union tagMeepPbar23BaseLower
{
    // Define the struct Bits
    struct
    {
        UINT32    BAR23_Space_Inicator  : 1   ; // [0] 0 =BAR0 is a memory BAR1 =BAR0 is an I/O BAR
        UINT32    BAR23_Type            : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    BAR23_Prefetchable    : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_168          : 8   ; // [11..4] 保留位
        UINT32    Base_Address_Register_23_Lower  : 20  ; // [31..12] BAR23基地址低位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PBAR23_BASE_LOWER_U;

// Define the union PCIE_MEEP_PBAR45_BASE_LOWER_U
// 基地址寄存器45高32位
// 0x9020
typedef union tagMeepPbar45BaseLower
{
    // Define the struct Bits
    struct
    {
        UINT32    BAR45_Space_Inicator  : 1   ; // [0] 0 =BAR0 is a memory BAR1 =BAR0 is an I/O BAR
        UINT32    BAR45_Type            : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    BAR45_Prefetchable    : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_169          : 8   ; // [11..4] 保留位
        UINT32    Base_Address_Register_45_Lower  : 20  ; // [31..12] BAR45基地址低位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PBAR45_BASE_LOWER_U;

// Define the union PCIE_MEEP_SubSystemId_U
// 子系统Vendor ID
// 0x902C
typedef union tagMeepSubsystemid
{
    // Define the struct Bits
    struct
    {
        UINT32    SubsystemID           : 16  ; // [15..0] 子系统ID
        UINT32    SubsystemVendorID     : 16  ; // [31..16] 子系统Vendor ID
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_SubSystemId_U;

// Define the union PCIE_MEEP_CapPtr_U
// 功能指针
// 0x9034
typedef union tagMeepCapptr
{
    // Define the struct Bits
    struct
    {
        UINT32    CapPtr                : 8   ; // [7..0] 功能指针，指向功能MSI
        UINT32    Reserved_172          : 24  ; // [31..8] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_CapPtr_U;

// Define the union PCIE_MEEP_Interrupt_U
// 中断引脚，中断线
// 0x903C
typedef union tagMeepInterrupt
{
    // Define the struct Bits
    struct
    {
        UINT32    Interrupt_Line        : 8   ; // [7..0] 中断线寄存器，该寄存器保留仅仅是为了荷PCI兼容
        UINT32    interrupt_pin         : 8   ; // [15..8] 中断引脚寄存器，NTB Primary侧不支持对RC发送INTx中断
        UINT32    min_grant             : 8   ; // [23..16] 硬连线为0
        UINT32    Max_Latency           : 8   ; // [31..24] 硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_Interrupt_U;

// Define the union PCIE_MEEP_MSI_Capability_Register_U
// MSI功能寄存器
// 0x9050
typedef union tagMeepMsiCapabilityRegister
{
    // Define the struct Bits
    struct
    {
        UINT32    CapabilityID          : 8   ; // [7..0] 功能ID，对于MSI，硬连线0x05，只读
        UINT32    Next_Capability_Pointer  : 8   ; // [15..8] 下一个功能指针
        UINT32    MSI_Enabled           : 1   ; // [16] MSI使能
        UINT32    Multiple_Message_Capable  : 3   ; // [19..17] 多种Message功能使能3'b001表示NTB Primary侧能产生1个MSI中断向量，在NTB的应用中，MSI仅仅用于doorbell发送中断
        UINT32    Multiple_Message_Enabled  : 3   ; // [22..20] 多种Message功能使能
        UINT32    MSI_64_EN             : 1   ; // [23] 支持64位地址功能
        UINT32    PVM_EN                : 1   ; // [24] 设备是否支持Per Vector Masking功能1'b0: 不支持1'b1: 支持
        UINT32    Message_Control_Register  : 7   ; // [31..25] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_MSI_Capability_Register_U;

// Define the union PCIE_MEEP_MSI_Lower32_bitAddress_U
// MSI低32位地址寄存器
// 0x9054
typedef union tagMeepMsiLower32Bitaddress
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_175          : 2   ; // [1..0] 保留
        UINT32    Lower32_bitAddress    : 30  ; // [31..2] MSI低32位地址
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_MSI_Lower32_bitAddress_U;

// Define the union PCIE_MEEP_MSI_Data_U
// MSI数据
// 0x905C
typedef union tagMeepMsiData
{
    // Define the struct Bits
    struct
    {
        UINT32    MSI_Data              : 16  ; // [15..0] MSI数据
        UINT32    Reserved_176          : 16  ; // [31..16] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_MSI_Data_U;

// Define the union PCIE_MEEP_MSI_MASK_U
// MSI屏蔽寄存器
// 0x9060
typedef union tagMeepMsiMask
{
    // Define the struct Bits
    struct
    {
        UINT32    MsiMask               : 1   ; // [0] 屏蔽MSI中断
        UINT32    Reserved_177          : 31  ; // [31..1] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_MSI_MASK_U;

// Define the union PCIE_MEEP_MSI_Pending_U
// MSI状态寄存器
// 0x9064
typedef union tagMeepMsiPending
{
    // Define the struct Bits
    struct
    {
        UINT32    MsiPending            : 1   ; // [0] MSI中断状态标志位
        UINT32    Reserved_178          : 31  ; // [31..1] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_MSI_Pending_U;

// Define the union PCIE_MEEP_PCIE_Capability_Register_U
// PCIe功能寄存器组
// 0x9070
typedef union tagMeepPcieCapabilityRegister
{
    // Define the struct Bits
    struct
    {
        UINT32    Capability_ID         : 8   ; // [7..0] 功能ID，硬连线0x10，表示PCI Express功能，只读
        UINT32    Next_Capability_Pointer  : 8   ; // [15..8] 下一个功能指针
        UINT32    PCIE_Capability_Version  : 4   ; // [19..16] 功能版本
        UINT32    Device_Port_Type      : 4   ; // [23..20] 设备端口类型，0000传统的PCIe EP
        UINT32    Slot_Implemented      : 1   ; // [24] 插槽实现，设置时标志该根端口将连接到附加卡插槽上，不支持，硬连线为0
        UINT32    Interrupt_Message_Number  : 5   ; // [29..25] 中断消息数目，MSI只支持一个中断向量，所以该值为0
        UINT32    Reserved_179          : 2   ; // [31..30] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_PCIE_Capability_Register_U;

// Define the union PCIE_MEEP_Device_Capabilities_Register_U
// 设备功能寄存器
// 0x9074
typedef union tagMeepDeviceCapabilitiesRegister
{
    // Define the struct Bits
    struct
    {
        UINT32    Max_Payload_Size_Supported  : 3   ; // [2..0] 支持最大payload 为512Byte
        UINT32    Phantom_Function_Supported  : 2   ; // [4..3] 仿真器功能支持，硬连线0
        UINT32    Extended_TagField_Supported  : 1   ; // [5] 拓展标记字段支持，支持最大outstanding的深度为32
        UINT32    Endpoint_L0sAcceptable_Latency  : 3   ; // [8..6] 端点L0可接受的延时，不支持，硬连线为0
        UINT32    Endpoint_L1Acceptable_Latency  : 3   ; // [11..9] 端点L1可接受的延时，不支持，硬连线为0
        UINT32    Undefined             : 3   ; // [14..12] 保留
        UINT32    Reserved_182          : 3   ; // [17..15] 保留
        UINT32    Captured_Slot_Power_Limit_Value  : 8   ; // [25..18] 捕获的插槽功率极限值，硬连线0x0，只读
        UINT32    Captured_Slot_Power_Limit_Scale  : 2   ; // [27..26] 捕获的插槽功率极限因子，硬连线0x0，只读
        UINT32    Function_Level_Reset  : 1   ; // [28] Function级的复位，NTB不支持该功能
        UINT32    Reserved_181          : 3   ; // [31..29] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_Device_Capabilities_Register_U;

// Define the union PCIE_MEEP_Device_Status_Register_U
// 设备状况和控制寄存器
// 0x9078
typedef union tagMeepDeviceStatusRegister
{
    // Define the struct Bits
    struct
    {
        UINT32    Correctable_Error_Reporting_Enable  : 1   ; // [0] 可修正错误报告启用
        UINT32    Non_Fatal_Error_Reporting_Enable  : 1   ; // [1] 非致命错误报告启用
        UINT32    Fatal_Error_Reporting_Enable  : 1   ; // [2] 致命错误报告启用
        UINT32    UREnable              : 1   ; // [3] UR错误报告启用
        UINT32    Enable_Relaxed_Ordering  : 1   ; // [4] 启用灵活的顺序，不支持，硬连线为0
        UINT32    Max_Payload_Size      : 3   ; // [7..5] 最大有效载荷
        UINT32    Extended_TagFieldEnable  : 1   ; // [8] 拓展标记字段允许，不支持，硬连线为0
        UINT32    Phantom_Function_Enable  : 1   ; // [9] 仿真功能允许，不支持，硬连线为0
        UINT32    AUXPowerPMEnable      : 1   ; // [10] 辅助电源使能，不支持，硬连线为0
        UINT32    EnableNoSnoop         : 1   ; // [11] 启用无侦测，不支持，硬连线为0
        UINT32    Max_Read_Request_Size  : 3   ; // [14..12] 最大读请求大小，NTB不支持
        UINT32    Reserved_184          : 1   ; // [15] 保留
        UINT32    CorrectableErrorDetected  : 1   ; // [16] 可修正错误检测
        UINT32    Non_FatalErrordetected  : 1   ; // [17] 非致命错误检测
        UINT32    FatalErrorDetected    : 1   ; // [18] 致命错误检测
        UINT32    UnsupportedRequestDetected  : 1   ; // [19] UR检测
        UINT32    AuxPowerDetected      : 1   ; // [20] 辅助电源检测，不支持，硬连线为0
        UINT32    TransactionPending    : 1   ; // [21] 事务待决，不支持，硬连线为0
        UINT32    Reserved_183          : 10  ; // [31..22] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_Device_Status_Register_U;

// Define the union PCIE_MEEP_Link_Capability_U
// 链路功能寄存器
// 0x907C
typedef union tagMeepLinkCapability
{
    // Define the struct Bits
    struct
    {
        UINT32    Max_Link_Speed        : 4   ; // [3..0] 支持的最大链接速度4'b0001 : 2.5GT/s4'b0010 : 5GT/s4'b0011 : 8GT/s其它值不支持
        UINT32    Max_Link_Width        : 6   ; // [9..4] 支持最大链路宽度，支持最大X8 lane
        UINT32    Active_State_Power_Management  : 2   ; // [11..10] 活动状态电源管理，NTB不支持
        UINT32    L0s_ExitLatency       : 3   ; // [14..12] 保留，NTB不支持
        UINT32    L1_Exit_Latency       : 3   ; // [17..15] 保留，NTB不支持
        UINT32    Clock_Power_Management  : 1   ; // [18] 保留，NTB不支持
        UINT32    Surprise_Down_Error_Report_Cap  : 1   ; // [19] 保留,NTB不支持
        UINT32    Data_Link_Layer_Active_Report_Cap  : 1   ; // [20] 保留,NTB不支持
        UINT32    Link_Bandwidth_Noti_Cap  : 1   ; // [21] 保留,NTB不支持
        UINT32    ASPM_Option_Compliance  : 1   ; // [22] 根据PCIe Spec，固定为1
        UINT32    Reserved_185          : 1   ; // [23] 固定为1
        UINT32    Port_Number           : 8   ; // [31..24] NTB端口号
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_Link_Capability_U;

// Define the union PCIE_MEEP_Link_Control_Status_U
// 链路控制和状况寄存器
// 0x9080
typedef union tagMeepLinkControlStatus
{
    // Define the struct Bits
    struct
    {
        UINT32    active_state_power_management  : 2   ; // [1..0] 保留
        UINT32    Reserved_188          : 1   ; // [2] 0表示能返回64B边界的完成报文
        UINT32    rcb                   : 1   ; // [3] NTB模式下不支持，硬连线到0
        UINT32    link_disable          : 1   ; // [4] NTB模式下不支持，硬连线到0
        UINT32    retrain_link          : 1   ; // [5] NTB模式下不支持，硬连线到0
        UINT32    common_clock_config   : 1   ; // [6] NTB模式下不支持，硬连线到0
        UINT32    extended_sync         : 1   ; // [7] NTB模式下不支持，硬连线到0
        UINT32    enable_clock_pwr_management  : 1   ; // [8] NTB模式下不支持，硬连线到0
        UINT32    hw_auto_width_disable  : 1   ; // [9] NTB模式下不支持，硬连线到0
        UINT32    link_bandwidth_management_int_en  : 1   ; // [10] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_int_en  : 1   ; // [11] 保留
        UINT32    Reserved_187          : 4   ; // [15..12] 4'b0001 : 2.5Gbps4'b0010 : 5Gbps4'b0011 : 8Gbps其它值:保留当链路没有建立的时候，该无意义
        UINT32    current_link_speed    : 4   ; // [19..16] 协商的链路宽度，可能值为x1/x2/x4/x8
        UINT32    negotiated_link_width  : 6   ; // [25..20] 保留位
        UINT32    Reserved_186          : 1   ; // [26] 链路协商正在进行的状态
        UINT32    link_training         : 1   ; // [27] 表示设备是否使用连接器上提供的参考物理时钟
        UINT32    slot_clock_configration  : 1   ; // [28] 链路层的活动状态
        UINT32    data_link_layer_active  : 1   ; // [29] NTB模式下不支持，硬连线到0
        UINT32    link_bandwidth_management_status  : 1   ; // [30] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_status  : 1   ; // [31] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_Link_Control_Status_U;

// Define the union PCIE_MEEP_AER_Cap_header_U
// AER功能寄存器头
// 0x9100
typedef union tagMeepAerCapHeader
{
    // Define the struct Bits
    struct
    {
        UINT32    PCIE_Extended_Capability_ID  : 16  ; // [15..0] PCIe功能ID
        UINT32    Capability_Version    : 4   ; // [19..16] 功能版本号
        UINT32    Next_Capability_Offset  : 12  ; // [31..20] 下一个功能地址偏移
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AER_Cap_header_U;

// Define the union PCIE_MEEP_UC_Error_Status_U
// 不可修正错误状况寄存器
// 0x9104
typedef union tagMeepUcErrorStatus
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_193          : 1   ; // [0] 保留
        UINT32    Reserved_192          : 3   ; // [3..1] 保留
        UINT32    DataLinkProtocolErrorStatus  : 1   ; // [4] 数据链路层协议错误状况，不支持，硬连线为0
        UINT32    SurpriseDownErrorStatus  : 1   ; // [5] 意外链路断开错误状况，不支持，硬连线为0
        UINT32    Reserved_191          : 6   ; // [11..6] 保留
        UINT32    PoisonedTLPStatus     : 1   ; // [12] 中毒TLP错误状况
        UINT32    FlowControlProtocolErrorStatus  : 1   ; // [13] 不支持，硬连线为0
        UINT32    CompletionTimeoutStatus  : 1   ; // [14] 完成超时错误状况，不支持，硬连线为0
        UINT32    CompleterAbortStatus  : 1   ; // [15] 完成者异常结束错误状况，不支持，硬连线为0
        UINT32    UnexpectedCompletionStatus  : 1   ; // [16] 非预期的完成错误状况，不支持，硬连线为0
        UINT32    ReceiverOverflowStatus  : 1   ; // [17] 接收器溢出错误状况，不支持，硬连线为0
        UINT32    MalformedTLPStatus    : 1   ; // [18] 畸形TLP错误状况
        UINT32    ECRCErrorStatus       : 1   ; // [19] ECRC错误状况，不支持，硬连线为0
        UINT32    UnsupportedRequestErrorStatus  : 1   ; // [20] 不支持请求错误状况
        UINT32    Reserved_190          : 11  ; // [31..21] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_UC_Error_Status_U;

// Define the union PCIE_MEEP_UC_Error_Mask_U
// 不可修正错误屏蔽寄存器
// 0x9108
typedef union tagMeepUcErrorMask
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_197          : 1   ; // [0] 保留
        UINT32    Reserved_196          : 3   ; // [3..1] 保留
        UINT32    DataLinkProtocolErrorMask  : 1   ; // [4] 数据链路层协议错误，不支持，硬连线为0
        UINT32    SurpriseDownErrorMask  : 1   ; // [5] 意外链路断开错误屏蔽，不支持，硬连线为0
        UINT32    Reserved_195          : 6   ; // [11..6] 保留
        UINT32    PoisonedTLPMask       : 1   ; // [12] 中毒TLP错误屏蔽
        UINT32    FlowControlProtocolErrorMask  : 1   ; // [13] 不支持，硬连线为0
        UINT32    CompletionTimeoutMask  : 1   ; // [14] 完成超时错误屏蔽，不支持，硬连线为0
        UINT32    CompleterAbortMask    : 1   ; // [15] 完成者异常结束错误屏蔽，不支持，硬连线为0
        UINT32    UnexpectedCompletionMask  : 1   ; // [16] 非预期的完成错误屏蔽，不支持，硬连线为0
        UINT32    ReceiverOverflowMask  : 1   ; // [17] 接收器溢出错误屏蔽，不支持，硬连线为0
        UINT32    MalformedTLPMask      : 1   ; // [18] 畸形TLP错误屏蔽
        UINT32    ECRCErrorMask         : 1   ; // [19] ECRC错误屏蔽，不支持，硬连线为0
        UINT32    UnsupportedRequestErrorMask  : 1   ; // [20] 不支持请求错误屏蔽
        UINT32    Reserved_194          : 11  ; // [31..21] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_UC_Error_Mask_U;

// Define the union PCIE_MEEP_UC_Error_Severity_U
// 不可修正错误严重程度寄存器
// 0x910C
typedef union tagMeepUcErrorSeverity
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_201          : 1   ; // [0] 保留
        UINT32    Reserved_200          : 3   ; // [3..1] 保留
        UINT32    DataLinkProtocolErrorSeverity  : 1   ; // [4] 数据链路层协议错误严重程度，不支持
        UINT32    SurpriseDownErrorSeverity  : 1   ; // [5] 意外链路断开错误严重程度，不支持，硬连线为0
        UINT32    Reserved_199          : 6   ; // [11..6] 保留
        UINT32    PoisonedTLPSeverity   : 1   ; // [12] 中毒TLP的严重程度
        UINT32    FlowControlProtocolErrorSeverity  : 1   ; // [13] 不支持
        UINT32    CompletionTimeoutSeverity  : 1   ; // [14] 完成超时严重程度，不支持
        UINT32    CompleterAbortSeverity  : 1   ; // [15] 完成者异常结束严重程度，不支持，硬连线为0
        UINT32    UnexpectedCompletionSeverity  : 1   ; // [16] 非预期的完成严重程度，不支持，硬连线为0
        UINT32    ReceiverOverflowSeverity  : 1   ; // [17] 接收器溢出严重程度，不支持，硬连线为0
        UINT32    MalformedTLPSeverity  : 1   ; // [18] 畸形TLP的严重程度
        UINT32    ECRCErrorSeverity     : 1   ; // [19] ECRC错误的严重程度，不支持，硬连线为0
        UINT32    UnsupportedRequestErrorSeverity  : 1   ; // [20] 不支持请求错误的严重程度
        UINT32    Reserved_198          : 11  ; // [31..21] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_UC_Error_Severity_U;

// Define the union PCIE_MEEP_C_Error_Status_U
// 可修正错误状况寄存器
// 0x9110
typedef union tagMeepCErrorStatus
{
    // Define the struct Bits
    struct
    {
        UINT32    Receiver_Error_Status  : 1   ; // [0] 接收器错误状态，不支持，硬连线为0
        UINT32    Reserved_204          : 5   ; // [5..1] 保留
        UINT32    Bad_TLP_Status        : 1   ; // [6] 坏的TLP状况
        UINT32    Bad_DLLP_Status       : 1   ; // [7] 不支持，硬连线为0
        UINT32    REPLAY_NUM_Rollover_Status  : 1   ; // [8] REPLAY_NUM反转情况,不支持，硬连线为0
        UINT32    Reserved_203          : 3   ; // [11..9] 保留
        UINT32    Replay_Timer_Timeout_Status  : 1   ; // [12] 重放定时器超时状况,不支持，为0
        UINT32    Advisory_Non_Fatal_Error_Status  : 1   ; // [13] 
        UINT32    Reserved_202          : 18  ; // [31..14] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_C_Error_Status_U;

// Define the union PCIE_MEEP_C_Error_Mask_U
// 可修正错误屏蔽寄存器
// 0x9114
typedef union tagMeepCErrorMask
{
    // Define the struct Bits
    struct
    {
        UINT32    Receiver_Error_Mask   : 1   ; // [0] 接收器错误状态屏蔽，不支持，硬连线为0
        UINT32    Reserved_207          : 5   ; // [5..1] 保留
        UINT32    Bad_TLP_Mask          : 1   ; // [6] 坏的TLP状况屏蔽
        UINT32    Bad_DLLP_Mask         : 1   ; // [7] 不支持，硬连线为0
        UINT32    REPLAY_NUMRollover_Mask  : 1   ; // [8] REPLAY_NUM反转情况屏蔽，不支持，硬连线为0
        UINT32    Reserved_206          : 3   ; // [11..9] 保留
        UINT32    Replay_Timer_Timeout_Mask  : 1   ; // [12] 重放定时器超时状况屏蔽，不支持，硬连线为0
        UINT32    Advisory_Non_Fatal_Error_Mask  : 1   ; // [13] 
        UINT32    Reserved_205          : 18  ; // [31..14] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_C_Error_Mask_U;

// Define the union PCIE_MEEP_Advanced_Error_Capabilities_and_Control_U
// AER 功能和控制寄存器
// 0x9118
typedef union tagMeepAdvancedErrorCapabilitiesAndControl
{
    // Define the struct Bits
    struct
    {
        UINT32    First_Error_Pointer   : 5   ; // [4..0] 第一个错误的指针
        UINT32    ECRC_Generation_Capability  : 1   ; // [5] 产生ECRC的功能，不支持，硬连线为0
        UINT32    ECRC_Generation_Enable  : 1   ; // [6] 产生ECRC的功能使能，不支持，硬连线为0
        UINT32    ECRC_Check_Capable    : 1   ; // [7] ECRC校验的功能，不支持，硬连线为0
        UINT32    ECRC_Check_Enable     : 1   ; // [8] ECRC校验的功能，不支持，硬连线为0
        UINT32    Reserved_209          : 2   ; // [10..9] 保留
        UINT32    TLP_Prefix_Log_Present  : 1   ; // [11] 存在TLP_Prefix_Log
        UINT32    Reserved_208          : 20  ; // [31..12] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_Advanced_Error_Capabilities_and_Control_U;

// Define the union PCIE_MEEP_NTB_IEP_BAR01_CTRL_U
// 映射到BAR01空间的TLP头控制寄存器
// 0x9708
typedef union tagMeepNtbIepBar01Ctrl
{
    // Define the struct Bits
    struct
    {
        UINT32    bar01_type            : 5   ; // [4..0] 当地址与BAR01的基地址匹配时，TLP头的TYPE字段将使用该字段
        UINT32    bar01_tc              : 3   ; // [7..5] 当地址与BAR01的基地址匹配时，TLP头的TC字段将使用该字段
        UINT32    bar01_td              : 1   ; // [8] 当地址与BAR01的基地址匹配时，TLP头的TD字段将使用该字段
        UINT32    bar01_attr            : 2   ; // [10..9] 当地址与BAR01的基地址匹配时，TLP头的ATTR字段将使用该字段
        UINT32    Reserved_213          : 5   ; // [15..11] 保留位
        UINT32    bar01_at              : 2   ; // [17..16] 当地址与BAR01的基地址匹配时，TLP头的AT字段将使用该字段
        UINT32    bar01_match_en        : 1   ; // [18] 当该比特置1时，Local CPU发出去的与BAR01基地址匹配的TLP头的相应字段将使用本寄存器定义的字段
        UINT32    Reserved_212          : 13  ; // [31..19] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_NTB_IEP_BAR01_CTRL_U;

// Define the union PCIE_MEEP_NTB_IEP_BAR23_CTRL_U
// 映射到BAR23空间的TLP头控制寄存器
// 0x970C
typedef union tagMeepNtbIepBar23Ctrl
{
    // Define the struct Bits
    struct
    {
        UINT32    bar23_type            : 5   ; // [4..0] 当地址与BAR23的基地址匹配时，TLP头的TYPE字段将使用该字段
        UINT32    bar23_tc              : 3   ; // [7..5] 当地址与BAR23的基地址匹配时，TLP头的TC字段将使用该字段
        UINT32    bar23_td              : 1   ; // [8] 当地址与BAR23的基地址匹配时，TLP头的TD字段将使用该字段
        UINT32    bar23_attr            : 2   ; // [10..9] 当地址与BAR23的基地址匹配时，TLP头的ATTR字段将使用该字段
        UINT32    Reserved_215          : 5   ; // [15..11] 保留位
        UINT32    bar23_at              : 2   ; // [17..16] 当地址与BAR23的基地址匹配时，TLP头的AT字段将使用该字段
        UINT32    bar23_match_en        : 1   ; // [18] 当该比特置1时，Local CPU发出去的与BAR23基地址匹配的TLP头的相应字段将使用本寄存器定义的字段
        UINT32    Reserved_214          : 13  ; // [31..19] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_NTB_IEP_BAR23_CTRL_U;

// Define the union PCIE_MEEP_NTB_IEP_BAR45_CTRL_U
// 映射到BAR45空间的TLP头控制寄存器
// 0x9710
typedef union tagMeepNtbIepBar45Ctrl
{
    // Define the struct Bits
    struct
    {
        UINT32    bar45_type            : 5   ; // [4..0] 当地址与BAR45的基地址匹配时，TLP头的TYPE字段将使用该字段
        UINT32    bar45_tc              : 3   ; // [7..5] 当地址与BAR45的基地址匹配时，TLP头的TC字段将使用该字段
        UINT32    bar45_td              : 1   ; // [8] 当地址与BAR45的基地址匹配时，TLP头的TD字段将使用该字段
        UINT32    bar45_attr            : 2   ; // [10..9] 当地址与BAR45的基地址匹配时，TLP头的ATTR字段将使用该字段
        UINT32    Reserved_217          : 5   ; // [15..11] 保留位
        UINT32    bar45_at              : 2   ; // [17..16] 当地址与BAR45的基地址匹配时，TLP头的AT字段将使用该字段
        UINT32    bar45_match_en        : 1   ; // [18] 当该比特置1时，Local CPU发出去的与BAR45基地址匹配的TLP头的相应字段将使用本寄存器定义的字段
        UINT32    Reserved_216          : 13  ; // [31..19] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_NTB_IEP_BAR45_CTRL_U;

// Define the union PCIE_MEEP_MSI_CTRL_INT_EN_U
// MSI Interrupt使能信号
// 0x971C
typedef union tagMeepMsiCtrlIntEn
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_int_en            : 1   ; // [0] MSI中断使能控制信号
        UINT32    Reserved_218          : 31  ; // [31..1] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_MSI_CTRL_INT_EN_U;

// Define the union PCIE_MEEP_MSI_CTRL_INT0_MASK_U
// MSI Interrupt屏蔽信号
// 0x9720
typedef union tagMeepMsiCtrlInt0Mask
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_int_mask          : 1   ; // [0] MSI中断屏蔽信号
        UINT32    Reserved_219          : 31  ; // [31..1] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_MSI_CTRL_INT0_MASK_U;

// Define the union PCIE_MEEP_MSI_CTRL_INT_STATUS_U
// MSI Interrupt状态标志
// 0x9724
typedef union tagMeepMsiCtrlIntStatus
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_int               : 1   ; // [0] 中断状态标志位
        UINT32    Reserved_220          : 31  ; // [31..1] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_MSI_CTRL_INT_STATUS_U;

// Define the union PCIE_MEEP_DBI_RO_WR_EN_U
// 写Read-Only控制寄存器
// 0x9728
typedef union tagMeepDbiRoWrEn
{
    // Define the struct Bits
    struct
    {
        UINT32    dbi_ro_wr_en          : 1   ; // [0] 写read-only寄存器使能控制信号
        UINT32    Reserved_221          : 31  ; // [31..1] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_DBI_RO_WR_EN_U;

// Define the union PCIE_MEEP_AXI_ERR_RESPONSE_U
// AXI总线ErrorResponse控制寄存器
// 0x972C
typedef union tagAxiErrResponse
{
    // Define the struct Bits
    struct
    {
        UINT32    err_resp_mode         : 4   ; // [3..0] AXI总线错误response控制信号
        UINT32    Reserved_222          : 28  ; // [31..4] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MEEP_AXI_ERR_RESPONSE_U;

/* NTB_iEP_MMIO 模块寄存器基地址 */


/******************************************************************************/
/*                      PhosphorV660 NTB_iEP_MMIO 寄存器定义                  */
/******************************************************************************/
#define PCIE_MIEP_PBAR23XLAT_LOWER_REG            (0x0)          /* PBAR23地址转换寄存器低32位 */
#define PCIE_MIEP_PBAR23XLAT_UPPER_REG            (0x4)          /* PBAR23地址转换寄存器高32位 */
#define PCIE_MIEP_PBAR45XLAT_LOWER_REG            (0x8)          /* PBAR45地址转换寄存器低32位 */
#define PCIE_MIEP_PBAR45XLAT_UPPER_REG            (0xC)          /* PBAR45地址转换寄存器高32位 */
#define PCIE_MIEP_PBAR23LMT_LOWER_REG             (0x10)         /* PBAR23的limit寄存器低32位 */
#define PCIE_MIEP_PBAR23LMT_UPPER_REG             (0x14)         /* PBAR23的limit寄存器高32位 */
#define PCIE_MIEP_PBAR45LMT_LOWER_REG             (0x18)         /* PBAR45的limit寄存器低32位 */
#define PCIE_MIEP_PBAR45LMT_UPPER_REG             (0x1C)         /* PBAR45的limit寄存器高32位 */
#define PCIE_MIEP_PDOORBELL_REG                   (0x20)         /* Primary侧的门铃寄存器 */
#define PCIE_MIEP_PDOORBELL_MASK_REG              (0x24)         /* Primary侧的门铃屏蔽寄存器 */
#define PCIE_MIEP_B2B_BAR01XLAT_LOWER_REG         (0x28)         /* B2B模式PBAR01地址转换寄存器低32位 */
#define PCIE_MIEP_B2B_BAR01XLAT_UPPER_REG         (0x2C)         /* B2B模式PBAR01地址转换寄存器高32位 */
#define PCIE_MIEP_B2BDOORBELL_REG                 (0x30)         /* B2B模式下的DOORBELL寄存器 */
#define PCIE_MIEP_SPAD0_REG                       (0x38)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD1_REG                       (0x3C)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD2_REG                       (0x40)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD3_REG                       (0x44)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD4_REG                       (0x48)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD5_REG                       (0x4C)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD6_REG                       (0x50)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD7_REG                       (0x54)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD8_REG                       (0x58)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD9_REG                       (0x5C)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD10_REG                      (0x60)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD11_REG                      (0x64)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD12_REG                      (0x68)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD13_REG                      (0x6C)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD14_REG                      (0x70)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD15_REG                      (0x74)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD16_REG                      (0x78)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD17_REG                      (0x7C)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD18_REG                      (0x80)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD19_REG                      (0x84)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD20_REG                      (0x88)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD21_REG                      (0x8C)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD22_REG                      (0x90)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD23_REG                      (0x94)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD24_REG                      (0x98)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD25_REG                      (0x9C)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD26_REG                      (0xA0)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD27_REG                      (0xA4)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD28_REG                      (0xA8)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD29_REG                      (0xAC)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD30_REG                      (0xB0)         /* 便签本寄存器 */
#define PCIE_MIEP_SPAD31_REG                      (0xB4)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD0_REG                    (0xB8)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD1_REG                    (0xBC)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD2_REG                    (0xC0)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD3_REG                    (0xC4)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD4_REG                    (0xC8)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD5_REG                    (0xCC)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD6_REG                    (0xD0)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD7_REG                    (0xD4)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD8_REG                    (0xD8)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD9_REG                    (0xDC)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD10_REG                   (0xE0)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD11_REG                   (0xE4)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD12_REG                   (0xE8)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD13_REG                   (0xEC)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD14_REG                   (0xF0)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD15_REG                   (0xF4)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD16_REG                   (0xF8)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD17_REG                   (0xFC)         /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD18_REG                   (0x100)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD19_REG                   (0x104)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD20_REG                   (0x108)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD21_REG                   (0x10C)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD22_REG                   (0x110)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD23_REG                   (0x114)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD24_REG                   (0x118)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD25_REG                   (0x11C)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD26_REG                   (0x120)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD27_REG                   (0x124)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD28_REG                   (0x128)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD29_REG                   (0x12C)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD30_REG                   (0x130)        /* 便签本寄存器 */
#define PCIE_MIEP_B2BSPAD31_REG                   (0x134)        /* 便签本寄存器 */
#define PCIE_MIEP_PPD_REG                         (0x138)        /* 端口定义寄存器 */
#define PCIE_MIEP_P_DEVICE_VENDOR_ID_REG          (0x1000)       /* 设备ID和厂商ID */
#define PCIE_MIEP_P_PCISTS_PCICMD_REG             (0x1004)       /* 控制和状况寄存器 */
#define PCIE_MIEP_P_CCR_RID_REG                   (0x1008)       /* 类代码和修订版ID */
#define PCIE_MIEP_P_BIST_TYPE_REG                 (0x100C)       /* BIST，配置头格式寄存器 */
#define PCIE_MIEP_PBAR01_BASE_LOWER_REG           (0x1010)       /* 基地址寄存器01低32位 */
#define PCIE_MIEP_PBAR01_BASE_UPPER_REG           (0x1014)       /* 基地址寄存器01高32位 */
#define PCIE_MIEP_PBAR23_BASE_LOWER_REG           (0x1018)       /* 基地址寄存器23低32位 */
#define PCIE_MIEP_PBAR23_BASE_UPPER_REG           (0x101C)       /* 基地址寄存器23低32位 */
#define PCIE_MIEP_PBAR45_BASE_LOWER_REG           (0x1020)       /* 基地址寄存器45高32位 */
#define PCIE_MIEP_PBAR45_BASE_UPPER_REG           (0x1024)       /* 基地址寄存器45高32位 */
#define PCIE_MIEP_P_SUBSYSTEMID_REG               (0x102C)       /* 子系统Vendor ID */
#define PCIE_MIEP_P_INTERRUPT_REG                 (0x103C)       /* 中断引脚，中断线 */
#define PCIE_MIEP_P_MSI_LOWER32_BITADDRESS_REG    (0x1054)       /* MSI低32位地址寄存器 */
#define PCIE_MIEP_P_MSI_UPPER32_BIT_ADDRESS_REG   (0x1058)       /* MSI高32位地址寄存器 */
#define PCIE_MIEP_P_LINK_CAPABILITY_REG           (0x107C)       /* 链路功能寄存器 */
#define PCIE_MIEP_P_AER_CAP_HEADER_REG            (0x1100)       /* AER功能寄存器头 */
#define PCIE_MIEP_P_HEADER_LOG_REGISTERS_1_REG    (0x111C)       /* 头日志寄存器1 */
#define PCIE_MIEP_P_HEADER_LOG_REGISTERS_2_REG    (0x1120)       /* 头日志寄存器2 */
#define PCIE_MIEP_P_HEADER_LOG_REGISTERS_3_REG    (0x1124)       /* 头日志寄存器3 */
#define PCIE_MIEP_P_HEADER_LOG_REGISTERS_4_REG    (0x1128)       /* 头日志寄存器4 */
#define PCIE_MIEP_P_TLP_PREFIX_LOGREGISTERS_1_REG  (0x1130)       /* TLP前缀日志寄存器1 */
#define PCIE_MIEP_P_TLP_PREFIX_LOGREGISTERS_2_REG  (0x1134)       /* TLP前缀日志寄存器2 */
#define PCIE_MIEP_P_TLP_PREFIX_LOGREGISTERS_3_REG  (0x1138)       /* TLP前缀日志寄存器3 */
#define PCIE_MIEP_P_TLP_PREFIX_LOGREGISTERS_4_REG  (0x113C)       /* TLP前缀日志寄存器4 */
#define PCIE_MIEP_P_NTB_IEP_CONFIG_SPACE_LOWER_REG  (0x1700)       /* iEP配置空间低32位地址 */
#define PCIE_MIEP_P_NTB_IEP_CONFIG_SPACE_UPPER_REG  (0x1704)       /* iEP配置空间低32位地址 */
#define PCIE_MIEP_P_MSI_CTRL_ADDRESS_LOWER_REG    (0x1714)       /* MSI控制器低32位地址 */
#define PCIE_MIEP_P_MSI_CTRL_ADDRESS_UPPER_REG    (0x1718)       /* MSI控制器低32位地址 */
#define PCIE_MIEP_SBAR23XLAT_LOWER_REG            (0x8000)       /* SBAR23地址转换寄存器低32位 */
#define PCIE_MIEP_SBAR23XLAT_UPPER_REG            (0x8004)       /* SBAR23地址转换寄存器高32位 */
#define PCIE_MIEP_SBAR45XLAT_LOWER_REG            (0x8008)       /* SBAR45地址转换寄存器低32位 */
#define PCIE_MIEP_SBAR45XLAT_UPPER_REG            (0x800C)       /* SBAR45地址转换寄存器高32位 */
#define PCIE_MIEP_SBAR23LMT_LOWER_REG             (0x8010)       /* SBAR23的limit寄存器低32位 */
#define PCIE_MIEP_SBAR23LMT_UPPER_REG             (0x8014)       /* SBAR23的limit寄存器高32位 */
#define PCIE_MIEP_SBAR45LMT_LOWER_REG             (0x8018)       /* SBAR45的limit寄存器低32位 */
#define PCIE_MIEP_SBAR45LMT_UPPER_REG             (0x801C)       /* SBAR45的limit寄存器高32位 */
#define PCIE_MIEP_SDOORBELL_REG                   (0x8020)       /* Secondary侧的门铃寄存器 */
#define PCIE_MIEP_SDOORBELL_MASK_REG              (0x8024)       /* Secondary侧的门铃屏蔽寄存器 */
#define PCIE_MIEP_CBDF_SBDF_REG                   (0x8028)       /* Secondary侧的BDF */
#define PCIE_MIEP_PCI_CFG_HDR0_REG                (0x9000)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MIEP_PCI_CFG_HDR1_REG                (0x9004)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MIEP_PCI_CFG_HDR9_REG                (0x9024)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MIEP_PCI_CFG_HDR10_REG               (0x9028)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MIEP_PCI_CFG_HDR11_REG               (0x902C)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MIEP_PCI_CFG_HDR12_REG               (0x9030)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MIEP_PCI_CFG_HDR13_REG               (0x9034)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MIEP_PCI_CFG_HDR14_REG               (0x9038)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MIEP_PCI_CFG_HDR15_REG               (0x903C)       /* PCI兼容配置头空间寄存器 */
#define PCIE_MIEP_PCI_PM_CAP0_REG                 (0x9040)       /* PCI电源管理功能寄存器 */
#define PCIE_MIEP_PCI_PM_CAP1_REG                 (0x9044)       /* PCI电源管理功能寄存器 */
#define PCIE_MIEP_PCI_MSI_CAP0_REG                (0x9050)       /* PCI MSI功能寄存器 */
#define PCIE_MIEP_PCI_MSI_CAP1_REG                (0x9054)       /* PCI MSI功能寄存器 */
#define PCIE_MIEP_PCI_MSI_CAP2_REG                (0x9058)       /* PCI MSI功能寄存器 */
#define PCIE_MIEP_PCI_MSI_CAP3_REG                (0x905C)       /* PCI MSI功能寄存器 */
#define PCIE_MIEP_PCIE_CAP0_REG                   (0x9070)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP1_REG                   (0x9074)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP2_REG                   (0x9078)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP3_REG                   (0x907C)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP4_REG                   (0x9080)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP5_REG                   (0x9084)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP6_REG                   (0x9088)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP7_REG                   (0x908C)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP8_REG                   (0x9090)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP9_REG                   (0x9094)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP10_REG                  (0x9098)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP11_REG                  (0x909C)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_PCIE_CAP12_REG                  (0x90A0)       /* PCI Express功能寄存器 */
#define PCIE_MIEP_SLOT_CAP_REG                    (0x90C0)       /* Slot Numbering功能寄存器 */
#define PCIE_MIEP_AER_CAP0_REG                    (0x9100)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP1_REG                    (0x9104)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP2_REG                    (0x9108)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP3_REG                    (0x910C)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP4_REG                    (0x9110)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP5_REG                    (0x9114)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP6_REG                    (0x9118)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP7_REG                    (0x911C)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP8_REG                    (0x9120)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP9_REG                    (0x9124)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP10_REG                   (0x9128)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP11_REG                   (0x912C)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP12_REG                   (0x9130)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_AER_CAP13_REG                   (0x9134)       /* 高级错误报告寄存器 */
#define PCIE_MIEP_VC_CAP0_REG                     (0x9140)       /* 虚拟通道功能寄存器 */
#define PCIE_MIEP_VC_CAP1_REG                     (0x9144)       /* 虚拟通道功能寄存器 */
#define PCIE_MIEP_VC_CAP2_REG                     (0x9148)       /* 虚拟通道功能寄存器 */
#define PCIE_MIEP_VC_CAP3_REG                     (0x914C)       /* 虚拟通道功能寄存器 */
#define PCIE_MIEP_VC_CAP4_REG                     (0x9150)       /* 虚拟通道功能寄存器 */
#define PCIE_MIEP_VC_CAP5_REG                     (0x9154)       /* 虚拟通道功能寄存器 */
#define PCIE_MIEP_VC_CAP6_REG                     (0x9158)       /* 虚拟通道功能寄存器 */
#define PCIE_MIEP_VC_CAP7_REG                     (0x915C)       /* 虚拟通道功能寄存器 */
#define PCIE_MIEP_VC_CAP8_REG                     (0x9160)       /* 虚拟通道功能寄存器 */
#define PCIE_MIEP_VC_CAP9_REG                     (0x9164)       /* 虚拟通道功能寄存器 */
#define PCIE_MIEP_PORT_LOGIC0_REG                 (0x9700)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC1_REG                 (0x9704)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC2_REG                 (0x9708)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC3_REG                 (0x970C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC4_REG                 (0x9710)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC5_REG                 (0x9714)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC6_REG                 (0x9718)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC7_REG                 (0x971C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC8_REG                 (0x9720)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC9_REG                 (0x9724)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC10_REG                (0x9728)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC11_REG                (0x972C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC12_REG                (0x9730)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC13_REG                (0x9734)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC14_REG                (0x9738)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC15_REG                (0x973C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC16_REG                (0x9748)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC17_REG                (0x974C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC18_REG                (0x9750)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC19_REG                (0x97A8)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC20_REG                (0x97AC)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC21_REG                (0x97B0)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORT_LOGIC22_REG                (0x980C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC23_REG                 (0x9810)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC24_REG                 (0x9814)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC25_REG                 (0x9818)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC26_REG                 (0x981C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC27_REG                 (0x9820)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC28_REG                 (0x9824)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC29_REG                 (0x9828)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC30_REG                 (0x982C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC31_REG                 (0x9830)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC32_REG                 (0x9834)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC33_REG                 (0x9838)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC34_REG                 (0x983C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC35_REG                 (0x9840)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC36_REG                 (0x9844)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC37_REG                 (0x9848)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC38_REG                 (0x984C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC39_REG                 (0x9850)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC40_REG                 (0x9854)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC41_REG                 (0x9858)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC42_REG                 (0x985C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC43_REG                 (0x9860)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC44_REG                 (0x9864)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC45_REG                 (0x9868)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC46_REG                 (0x986C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC47_REG                 (0x9870)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC48_REG                 (0x9874)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC49_REG                 (0x9878)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC50_REG                 (0x987C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC51_REG                 (0x9880)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC52_REG                 (0x9884)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC53_REG                 (0x9888)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC54_REG                 (0x9900)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC55_REG                 (0x9904)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC56_REG                 (0x9908)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC57_REG                 (0x990C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC58_REG                 (0x9910)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC59_REG                 (0x9914)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC60_REG                 (0x9918)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC61_REG                 (0x991C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC62_REG                 (0x997C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC63_REG                 (0x9980)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC64_REG                 (0x999C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC65_REG                 (0x99A0)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC66_REG                 (0x99BC)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC67_REG                 (0x99C4)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC68_REG                 (0x99C8)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC69_REG                 (0x99CC)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC70_REG                 (0x99D0)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC71_REG                 (0x99D4)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC72_REG                 (0x99D8)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC73_REG                 (0x99DC)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC74_REG                 (0x99E0)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC75_REG                 (0x9A00)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC76_REG                 (0x9A10)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC77_REG                 (0x9A18)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC78_REG                 (0x9A1C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC79_REG                 (0x9A24)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC80_REG                 (0x9A28)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC81_REG                 (0x9A34)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC82_REG                 (0x9A3C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC83_REG                 (0x9A40)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC84_REG                 (0x9A44)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC85_REG                 (0x9A48)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC86_REG                 (0x9A6C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC87_REG                 (0x9A70)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC88_REG                 (0x9A78)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC89_REG                 (0x9A7C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC90_REG                 (0x9A80)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC91_REG                 (0x9A84)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC92_REG                 (0x9A88)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC93_REG                 (0x9A8C)       /* 端口逻辑寄存器 */
#define PCIE_MIEP_PORTLOGIC94_REG                 (0x9A90)       /* 端口逻辑寄存器 */

// Define the union PCIE_MIEP_PBAR23XLAT_LOWER_U
// PBAR23地址转换寄存器低32位
// 0x0
typedef union tagMiepPbar23xlatLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_0            : 12  ; // [11..0] 保留
        UINT32    pbar23_xlat_lower     : 20  ; // [31..12] PBAR23地址转换寄存器低32位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PBAR23XLAT_LOWER_U;

// Define the union PCIE_MIEP_PBAR45XLAT_LOWER_U
// PBAR45地址转换寄存器低32位
// 0x8
typedef union tagMiepPbar45xlatLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_1            : 12  ; // [11..0] 保留
        UINT32    pbar45_xlat_lower     : 20  ; // [31..12] PBAR45地址转换寄存器低32位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PBAR45XLAT_LOWER_U;

// Define the union PCIE_MIEP_PBAR23LMT_LOWER_U
// PBAR23的limit寄存器低32位
// 0x10
typedef union tagMiepPbar23lmtLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_2            : 12  ; // [11..0] 保留
        UINT32    pbar23_limit_lower    : 20  ; // [31..12] BAR23 limit寄存器的低32位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PBAR23LMT_LOWER_U;

// Define the union PCIE_MIEP_PBAR45LMT_LOWER_U
// PBAR45的limit寄存器低32位
// 0x18
typedef union tagMiepPbar45lmtLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_3            : 12  ; // [11..0] 保留
        UINT32    pbar45_limit_lower    : 20  ; // [31..12] BAR45 limit寄存器的低32位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PBAR45LMT_LOWER_U;

// Define the union PCIE_MIEP_B2B_BAR01XLAT_LOWER_U
// B2B模式PBAR01地址转换寄存器低32位
// 0x28
typedef union tagMiepB2bBar01xlatLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_4            : 17  ; // [16..0] 保留位
        UINT32    b2b_pbar01_xlat_lower  : 15  ; // [31..17] B2B模式下，PBAR01的地址转换寄存器低位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_B2B_BAR01XLAT_LOWER_U;

// Define the union PCIE_MIEP_PPD_U
// 端口定义寄存器
// 0x138
typedef union tagMiepPpd
{
    // Define the struct Bits
    struct
    {
        UINT32    port_def              : 1   ; // [0] NTB连接方式定义1'b0 : NTB-to-NTB模式1'b1 : NTB-to-RP模式
        UINT32    Reserved_6            : 31  ; // [31..1] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PPD_U;

// Define the union PCIE_MIEP_P_DEVICE_VENDOR_ID_U
// 设备ID和厂商ID
// 0x1000
typedef union tagMiepPDeviceVendorId
{
    // Define the struct Bits
    struct
    {
        UINT32    vendor_id             : 16  ; // [15..0] 厂商ID，华为分配到的Vendor ID号为0x19E5
        UINT32    device_id             : 16  ; // [31..16] 设备ID，以项目名作为Device ID号
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_P_DEVICE_VENDOR_ID_U;

// Define the union PCIE_MIEP_P_PCISTS_PCICMD_U
// 控制和状况寄存器
// 0x1004
typedef union tagMiepPPcistsPcicmd
{
    // Define the struct Bits
    struct
    {
        UINT32    io_space_enable       : 1   ; // [0] I/O Sapace Enable0：该设备不能响应I/O请求;1：该设备能够响应I/O请求。
        UINT32    memory_space_enable   : 1   ; // [1] Memory Space Enable0：该设备不能响应存储器请求;1：该设备能够响应存储器请求。
        UINT32    bus_master_enable     : 1   ; // [2] Bus Master Enable0：该设备不能作为主设备;1：该设备能够作为主设备。
        UINT32    specialcycleenable    : 1   ; // [3] Special Cycle Enalbe不适用于PCIe，硬连线为0
        UINT32    memory_write_and_invalidate  : 1   ; // [4] Memory Write and Invalidata不适用于PCIe，硬连线为0
        UINT32    vga_palette_snoop_enable  : 1   ; // [5] VGA Palette Snoop不适用于PCIe，硬连线为0
        UINT32    parity_error_response  : 1   ; // [6] Parity Error Response0：对奇偶校验错误不作出响应;1：对奇偶校验错误作出响应。
        UINT32    idsel_stepping_waitcycle_control  : 1   ; // [7] IDSEL Stepping/Wait Cycle Control不适用于PCIe，硬连线为0
        UINT32    serr_enable           : 1   ; // [8] SERR#信号使能0：可以使用SERR#信号;
        UINT32    fastback_to_backenable  : 1   ; // [9] Faster Back-to-Back Enaable不适用于PCIe，硬连线为0
        UINT32    interrupt_disable     : 1   ; // [10] INTx Assertion Disable0：允许使用INTx方式提交中断;1：禁用INTx方式提交中断。
        UINT32    Reserved_10           : 5   ; // [15..11] Reserved
        UINT32    Reserved_9            : 3   ; // [18..16] Reserved
        UINT32    intx_status           : 1   ; // [19] INTx Status0：设备未使用INTx方式向处理器提交了中断请求;1：设备使用INTx方式向处理器提交了中断请求。
        UINT32    capabilitieslist      : 1   ; // [20] Capabilities List指示Capability Pointer寄存器中的值有效，硬连线为1
        UINT32    pcibus66mhzcapable    : 1   ; // [21] 66MHz Capable不适用于PCIe，硬连线为0
        UINT32    Reserved_8            : 1   ; // [22] Reserved
        UINT32    fastback_to_back      : 1   ; // [23] Faster Back-to-Back Capable不适用于PCIe，硬连线为0
        UINT32    masterdataparityerror  : 1   ; // [24] Master Data Parity Error0：除置一条件满足之外的其他情况;1：PERR#信号有效，或者总线出现数据传输错误时，或者Command寄存器的Parity Error Response位为1时。
        UINT32    devsel_timing         : 2   ; // [26..25] DEVSEL Timing不适用于PCIe，硬连线为0
        UINT32    signaled_target_abort  : 1   ; // [27] Signaled Target Abort由PCI目标设备设置0：未发生目标设备夭折时序;1：发生目标设备夭折时序。
        UINT32    received_target_abort  : 1   ; // [28] Received Target Abort由PCI主设备设置0：未发生目标设备夭折时序;1：发生目标设备夭折时序。
        UINT32    received_master_abort  : 1   ; // [29] Received Master Abort由PCI主设备设置0：未发生主设备夭折时序;1：发生主设备夭折时序。
        UINT32    signaled_system_error  : 1   ; // [30] Signaled System Error0：SERR#信号无效;1：SERR#信号有效。
        UINT32    detected_parity_error  : 1   ; // [31] Detected Parity Error0：未检测到奇偶校验错误;1：检测到奇偶校验错误。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_P_PCISTS_PCICMD_U;

// Define the union PCIE_MIEP_P_CCR_RID_U
// 类代码和修订版ID
// 0x1008
typedef union tagMiepPCcrRid
{
    // Define the struct Bits
    struct
    {
        UINT32    revision_id           : 8   ; // [7..0] 修订版ID
        UINT32    Reserved_11           : 8   ; // [15..8] 保留
        UINT32    cfg_sub_class         : 8   ; // [23..16] 子类代码，在NTB模式下，该寄存器的值硬连线到0x80h表示“其它类型桥设备”
        UINT32    cfg_base_class        : 8   ; // [31..24] 类代码，桥设备，硬连线到0x06
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_P_CCR_RID_U;

// Define the union PCIE_MIEP_P_BIST_TYPE_U
// BIST，配置头格式寄存器
// 0x100C
typedef union tagMiepPBistType
{
    // Define the struct Bits
    struct
    {
        UINT32    cache_line_size       : 8   ; // [7..0] 高速缓存行大小。
        UINT32    primary_latency_timer  : 8   ; // [15..8] 主控制器延时定时器寄存器，该寄存器不影响PCIe的功能，硬连线为0
        UINT32    cfg_hdr_type          : 8   ; // [23..16] 配置头的格式，NTB是单功能设备，头类型为Type0
        UINT32    bist                  : 8   ; // [31..24] BIST寄存器，控制器不支持，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_P_BIST_TYPE_U;

// Define the union PCIE_MIEP_PBAR01_BASE_LOWER_U
// 基地址寄存器01低32位
// 0x1010
typedef union tagMiepPbar01BaseLower
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_iep_bar0_io       : 1   ; // [0] 0 =BAR01 is a memory BAR1 =BAR01 is an I/O BARNTB只支持Memory空间，不支持IO空间
        UINT32    cfg_iep_bar0_type     : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BARNTB只支持64位BAR寄存器
        UINT32    cfg_iep_bar0_pref     : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =PrefetchableNTB的BAR01空间为不可预取
        UINT32    Reserved_12           : 13  ; // [16..4] 保留位
        UINT32    bar0_low              : 15  ; // [31..17] BAR01基地址低位，BAR01的最低可写位是bit 17，因此窗口大小为64KB
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PBAR01_BASE_LOWER_U;

// Define the union PCIE_MIEP_PBAR23_BASE_LOWER_U
// 基地址寄存器23低32位
// 0x1018
typedef union tagMiepPbar23BaseLower
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_iep_bar2_io       : 1   ; // [0] 0 =BAR0 is a memory BAR1 =BAR0 is an I/O BARNTB支持Memory空间，不支持IO空间
        UINT32    cfg_iep_bar2_type     : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BARNTB只支持64位BAR寄存器
        UINT32    cfg_iep_bar2_pref     : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_13           : 8   ; // [11..4] 保留位
        UINT32    bar2_low              : 20  ; // [31..12] BAR23基地址低位，BAR23默认最低可写位是比特12，因此默认窗口大小为4KB。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PBAR23_BASE_LOWER_U;

// Define the union PCIE_MIEP_PBAR45_BASE_LOWER_U
// 基地址寄存器45高32位
// 0x1020
typedef union tagMiepPbar45BaseLower
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_iep_bar4_io       : 1   ; // [0] 0 =BAR0 is a memory BAR1 =BAR0 is an I/O BARNTB只支持Memory空间，不支持IO空间
        UINT32    cfg_iep_bar4_type     : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    cfg_iep_bar4_pref     : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_14           : 8   ; // [11..4] 保留位
        UINT32    bar4_low              : 20  ; // [31..12] BAR45基地址低位，BAR4默认的最低可写位是比特12，因此窗口大小为4KB。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PBAR45_BASE_LOWER_U;

// Define the union PCIE_MIEP_P_SUBSYSTEMID_U
// 子系统Vendor ID
// 0x102C
typedef union tagMiepPSubsystemid
{
    // Define the struct Bits
    struct
    {
        UINT32    subsystem_device_id   : 16  ; // [15..0] 子系统ID
        UINT32    subsystem_vendor_id   : 16  ; // [31..16] 子系统Vendor ID
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_P_SUBSYSTEMID_U;

// Define the union PCIE_MIEP_P_INTERRUPT_U
// 中断引脚，中断线
// 0x103C
typedef union tagMiepPInterrupt
{
    // Define the struct Bits
    struct
    {
        UINT32    int_line_reg          : 8   ; // [7..0] 中断线寄存器，该寄存器保留仅仅是为了荷PCI兼容
        UINT32    cfg_int_pin           : 8   ; // [15..8] 中断引脚寄存器，NTB Primary侧不支持对RC发送INTx中断
        UINT32    min_gnt               : 8   ; // [23..16] 硬连线为0
        UINT32    max_lat               : 8   ; // [31..24] 硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_P_INTERRUPT_U;

// Define the union PCIE_MIEP_P_MSI_LOWER32_BITADDRESS_U
// MSI低32位地址寄存器
// 0x1054
typedef union tagMiepPMsiLower32Bitaddress
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_17           : 2   ; // [1..0] 保留
        UINT32    iep_msi_addr_low32    : 30  ; // [31..2] MSI低32位地址，DW对齐
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_P_MSI_LOWER32_BITADDRESS_U;

// Define the union PCIE_MIEP_P_LINK_CAPABILITY_U
// 链路功能寄存器
// 0x107C
typedef union tagMiepPLinkCapability
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_pcie_max_link_speed  : 4   ; // [3..0] 支持的最大链接速度4'b0001 : 2.5GT/s4'b0010 : 5GT/s4'b0011 : 8GT/s其它值不支持
        UINT32    cfg_pcie_max_link_width  : 6   ; // [9..4] 支持最大链路宽度，支持最大X8 lane
        UINT32    active_state_power_management  : 2   ; // [11..10] 活动状态电源管理，NTB不支持
        UINT32    l0s_exit_latency      : 3   ; // [14..12] 保留，NTB不支持
        UINT32    l1_exit_latency       : 3   ; // [17..15] 保留，NTB不支持
        UINT32    clock_power_management  : 1   ; // [18] 保留，NTB不支持
        UINT32    surprise_down_error_report_cap  : 1   ; // [19] 保留,NTB不支持
        UINT32    data_link_layer_active_report_cap  : 1   ; // [20] 保留,NTB不支持
        UINT32    link_bandwidth_noti_cap  : 1   ; // [21] 保留,NTB不支持
        UINT32    aspm_option_compliance  : 1   ; // [22] 根据PCIe Spec，固定为1
        UINT32    Reserved_19           : 1   ; // [23] 固定为1
        UINT32    cfg_pcie_port_num     : 8   ; // [31..24] NTB端口号
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_P_LINK_CAPABILITY_U;

// Define the union PCIE_MIEP_P_AER_CAP_HEADER_U
// AER功能寄存器头
// 0x1100
typedef union tagMiepPAerCapHeader
{
    // Define the struct Bits
    struct
    {
        UINT32    PCIE_Extended_Capability_ID  : 16  ; // [15..0] PCIe功能ID，对于AER来说，该ID为0x0001h
        UINT32    Capability_Version    : 4   ; // [19..16] 功能版本号
        UINT32    Next_Capability_Offset  : 12  ; // [31..20] 下一个功能地址偏移
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_P_AER_CAP_HEADER_U;

// Define the union PCIE_MIEP_SBAR23XLAT_LOWER_U
// SBAR23地址转换寄存器低32位
// 0x8000
typedef union tagMiepSbar23xlatLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_26           : 12  ; // [11..0] 保留
        UINT32    sbar23_xlat_lower     : 20  ; // [31..12] SBAR23地址转换寄存器低32位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_SBAR23XLAT_LOWER_U;

// Define the union PCIE_MIEP_SBAR45XLAT_LOWER_U
// SBAR45地址转换寄存器低32位
// 0x8008
typedef union tagMiepSbar45xlatLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_28           : 12  ; // [11..0] 保留
        UINT32    sbar45_xlat_lower     : 20  ; // [31..12] SBAR45地址转换寄存器低32位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_SBAR45XLAT_LOWER_U;

// Define the union PCIE_MIEP_SBAR23LMT_LOWER_U
// SBAR23的limit寄存器低32位
// 0x8010
typedef union tagMiepSbar23lmtLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_29           : 12  ; // [11..0] 保留
        UINT32    sbar23_limit_lower    : 20  ; // [31..12] SBAR23 limit寄存器的低32位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_SBAR23LMT_LOWER_U;

// Define the union PCIE_MIEP_SBAR45LMT_LOWER_U
// SBAR45的limit寄存器低32位
// 0x8018
typedef union tagMiepSbar45lmtLower
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_30           : 12  ; // [11..0] 保留
        UINT32    sbar45_limit_lower    : 20  ; // [31..12] SBAR45 limit寄存器的低32位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_SBAR45LMT_LOWER_U;

// Define the union PCIE_MIEP_SBAR45LMT_UPPER_U
// SBAR45的limit寄存器高32位
// 0x801C
typedef union tagMiepSbar45lmtUpper
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_31           : 12  ; // [11..0] 保留
        UINT32    sbar45_limit_upper    : 20  ; // [31..12] SBAR45 limit寄存器的高32位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_SBAR45LMT_UPPER_U;

// Define the union PCIE_MIEP_CBDF_SBDF_U
// Secondary侧的BDF
// 0x8028
typedef union tagMiepCbdfSbdf
{
    // Define the struct Bits
    struct
    {
        UINT32    sfunc                 : 3   ; // [2..0] Secondary侧EP的Function号，在NTB/NTB模式下由Primary侧配置
        UINT32    sdev                  : 5   ; // [7..3] Secondary侧EP的Device号，在NTB/NTB模式下由Primary侧配置
        UINT32    sbus                  : 8   ; // [15..8] Secondary侧EP的总线号，默认为127，在NTB/NTB模式下由Primary侧配置
        UINT32    cap_sfunc_num         : 3   ; // [18..16] 在NTB-to-RP模式下由Remote CPU分配的Function号
        UINT32    cap_sdev_num          : 5   ; // [23..19] 在NTB-to-RP模式下由Remote CPU分配的Device号
        UINT32    cap_sbus_num          : 8   ; // [31..24] 在NTB-to-RP模式下由Remote CPU分配的Bus号
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_CBDF_SBDF_U;

// Define the union PCIE_MIEP_PCI_CFG_HDR0_U
// PCI兼容配置头空间寄存器
// 0x9000
typedef union tagMiepPciCfgHdr0
{
    // Define the struct Bits
    struct
    {
        UINT32    vendor_id             : 16  ; // [15..0] 厂商ID，华为分配到的Vendor ID号为0x19E5
        UINT32    device_id             : 16  ; // [31..16] 设备ID，以项目名作为Device ID号
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCI_CFG_HDR0_U;

// Define the union PCIE_MIEP_PCI_CFG_HDR1_U
// PCI兼容配置头空间寄存器
// 0x9004
typedef union tagMiepPciCfgHdr1
{
    // Define the struct Bits
    struct
    {
        UINT32    io_space_enable       : 1   ; // [0] I/O Sapace Enable0：该设备不能响应I/O请求;1：该设备能够响应I/O请求。
        UINT32    memory_space_enable   : 1   ; // [1] Memory Space Enable0：该设备不能响应存储器请求;1：该设备能够响应存储器请求。
        UINT32    bus_master_enable     : 1   ; // [2] Bus Master Enable0：该设备不能作为主设备;1：该设备能够作为主设备。
        UINT32    specialcycleenable    : 1   ; // [3] Special Cycle Enalbe不适用于PCIe，硬连线为0
        UINT32    memory_write_and_invalidate  : 1   ; // [4] Memory Write and Invalidata不适用于PCIe，硬连线为0
        UINT32    vga_palette_snoop_enable  : 1   ; // [5] VGA Palette Snoop不适用于PCIe，硬连线为0
        UINT32    parity_error_response  : 1   ; // [6] Parity Error Response0：对奇偶校验错误不作出响应;1：对奇偶校验错误作出响应。
        UINT32    idsel_stepping_waitcycle_control  : 1   ; // [7] IDSEL Stepping/Wait Cycle Control不适用于PCIe，硬连线为0
        UINT32    serr_enable           : 1   ; // [8] SERR#信号使能0：可以使用SERR#信号;
        UINT32    fastback_to_backenable  : 1   ; // [9] Faster Back-to-Back Enaable不适用于PCIe，硬连线为0
        UINT32    interrupt_disable     : 1   ; // [10] INTx Assertion Disable0：允许使用INTx方式提交中断;1：禁用INTx方式提交中断。
        UINT32    Reserved_35           : 5   ; // [15..11] Reserved
        UINT32    Reserved_34           : 3   ; // [18..16] Reserved
        UINT32    intx_status           : 1   ; // [19] INTx Status0：设备未使用INTx方式向处理器提交了中断请求;1：设备使用INTx方式向处理器提交了中断请求。
        UINT32    capabilitieslist      : 1   ; // [20] Capabilities List指示Capability Pointer寄存器中的值有效，硬连线为1
        UINT32    pcibus66mhzcapable    : 1   ; // [21] 66MHz Capable不适用于PCIe，硬连线为0
        UINT32    Reserved_33           : 1   ; // [22] Reserved
        UINT32    fastback_to_back      : 1   ; // [23] Faster Back-to-Back Capable不适用于PCIe，硬连线为0
        UINT32    masterdataparityerror  : 1   ; // [24] Master Data Parity Error0：除置一条件满足之外的其他情况;1：PERR#信号有效，或者总线出现数据传输错误时，或者Command寄存器的Parity Error Response位为1时。
        UINT32    devsel_timing         : 2   ; // [26..25] DEVSEL Timing不适用于PCIe，硬连线为0
        UINT32    signaled_target_abort  : 1   ; // [27] Signaled Target Abort由PCI目标设备设置0：未发生目标设备夭折时序;1：发生目标设备夭折时序。
        UINT32    received_target_abort  : 1   ; // [28] Received Target Abort由PCI主设备设置0：未发生目标设备夭折时序;1：发生目标设备夭折时序。
        UINT32    received_master_abort  : 1   ; // [29] Received Master Abort由PCI主设备设置0：未发生主设备夭折时序;1：发生主设备夭折时序。
        UINT32    signaled_system_error  : 1   ; // [30] Signaled System Error0：SERR#信号无效;1：SERR#信号有效。
        UINT32    detected_perr         : 1   ; // [31] Detected Parrity Error,不论Command寄存器的bit6(即parity error response位)的状况如何，只要该功能收到一个中毒TLP，该比特就会被置起。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCI_CFG_HDR1_U;

// Define the union PCIE_MIEP_PCI_CFG_HDR11_U
// PCI兼容配置头空间寄存器
// 0x902C
typedef union tagMiepPciCfgHdr11
{
    // Define the struct Bits
    struct
    {
        UINT32    subsystem_vendor_id   : 16  ; // [15..0] 子系统厂商ID
        UINT32    subsystemid           : 16  ; // [31..16] 子系统ID
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCI_CFG_HDR11_U;

// Define the union PCIE_MIEP_PCI_CFG_HDR13_U
// PCI兼容配置头空间寄存器
// 0x9034
typedef union tagMiepPciCfgHdr13
{
    // Define the struct Bits
    struct
    {
        UINT32    capptr                : 8   ; // [7..0] 功能指针
        UINT32    Reserved_37           : 24  ; // [31..8] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCI_CFG_HDR13_U;

// Define the union PCIE_MIEP_PCI_CFG_HDR15_U
// PCI兼容配置头空间寄存器
// 0x903C
typedef union tagMiepPciCfgHdr15
{
    // Define the struct Bits
    struct
    {
        UINT32    int_line              : 8   ; // [7..0] Interrupt Line
        UINT32    int_pin               : 8   ; // [15..8] Interrupt Pin00：不使用INTx类型上报中断;01：使用INTA;02：使用INTB;03：使用INTC;04：使用INTD。
        UINT32    min_grant             : 8   ; // [23..16] 不适用于PCIe，硬连线为0
        UINT32    max_latency           : 8   ; // [31..24] 不适用于PCIe，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCI_CFG_HDR15_U;

// Define the union PCIE_MIEP_PCI_MSI_CAP0_U
// PCI MSI功能寄存器
// 0x9050
typedef union tagMiepPciMsiCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_cap_id            : 8   ; // [7..0] MSI Capability ID
        UINT32    next_capability_pointer  : 8   ; // [15..8] Next Capability Pointer
        UINT32    msi_enabled           : 1   ; // [16] MSI Enabled0：禁用MSI;1：使能MSI。
        UINT32    multiple_message_capable  : 3   ; // [19..17] Multiple Message Capable000：PCIe设备可以使用1个中断向量;001：PCIe设备可以使用2个中断向量;010：PCIe设备可以使用4个中断向量;011：PCIe设备可以使用8个中断向量;100：PCIe设备可以使用16个中断向量;101：PCIe设备可以使用32个中断向量;110：保留;111：保留。
        UINT32    multiple_message_enabled  : 3   ; // [22..20] Multiple Message Enabled表示分配给当前PCIe设备的中断向量数目000：PCIe设备被分配给1个中断向量;001：PCIe设备被分配给2个中断向量;010：PCIe设备被分配给4个中断向量;011：PCIe设备被分配给8个中断向量;100：PCIe设备被分配给16个中断向量;101：PCIe设备被分配给32个中断向量;110：保留;111：保留。
        UINT32    msi_64_en             : 1   ; // [23] 支持64位地址功能
        UINT32    pvm_en                : 1   ; // [24] 设备是否支持Per Vector Masking功能1'b0: 不支持1'b1: 支持
        UINT32    message_control_register  : 7   ; // [31..25] MSI Per Vector Masking (PVM) supported0：不支持MSI PVM;1：支持MSI PVM。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCI_MSI_CAP0_U;

// Define the union PCIE_MIEP_PCI_MSI_CAP1_U
// PCI MSI功能寄存器
// 0x9054
typedef union tagMiepPciMsiCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_42           : 2   ; // [1..0] Reserved
        UINT32    msi_addr_low          : 30  ; // [31..2] MSI的低32bit地址的[31:2]位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCI_MSI_CAP1_U;

// Define the union PCIE_MIEP_PCI_MSI_CAP3_U
// PCI MSI功能寄存器
// 0x905C
typedef union tagMiepPciMsiCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_data              : 16  ; // [15..0] MSI数据
        UINT32    Reserved_43           : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCI_MSI_CAP3_U;

// Define the union PCIE_MIEP_PCIE_CAP0_U
// PCI Express功能寄存器
// 0x9070
typedef union tagMiepPcieCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie_cap_id           : 8   ; // [7..0] PCI Express Capability ID
        UINT32    pcie_next_ptr         : 8   ; // [15..8] Next Capability Pointer
        UINT32    pcie_capability_version  : 4   ; // [19..16] PCI Express Capability Version
        UINT32    device_port_type      : 4   ; // [23..20] Device/Port Type0100：PCIe RC;
        UINT32    slot_implemented      : 1   ; // [24] Slot Implemented
        UINT32    interrupt_message_number  : 5   ; // [29..25] Interrupt Message Number
        UINT32    Reserved_44           : 2   ; // [31..30] RsvdP
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP0_U;

// Define the union PCIE_MIEP_PCIE_CAP1_U
// PCI Express功能寄存器
// 0x9074
typedef union tagMiepPcieCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    max_payload_size_supported  : 3   ; // [2..0] 支持最大payload 为512Byte
        UINT32    phantom_function_supported  : 2   ; // [4..3] 仿真器功能支持，硬连线0
        UINT32    extended_tagfield_supported  : 1   ; // [5] 拓展标记字段支持，支持最大outstanding的深度为32
        UINT32    endpoint_l0sacceptable_latency  : 3   ; // [8..6] 端点L0可接受的延时，不支持，硬连线为0
        UINT32    endpoint_l1acceptable_latency  : 3   ; // [11..9] 端点L1可接受的延时，不支持，硬连线为0
        UINT32    undefined             : 3   ; // [14..12] 保留
        UINT32    Reserved_47           : 3   ; // [17..15] 保留
        UINT32    captured_slot_power_limit_value  : 8   ; // [25..18] 捕获的插槽功率极限值，硬连线0x0，只读
        UINT32    captured_slot_power_limit_scale  : 2   ; // [27..26] 捕获的插槽功率极限因子，硬连线0x0，只读
        UINT32    function_level_reset  : 1   ; // [28] Function级的复位，NTB不支持该功能
        UINT32    Reserved_46           : 3   ; // [31..29] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP1_U;

// Define the union PCIE_MIEP_PCIE_CAP2_U
// PCI Express功能寄存器
// 0x9078
typedef union tagMiepPcieCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    correctable_error_reporting_enable  : 1   ; // [0] Correctable Error Reporting Enable0：不支持发送“可纠正错误”消息;1：支持发送“可纠正错误”消息。
        UINT32    non_fatal_error_reporting_enable  : 1   ; // [1] Non-Fatal Error Reporting Enable0：不支持发送“非致命错误”消息;1：支持发送“非致命错误”消息。
        UINT32    fatal_error_reporting_enable  : 1   ; // [2] Fatal Error Reporting Enable0：不支持发送“致命错误”消息;1：支持发送“致命错误”消息。
        UINT32    urenable              : 1   ; // [3] Unsupported Request Reporting Enable0：不支持发送“不被支持请求”消息;1：支持发送“不被支持请求”消息。
        UINT32    enable_relaxed_ordering  : 1   ; // [4] Enable Relaxed Ordering0：不支持灵活事务顺序;1：支持灵活事务顺序。
        UINT32    max_payload_size      : 3   ; // [7..5] Max_Payload_Size000：128Byte;001：256Byte;010：512Byte;011：1024Byte;100：2048Byte;101：4096Byte;110：保留;111：保留。
        UINT32    extended_tagfieldenable  : 1   ; // [8] Extended Tag Field Enable0：禁用扩展Tag字段;1：使能扩展Tag字段。
        UINT32    phantom_function_enable  : 1   ; // [9] Phantom Function Enable0：禁用Phantom Function;1：使能Phantom Function。
        UINT32    auxpowerpmenable      : 1   ; // [10] AUX Power PM Enable0：禁用附加电源;1：使能附加电源。
        UINT32    enablenosnoop         : 1   ; // [11] Enable No Snoop0：禁用No Snoop特性;1：使能No Snoop特性。
        UINT32    max_read_request_size  : 3   ; // [14..12] Max_Read_Request_Size000：128Byte;001：256Byte;010：512Byte;011：1024Byte;100：2048Byte;101：4096Byte;110：保留;111：保留。
        UINT32    Reserved_49           : 1   ; // [15] reserved
        UINT32    correctableerrordetected  : 1   ; // [16] Correctable Error Detected0：没有检测到可纠正错误;1：检测到可纠正错误。
        UINT32    non_fatalerrordetected  : 1   ; // [17] Non-Fatal Error detected0：没有检测到非致命错误;1：检测到非致命错误。
        UINT32    fatalerrordetected    : 1   ; // [18] Fatal Error Detected0：没有检测到致命错误;1：检测到致命错误。
        UINT32    unsupportedrequestdetected  : 1   ; // [19] Unsupported Request Detected0：没有收到不被支持的请求;1：收到不被支持的请求。
        UINT32    auxpowerdetected      : 1   ; // [20] Aux Power Detected0：没有检测到辅助电源;1：检测到辅助电源。
        UINT32    transactionpending    : 1   ; // [21] Transaction Pending硬连线为0
        UINT32    Reserved_48           : 10  ; // [31..22] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP2_U;

// Define the union PCIE_MIEP_PCIE_CAP3_U
// PCI Express功能寄存器
// 0x907C
typedef union tagMiepPcieCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    max_link_speed        : 4   ; // [3..0] Max Link Speeds0001：2.5GT/s;0010：5.0GT/s;0100：8.0GT/s;其他值：不支持。
        UINT32    max_link_width        : 6   ; // [9..4] Maximum Link Width000001：x1通道;000010：x2通道;000100：x4通道;001000：x8通道;010000：x16通道;其他值：保留。
        UINT32    active_state_power_management  : 2   ; // [11..10] Active State Link PM Support0：不支持ASPM;1：支持ASPM。
        UINT32    l0s_exitlatency       : 3   ; // [14..12] L0s Exit Latency000：小于64ns;
        UINT32    l1_exit_latency       : 3   ; // [17..15] L1 Exit Latency000：小于1us;
        UINT32    clock_power_management  : 1   ; // [18] Clock Power Management0：不支持Clock Power Management;1：支持Clock Power Management。
        UINT32    surprise_down_error_report_cap  : 1   ; // [19] Surprise Down Error Reporting Capable，该版本IP不支持，硬连线为0
        UINT32    data_link_layer_active_report_cap  : 1   ; // [20] Data Link Layer Active Reporting Capable，对于RC硬连线为10：不支持Data Link Layer Active Reporting;1：支持Data Link Layer Active Reporting。
        UINT32    link_bandwidth_noti_cap  : 1   ; // [21] Link Bandwidth Notification Capability，对于RC硬连线为10：不支持Link Bandwidth Notification Capability;1：支持Link Bandwidth Notification Capability。
        UINT32    aspm_option_compliance  : 1   ; // [22] ASPM Optionality Compliance0：不支持ASPM Optionality Compliance;1：支持ASPM Optionality Compliance。
        UINT32    Reserved_50           : 1   ; // [23] Reserved
        UINT32    port_number           : 8   ; // [31..24] Port Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP3_U;

// Define the union PCIE_MIEP_PCIE_CAP4_U
// PCI Express功能寄存器
// 0x9080
typedef union tagMiepPcieCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    active_state_power_management  : 2   ; // [1..0] NTB模式下不支持，硬连线到0
        UINT32    Reserved_53           : 1   ; // [2] 保留
        UINT32    rcb                   : 1   ; // [3] 0表示能返回64B边界的完成报文
        UINT32    link_disable          : 1   ; // [4] NTB模式下不支持，硬连线到0
        UINT32    retrain_link          : 1   ; // [5] NTB模式下不支持，硬连线到0
        UINT32    common_clock_config   : 1   ; // [6] NTB模式下不支持，硬连线到0
        UINT32    extended_sync         : 1   ; // [7] NTB模式下不支持，硬连线到0
        UINT32    enable_clock_pwr_management  : 1   ; // [8] NTB模式下不支持，硬连线到0
        UINT32    hw_auto_width_disable  : 1   ; // [9] NTB模式下不支持，硬连线到0
        UINT32    link_bandwidth_management_int_en  : 1   ; // [10] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_int_en  : 1   ; // [11] NTB模式下不支持，硬连线到0
        UINT32    Reserved_52           : 4   ; // [15..12] 保留
        UINT32    current_link_speed    : 4   ; // [19..16] 4'b0001 : 2.5Gbps4'b0010 : 5Gbps4'b0011 : 8Gbps其它值:保留当链路没有建立的时候，该无意义
        UINT32    negotiated_link_width  : 6   ; // [25..20] 协商的链路宽度，可能值为x1/x2/x4/x8
        UINT32    Reserved_51           : 1   ; // [26] 保留位
        UINT32    link_training         : 1   ; // [27] 链路协商正在进行的状态
        UINT32    slot_clock_configration  : 1   ; // [28] 表示设备是否使用连接器上提供的参考物理时钟
        UINT32    data_link_layer_active  : 1   ; // [29] 链路层的活动状态
        UINT32    link_bandwidth_management_status  : 1   ; // [30] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_status  : 1   ; // [31] NTB模式下不支持，硬连线到0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP4_U;

// Define the union PCIE_MIEP_PCIE_CAP5_U
// PCI Express功能寄存器
// 0x9084
typedef union tagMiepPcieCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    attentioonbuttonpresent  : 1   ; // [0] Attention Indicator Present0：没有Attention Indicator;1：有Attention Indicator。
        UINT32    powercontrollerpresent  : 1   ; // [1] Power Controller Present0：没有Power Controller;1：有Power Controller。
        UINT32    mrlsensorpresent      : 1   ; // [2] MRL Sensor Present0：没有MRL Sensor;1：有MRL Sensor。
        UINT32    attentionindicatorpresent  : 1   ; // [3] Attention Indicator Present0：没有Attention Indicator;1：有Attention Indicator。
        UINT32    powerindicatorpresent  : 1   ; // [4] Power Indicator Present0：没有Power Indicator;1：有Power Indicator。
        UINT32    hot_plugsurprise      : 1   ; // [5] Hot-Plug Surprise0：不支持Hot-Plug Surprise;1：支持Hot-Plug Surprise。
        UINT32    hot_plugcapable       : 1   ; // [6] Hot-Plug Capable0：不支持热插拔;1：支持热插拔。
        UINT32    slotpowerlimitvalue   : 8   ; // [14..7] Slot Power Limit Value
        UINT32    slotpowerlimitscale   : 2   ; // [16..15] Slot Power Limit Scale
        UINT32    electromechanicalinterlockpresen  : 1   ; // [17] Electromechanical Interlock Present0：没有Electromechanical Interlock ;1：有Electromechanical Interlock 。
        UINT32    no_cmd_complete_support  : 1   ; // [18] No Command Complete Support0：支持Command Complete;1：不支持No Command Complete。
        UINT32    phy_slot_number       : 13  ; // [31..19] Physical Slot Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP5_U;

// Define the union PCIE_MIEP_PCIE_CAP6_U
// PCI Express功能寄存器
// 0x9088
typedef union tagMiepPcieCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    attentionbuttonpressedenable  : 1   ; // [0] Attention Button Pressed Enable0：禁用Attention Button Pressed;1：使能Attention Button Pressed。
        UINT32    powerfaultdetectedenable  : 1   ; // [1] Power Fault Detected Enable0：禁用Power Fault Detected;1：使能Power Fault Detected。
        UINT32    mrlsensorchangedenable  : 1   ; // [2] MRL Sensor Changed Enable0：禁用MRL Sensor Changed;1：使能MRL Sensor Changed。
        UINT32    presencedetectchangedenable  : 1   ; // [3] Presence Detect Changed Enable0：禁用Presence Detect Changed;1：使能Presence Detect Changed。
        UINT32    commandcompletedinterruptenable  : 1   ; // [4] Command Completed Interrupt Enable0：禁用Command Completed Interrupt;1：使能Command Completed Interrupt。
        UINT32    hot_pluginterruptenable  : 1   ; // [5] Hot-Plug Interrupt Enable0：禁用Hot-Plug Interrupt;1：使能Hot-Plug Interrupt。
        UINT32    attentionindicatorcontrol  : 2   ; // [7..6] Attention Indicator Control00：保留;01：On;10：Blink;11：Off。
        UINT32    powerindicatorcontrol  : 2   ; // [9..8] Power Indicator Control00：保留;01：On;10：Blink;11：Off。
        UINT32    powercontrollercontrol  : 1   ; // [10] Power Controller Control0：禁用Power Controller Control;1：使能Power Controller Control。
        UINT32    electromechanicalinterlockcontrol  : 1   ; // [11] Electromechanical Interlock Control0：禁用Electromechanical Interlock Control;1：使能AElectromechanical Interlock Control。
        UINT32    datalinklayerstatechangedenable  : 1   ; // [12] Data Link Layer State Changed Enable0：禁用Data Link Layer State Changed;1：使能Data Link Layer State Changed Enable。
        UINT32    Reserved_54           : 3   ; // [15..13] Reserved
        UINT32    attentionbuttonpressed  : 1   ; // [16] Attention Button Pressed0：Attention Button Not Pressed;1：Attention Button Pressed。
        UINT32    powerfaultdetected    : 1   ; // [17] Power Fault Detected0：Power Fault Not Detected;1：Power Fault Detected。
        UINT32    mrlsensorchanged      : 1   ; // [18] MRL Sensor Changed0：MRL Sensor Not Changed;1：MRL Sensor Changed。
        UINT32    presencedetectchanged  : 1   ; // [19] Presence Detect Changed0：Presence Detect Not Changed;1：Presence Detect Changed。
        UINT32    commandcompleted      : 1   ; // [20] Command Completed0：Command Not Completed;1：Command Completed。
        UINT32    mrlsensorstate        : 1   ; // [21] MRL Sensor State0：不处于MRL Sensor State;1：处于MRL Sensor State。
        UINT32    presencedetectstate   : 1   ; // [22] Presence Detect State0：不处于Presence Detect State;1：处于Presence Detect State。
        UINT32    electromechanicalinterlockstatus  : 1   ; // [23] Electromechanical Interlock Status0：不处于Electromechanical Interlock Status;1：处于Electromechanical Interlock Status。
        UINT32    datalinklayerstatechanged  : 1   ; // [24] Data Link Layer State Changed0：Data Link Layer State Not Changed;1：Data Link Layer State Changed。
        UINT32    slot_ctrl_status      : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP6_U;

// Define the union PCIE_MIEP_PCIE_CAP7_U
// PCI Express功能寄存器
// 0x908C
typedef union tagMiepPcieCap7
{
    // Define the struct Bits
    struct
    {
        UINT32    systemerroroncorrectableerrorenable  : 1   ; // [0] System Error on Correctable Error Enable0：禁用System Error on Correctable Error;1：使能System Error on Correctable Error。
        UINT32    systemerroronnon_fatalerrorenable  : 1   ; // [1] System Error on Non-fatal Error Enable0：禁用System Error on Non-fatal Error ;1：使能System Error on Non-fatal Error 。
        UINT32    systemerroronfatalerrorenable  : 1   ; // [2] System Error on Fatal Error Enable0：禁用System Error on Fatal Error ;1：使能System Error on Fatal Error 。
        UINT32    pmeinterruptenable    : 1   ; // [3] PME Interrupt Enable0：禁用PME Interrupt;1：使能PME Interrupt。
        UINT32    crssoftwarevisibilityenable  : 1   ; // [4] CRS Software Visibility Enable，该版本IP不支持，硬连线为0
        UINT32    Reserved_55           : 11  ; // [15..5] Reserved
        UINT32    crssoftwarevisibility  : 1   ; // [16] CRS Software Visibility，该版本IP不支持，硬连线为0
        UINT32    root_cap              : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP7_U;

// Define the union PCIE_MIEP_PCIE_CAP8_U
// PCI Express功能寄存器
// 0x9090
typedef union tagMiepPcieCap8
{
    // Define the struct Bits
    struct
    {
        UINT32    pmerequesterid        : 16  ; // [15..0] PME Requester ID
        UINT32    pmestatus             : 1   ; // [16] PME Status0：不指示PME Status;1：指示PME Status。
        UINT32    pmepending            : 1   ; // [17] PME Pending0：指示无PME Pending;1：指示PME Pending。
        UINT32    root_status           : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP8_U;

// Define the union PCIE_MIEP_PCIE_CAP9_U
// PCI Express功能寄存器
// 0x9094
typedef union tagMiepPcieCap9
{
    // Define the struct Bits
    struct
    {
        UINT32    completiontimeoutrangessupported  : 4   ; // [3..0] Completion Timeout Ranges SupportedRange A: 50us to 10ms;Range B: 10ms to 250ms;Range C: 250ms to 4s;Range D: 4s to 64s。
        UINT32    completiontimeoutdisablesupported  : 1   ; // [4] Completion Timeout Disable Supported0：不支持禁用Completion Timeout;1：支持禁用Completion Timeout。
        UINT32    ariforwardingsupported  : 1   ; // [5] ARI Forwarding Supported0：不支持ARI Forwarding;1：支持ARI Forwarding。
        UINT32    atomicoproutingsupported  : 1   ; // [6] AtomicOp Routing Supported，不适用于Endpoint。
        UINT32    _2_bitatomicopcompletersupported  : 1   ; // [7] 32-bit AtomicOp Completer Supported0：不支持32-bit AtomicOp Completer ;1：支持32-bit AtomicOp Completer 。
        UINT32    _4_bitatomicopcompletersupported  : 1   ; // [8] 64-bit AtomicOp Completer Supported0：不支持64-bit AtomicOp Completer;1：支持64-bit AtomicOp Completer。
        UINT32    _28_bitcascompletersupported  : 1   ; // [9] 128-bit CAS Completer Supported0：不支持128-bit CAS Completer;1：支持128-bit CAS Completer。
        UINT32    noro_enabledpr_prpassing  : 1   ; // [10] No RO-enabled PR-PR Passing0：No RO-enabled PR-PR Passing;1：RO-enabled PR-PR Passing。
        UINT32    Reserved_56           : 1   ; // [11] Reserved
        UINT32    tphcompletersupported  : 2   ; // [13..12] TPH Completer Supported00：接收端不支持TPH和扩展TPH报文;01：接收端仅支持TPH报文;10：保留;11：接收端支持TPH和扩展TPH报文。
        UINT32    dev_cap2              : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP9_U;

// Define the union PCIE_MIEP_PCIE_CAP10_U
// PCI Express功能寄存器
// 0x9098
typedef union tagMiepPcieCap10
{
    // Define the struct Bits
    struct
    {
        UINT32    completiontimeoutvalue  : 4   ; // [3..0] Completion Timeout Value0000b：Default range: 50us to 50ms;0001b：50us to 100us;0010b：1ms to 10ms;0101b：16ms to 55ms;0110b：65ms to 210ms;1001b：260ms to 900ms;1010b：1s to 3.5s;1101b：4s to 13s;1110b：17s to 64s;其他值：保留。
        UINT32    completiontimeoutdisable  : 1   ; // [4] Completion Timeout Disable0：不禁用Completion Timeout;1：禁用Completion Timeout。
        UINT32    ariforwardingsupported  : 1   ; // [5] ARI Forwarding Supported0：不支持ARI Forwarding;1：支持ARI Forwarding。
        UINT32    atomicoprequesterenable  : 1   ; // [6] AtomicOp Requester Enable0：禁用AtomicOp Requester;1：使能AtomicOp Requester。
        UINT32    atomicopegressblocking  : 1   ; // [7] AtomicOp Egress Blocking对于Endpoint不使用，reserved
        UINT32    idorequestenable      : 1   ; // [8] IDO Request Enable0：禁用IDO Request Enable;1：使能IDO Request Enable。
        UINT32    idocompletionenable   : 1   ; // [9] IDO Completion Enable0：禁用IDO Completion Enable;1：使能IDO Completion Enable。
        UINT32    dev_ctrl2             : 22  ; // [31..10] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP10_U;

// Define the union PCIE_MIEP_PCIE_CAP11_U
// PCI Express功能寄存器
// 0x909C
typedef union tagMiepPcieCap11
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_58           : 1   ; // [0] Reserved
        UINT32    gen1_suport           : 1   ; // [1] Gen1链路速度支持0：不支持2.5GT/s;1：支持2.5GT/s。
        UINT32    gen2_suport           : 1   ; // [2] Gen2链路速度支持0：不支持5.0GT/s;1：支持5.0GT/s。
        UINT32    gen3_suport           : 1   ; // [3] Gen3链路速度支持0：不支持8.0GT/s;1：支持8.0GT/s。
        UINT32    Reserved_57           : 4   ; // [7..4] Reserved
        UINT32    crosslink_supported   : 1   ; // [8] Crosslink Supported
        UINT32    link_cap2             : 23  ; // [31..9] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP11_U;

// Define the union PCIE_MIEP_PCIE_CAP12_U
// PCI Express功能寄存器
// 0x90A0
typedef union tagMiepPcieCap12
{
    // Define the struct Bits
    struct
    {
        UINT32    targetlinkspeed       : 4   ; // [3..0] Target Link Speed
        UINT32    entercompliance       : 1   ; // [4] Enter Compliance0：不令链路进入Compliance模式;1：令链路进入Compliance模式。
        UINT32    hardwareautonomousspeeddisa  : 1   ; // [5] Hardware Autonomous Speed Disable0：不禁用Hardware Autonomous Speed;1：禁用Hardware Autonomous Speed。
        UINT32    selectablede_empha    : 1   ; // [6] Selectable De-emphasis0：-6dB;1：-3.5dB。
        UINT32    transmitmargin        : 3   ; // [9..7] Transmit Margin
        UINT32    _entermodifiedcompliance  : 1   ; // [10] Enter Modified Compliance0：如果LTSSM进入Polling.Compliance状态，不发送modified compliance pattern;1：如果LTSSM进入Polling.Compliance状态，发送一个modified compliance pattern。
        UINT32    compliancesos         : 1   ; // [11] Compliance SOS0：在发送Compliance Pattern或Modified Pattern时不在中间插入SKP有序集;1：在发送Compliance Pattern或Modified Pattern时在中间插入SKP有序集。
        UINT32    de_emphasislevel      : 4   ; // [15..12] De-emphasis Level0001：-3.5dB;0000：-6dB其他值：保留。
        UINT32    currentde_emphasislevel  : 1   ; // [16] Current De-emphasis Level0：-6dB;1：-3.5dB。
        UINT32    equalizationcomplete  : 1   ; // [17] Equalization Complete0：Equalization未完成;1：Equalization完成。
        UINT32    equalizationphase1successful  : 1   ; // [18] Equalization Phase 1 Successful0：Equalization Phase 1不成功;1：Equalization Phase 1成功。
        UINT32    equalizationphase2successful  : 1   ; // [19] Equalization Phase 2 Successful0：Equalization Phase 2不成功;1：Equalization Phase 2成功。
        UINT32    equalizationphase3successful  : 1   ; // [20] Equalization Phase 3 Successful0：Equalization Phase 3不成功;1：Equalization Phase 3成功。
        UINT32    linkequalizationrequest  : 1   ; // [21] Link Equalization Request0：没有请求Link Equalization;1：请求Link Equalization 。
        UINT32    link_ctrl2_status2    : 10  ; // [31..22] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PCIE_CAP12_U;

// Define the union PCIE_MIEP_SLOT_CAP_U
// Slot Numbering功能寄存器
// 0x90C0
typedef union tagMiepSlotCap
{
    // Define the struct Bits
    struct
    {
        UINT32    slotnumberingcapabilitiesid  : 8   ; // [7..0] Slot Numbering Capabilities ID
        UINT32    nextcapabilitypointer  : 8   ; // [15..8] Next Capability Pointer
        UINT32    add_incardslotsprovided  : 5   ; // [20..16] Add-in Card Slots Provided
        UINT32    firstinchassis        : 1   ; // [21] First in Chassis
        UINT32    Reserved_59           : 2   ; // [23..22] Reserved
        UINT32    slot_cap              : 8   ; // [31..24] Chassis Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_SLOT_CAP_U;

// Define the union PCIE_MIEP_AER_CAP0_U
// 高级错误报告寄存器
// 0x9100
typedef union tagMiepAerCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pciexpressextendedcapabilityid  : 16  ; // [15..0] PCI Express Extended Capability ID
        UINT32    capabilityversion     : 4   ; // [19..16] Capability Version
        UINT32    aer_cap_hdr           : 12  ; // [31..20] Next Capability Offset
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_AER_CAP0_U;

// Define the union PCIE_MIEP_AER_CAP1_U
// 高级错误报告寄存器
// 0x9104
typedef union tagMiepAerCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_65           : 1   ; // [0] 未定义
        UINT32    Reserved_64           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrorsta  : 1   ; // [4] Data Link Protocol Error Status0：未检测到Data Link Protocol Error;1：检测到Data Link Protocol Error。
        UINT32    surprisedownerrorstatus  : 1   ; // [5] Surprise Down Error Status，该版本IP不支持。
        UINT32    Reserved_63           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpstatu      : 1   ; // [12] Poisoned TLP Status0：未检测到Poisoned TLP;1：检测到Poisoned TLP。
        UINT32    flowcontrolprotocolerrorst  : 1   ; // [13] Flow Control Protocol Error Status0：未检测到Flow Control Protocol Error;1：检测到Flow Control Protocol Error。
        UINT32    completiontimeouts    : 1   ; // [14] Completion Timeout Status0：未检测到Completion Timeout;
        UINT32    completerabortstatus  : 1   ; // [15] Completer Abort Status0：未检测到Completer Abort;1：检测到Completer Abort。
        UINT32    receiveroverflowstatus  : 1   ; // [16] Unexpected Completion Status0：未检测到Unexpected Completion;1：检测到Unexpected Completion。
        UINT32    malformedtlpstatus    : 1   ; // [17] Receiver Overflow Status0：未检测到Receiver Overflow;1：检测到Receiver Overflow。
        UINT32    ecrcerrorstatus       : 1   ; // [18] Malformed TLP Status0：未检测到Malformed TLP;1：检测到Malformed TLP。
        UINT32    ecrcerrorstat         : 1   ; // [19] ECRC Error Status0：未检测到ECRC Error;1：检测到ECRC Error。
        UINT32    unsupportedrequesterrorstatus  : 1   ; // [20] Unsupported Request Error Status0：未检测到Unsupported Request Error;1：检测到Unsupported Request Error;。
        UINT32    Reserved_62           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedstatus  : 1   ; // [24] AtomicOp Egress Blocked Status0：AtomicOp Egress is not Blocked;1：AtomicOp Egress is Blocked。
        UINT32    uncorr_err_status     : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_AER_CAP1_U;

// Define the union PCIE_MIEP_AER_CAP2_U
// 高级错误报告寄存器
// 0x9108
typedef union tagMiepAerCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_69           : 1   ; // [0] 未定义
        UINT32    Reserved_68           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrormask  : 1   ; // [4] Data Link Protocol Error Mask0：Data Link Protocol Error is not Masked;1：Data Link Protocol Error is Masked。
        UINT32    surprisedownerrormask  : 1   ; // [5] Surprise Down Error Mask，该版本IP不支持。
        UINT32    Reserved_67           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpmask       : 1   ; // [12] Poisoned TLP Mask0：Poisoned TLP is not Masked;1：Poisoned TLP is Masked。
        UINT32    flowcontrolprotocolerrormask  : 1   ; // [13] Flow Control Protocol Error Mask0：Flow Control Protocol Error is not Masked;1：Flow Control Protocol Error is Masked。
        UINT32    completiontimeoutmask  : 1   ; // [14] Completion Timeout Mask0：Completion Timeout is not Masked;1：Completion Timeout is Masked。
        UINT32    completerabortmask    : 1   ; // [15] Completer Abort Mask0：Completer Abort is not Masked;1：Completer Abort is Masked。
        UINT32    unexpectedcompletionmask  : 1   ; // [16] Unexpected Completion Mask0：Unexpected Completion is not Masked;1：Unexpected Completion is Masked。
        UINT32    receiveroverflowmask  : 1   ; // [17] Receiver Overflow Mask0：Receiver Overflow is not Masked;1：Receiver Overflow is Masked。
        UINT32    malformedtlpmask      : 1   ; // [18] Malformed TLP Mask0：Malformed TLP is not Masked;1：Malformed TLP is Masked。
        UINT32    ecrcerrormask         : 1   ; // [19] ECRC Error Mask0：ECRC Error is not Masked;1：ECRC Error is Masked。
        UINT32    unsupportedrequesterrormask  : 1   ; // [20] Unsupported Request Error Mask0：Unsupported Request Error is not Masked;1：Unsupported Request Error is Masked。
        UINT32    Reserved_66           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedmask  : 1   ; // [24] AtomicOp Egress Blocked Mask0：AtomicOp Egress Blocked is not Masked;1：AtomicOp Egress Blocked is Masked。
        UINT32    uncorr_err_mask       : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_AER_CAP2_U;

// Define the union PCIE_MIEP_AER_CAP3_U
// 高级错误报告寄存器
// 0x910C
typedef union tagMiepAerCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_73           : 1   ; // [0] 未定义
        UINT32    Reserved_72           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrorsever  : 1   ; // [4] Data Link Protocol Error Severity0：Non-fatal;1：Fatal。
        UINT32    surprisedownerrorseverity  : 1   ; // [5] Surprise Down Error Severity，该版本IP不支持
        UINT32    Reserved_71           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpseverity   : 1   ; // [12] Poisoned TLP Severity0：Non-fatal;1：Fatal。
        UINT32    flowcontrolprotocolerrorseveri  : 1   ; // [13] Flow Control Protocol Error Severity0：Non-fatal;1：Fatal。
        UINT32    completiontimeoutseverity  : 1   ; // [14] Completion Timeout Severity0：Non-fatal;1：Fatal。
        UINT32    completerabortseverity  : 1   ; // [15] Completer Abort Severity0：Non-fatal;1：Fatal。
        UINT32    unexpectedcompletionseverity  : 1   ; // [16] Unexpected Completion Severity0：Non-fatal;1：Fatal。
        UINT32    receiveroverflowseverity  : 1   ; // [17] Receiver Overflow Severity0：Non-fatal;1：Fatal。
        UINT32    malformedtlpseverity  : 1   ; // [18] Malformed TLP Severity0：Non-fatal;1：Fatal。
        UINT32    ecrcerrorseverity     : 1   ; // [19] ECRC Error Severity0：Non-fatal;1：Fatal。
        UINT32    unsupportedrequesterrorseverity  : 1   ; // [20] Unsupported Request Error Severity0：Non-fatal;1：Fatal。
        UINT32    Reserved_70           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedseverity  : 1   ; // [24] AtomicOp Egress Blocked Severity0：Non-fatal;1：Fatal。
        UINT32    uncorr_err_ser        : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_AER_CAP3_U;

// Define the union PCIE_MIEP_AER_CAP4_U
// 高级错误报告寄存器
// 0x9110
typedef union tagMiepAerCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    receivererrorstatus   : 1   ; // [0] Receiver Error Status0：未检测到Receiver Error;1：检测到Receiver Error。
        UINT32    Reserved_75           : 5   ; // [5..1] Reserved
        UINT32    badtlpstatus          : 1   ; // [6] Bad TLP Status0：未检测到Bad TLP;1：检测到Bad TLP。
        UINT32    baddllpstatus         : 1   ; // [7] Bad DLLP Status0：未检测到Bad DLLP;1：检测到Bad DLLP。
        UINT32    replay_numrolloverstatus  : 1   ; // [8] REPLAY_NUM Rollover Status0：未检测到REPLAY_NUM Rollover;1：检测到REPLAY_NUM Rollover。
        UINT32    Reserved_74           : 3   ; // [11..9] Reserved
        UINT32    replytimertimeoutstatus  : 1   ; // [12] Reply Timer Timeout Status0：未检测到Reply Timer Timeout;1：检测到Reply Timer Timeout。
        UINT32    advisorynon_fatalerrorstatus  : 1   ; // [13] Advisory Non-Fatal Error Status0：未检测到Advisory Non-Fatal Error;1：检测到Advisory Non-Fatal Error。
        UINT32    corr_err_status       : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_AER_CAP4_U;

// Define the union PCIE_MIEP_AER_CAP5_U
// 高级错误报告寄存器
// 0x9114
typedef union tagMiepAerCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    receivererrormask     : 1   ; // [0] Receiver Error Mask0：Receiver Error is not Masked;1：Receiver Error is Masked。
        UINT32    Reserved_77           : 5   ; // [5..1] Reserved
        UINT32    badtlpmask            : 1   ; // [6] Bad TLP Mask0：Bad TLP is not Masked;1：Bad TLP is Masked。
        UINT32    baddllpmask           : 1   ; // [7] Bad DLLP Mask0：Bad DLLP is not Masked;1：Bad DLLP is Masked。
        UINT32    replay_numrollovermask  : 1   ; // [8] REPLAY_NUM Rollover Mask0：REPLAY_NUM Rollover is not Masked;1：REPLAY_NUM Rollover is Masked。
        UINT32    Reserved_76           : 3   ; // [11..9] Reserved
        UINT32    replytimertimeoutmask  : 1   ; // [12] Reply Timer Timeout Mask0：Reply Timer Timeout is not Masked;1：Reply Timer Timeout is Masked。
        UINT32    advisorynon_fatalerrormask  : 1   ; // [13] Advisory Non-Fatal Error Mask0：Advisory Non-Fatal Error is not Maskd;1：Advisory Non-Fatal Error is Masked。
        UINT32    corr_err_mask         : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_AER_CAP5_U;

// Define the union PCIE_MIEP_AER_CAP6_U
// 高级错误报告寄存器
// 0x9118
typedef union tagMiepAerCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    firsterrorpointer     : 5   ; // [4..0] First Error Pointer
        UINT32    ecrcgenerationcapability  : 1   ; // [5] ECRC Generation Capability0：no capability;1：has capability。
        UINT32    ecrcgenerationenable  : 1   ; // [6] ECRC Generation Enable0：disable;1：enable。
        UINT32    ecrccheckcapable      : 1   ; // [7] ECRC Check Capable0：no capability;1：has capability。
        UINT32    ecrccheckenable       : 1   ; // [8] ECRC Check Enable0：diable;1：enable。
        UINT32    adv_cap_ctrl          : 23  ; // [31..9] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_AER_CAP6_U;

// Define the union PCIE_MIEP_AER_CAP11_U
// 高级错误报告寄存器
// 0x912C
typedef union tagMiepAerCap11
{
    // Define the struct Bits
    struct
    {
        UINT32    correctableerrorreportingenable  : 1   ; // [0] Correctable Error Reporting Enable0：disable;1：enable。
        UINT32    non_fatalerrorreportingenable  : 1   ; // [1] Non-Fatal Error Reporting Enable0：disable;1：enable。
        UINT32    fatalerrorreportingenable  : 1   ; // [2] Fatal Error Reporting Enable0：disable;1：enable。
        UINT32    root_err_cmd          : 29  ; // [31..3] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_AER_CAP11_U;

// Define the union PCIE_MIEP_AER_CAP12_U
// 高级错误报告寄存器
// 0x9130
typedef union tagMiepAerCap12
{
    // Define the struct Bits
    struct
    {
        UINT32    err_correceived       : 1   ; // [0] ERR_COR Received0：未收到ERR_COR;1：收到ERR_COR。
        UINT32    multipleerr_correceived  : 1   ; // [1] Multiple ERR_COR Received0：未收到多个ERR_COR;1：收到多个ERR_COR。
        UINT32    err_fatal_nonfatalreceived  : 1   ; // [2] ERR_FATAL/NONFATAL Received0：未收到ERR_FATAL/NONFATAL;1：收到ERR_FATAL/NONFATAL。
        UINT32    multipleerr_fatal_nonfatalreceived  : 1   ; // [3] Multiple ERR_FATAL/NONFATAL Received0：未收到多个ERR_FATAL/NONFATAL;1：收到多个ERR_FATAL/NONFATAL。
        UINT32    firstuncorrectablefatal  : 1   ; // [4] First Uncorrectable Fatal0：指示没有收到第一个Uncorrectable Fatal;1：指示收到第一个Uncorrectable Fatal。
        UINT32    non_fatalerrormessagesreceived  : 1   ; // [5] Non-Fatal Error Messages Received0：未收到Non-Fatal Error Messages;1：收到Non-Fatal Error Messages。
        UINT32    fatalerrormessagesreceived  : 1   ; // [6] Fatal Error Messages Received0：未收到Fatal Error Messages;1：收到Fatal Error Messages。
        UINT32    Reserved_78           : 20  ; // [26..7] Reserved
        UINT32    root_err_status       : 5   ; // [31..27] Advanced Error Interrupt Message Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_AER_CAP12_U;

// Define the union PCIE_MIEP_AER_CAP13_U
// 高级错误报告寄存器
// 0x9134
typedef union tagMiepAerCap13
{
    // Define the struct Bits
    struct
    {
        UINT32    err_corsourceidentification  : 16  ; // [15..0] ERR_COR Source Identification
        UINT32    err_src_id            : 16  ; // [31..16] ERR_FATAL/NONFATAL Source Identification
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_AER_CAP13_U;

// Define the union PCIE_MIEP_VC_CAP0_U
// 虚拟通道功能寄存器
// 0x9140
typedef union tagMiepVcCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pciexpressextendedcapabilityid  : 16  ; // [15..0] PCI Express Extended Capability ID
        UINT32    capabilityversion     : 4   ; // [19..16] Capability Version
        UINT32    vc_cap_hdr            : 12  ; // [31..20] Next Capability Offset
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_VC_CAP0_U;

// Define the union PCIE_MIEP_VC_CAP1_U
// 虚拟通道功能寄存器
// 0x9144
typedef union tagMiepVcCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    extendedvccount       : 3   ; // [2..0] Extended VC Count
        UINT32    Reserved_81           : 1   ; // [3] Reserved
        UINT32    lowpriorityextendedvccount  : 3   ; // [6..4] Low Priority Extended VC Count
        UINT32    Reserved_80           : 1   ; // [7] Reserved
        UINT32    referenceclock        : 2   ; // [9..8] Reference Clock，不适用于Endpoint，硬连线为0
        UINT32    portarbitrationtableentrysize  : 2   ; // [11..10] Port Arbitration Table Entry Size，不适用于Endpoint，硬连线为0
        UINT32    vc_cap1               : 20  ; // [31..12] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_VC_CAP1_U;

// Define the union PCIE_MIEP_VC_CAP2_U
// 虚拟通道功能寄存器
// 0x9148
typedef union tagMiepVcCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    vcarbitrationcapability  : 8   ; // [7..0] VC Arbitration Capability
        UINT32    Reserved_82           : 16  ; // [23..8] Reserved
        UINT32    vc_cap2               : 8   ; // [31..24] VC Arbitration Table Offset，该版本IP不支持
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_VC_CAP2_U;

// Define the union PCIE_MIEP_VC_CAP3_U
// 虚拟通道功能寄存器
// 0x914C
typedef union tagMiepVcCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    loadvcarbitrationtable  : 1   ; // [0] Load VC Arbitration Table
        UINT32    vcarbitrationselect   : 3   ; // [3..1] VC Arbitration Select
        UINT32    Reserved_84           : 12  ; // [15..4] Reserved
        UINT32    arbitrationtablestatus  : 1   ; // [16] Arbitration Table Status
        UINT32    Reserved_83           : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_VC_CAP3_U;

// Define the union PCIE_MIEP_VC_CAP4_U
// 虚拟通道功能寄存器
// 0x9150
typedef union tagMiepVcCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    portarbitrationcapability  : 8   ; // [7..0] Port Arbitration Capability
        UINT32    Reserved_87           : 6   ; // [13..8] Reserved
        UINT32    Reserved_86           : 1   ; // [14] 未定义
        UINT32    rejectsnooptransactions  : 1   ; // [15] Reject Snoop Transactions，不适用于Endpoint，硬连线为0
        UINT32    maximumtimeslots      : 7   ; // [22..16] Maximum Time Slots，不适用于Endpoint
        UINT32    Reserved_85           : 1   ; // [23] Reserved
        UINT32    vc_res_cap            : 8   ; // [31..24] Port Arbitration Table Offset，不适用于Endpoint，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_VC_CAP4_U;

// Define the union PCIE_MIEP_VC_CAP5_U
// 虚拟通道功能寄存器
// 0x9154
typedef union tagMiepVcCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    tc_vcmap              : 8   ; // [7..0] TC/VC Map
        UINT32    Reserved_90           : 8   ; // [15..8] Reserved
        UINT32    loadportarbitrationtable  : 1   ; // [16] Load Port Arbitration Table，不适用于Endpoint
        UINT32    portarbitrationselec  : 3   ; // [19..17] Port Arbitration Select，对于Endpoint硬连线为0
        UINT32    Reserved_89           : 4   ; // [23..20] Reserved
        UINT32    vcid                  : 3   ; // [26..24] VC ID，硬连线为0
        UINT32    Reserved_88           : 4   ; // [30..27] Reserved
        UINT32    vc_res_ctrl           : 1   ; // [31] VC Enable，硬连线为1
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_VC_CAP5_U;

// Define the union PCIE_MIEP_VC_CAP6_U
// 虚拟通道功能寄存器
// 0x9158
typedef union tagMiepVcCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_91           : 16  ; // [15..0] Reserved
        UINT32    portarbitrationtablestatus  : 1   ; // [16] Port Arbitration Table Status
        UINT32    vcnegotiationpending  : 1   ; // [17] VC Negotiation Pending
        UINT32    vc_res_status         : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_VC_CAP6_U;

// Define the union PCIE_MIEP_VC_CAP7_U
// 虚拟通道功能寄存器
// 0x915C
typedef union tagMiepVcCap7
{
    // Define the struct Bits
    struct
    {
        UINT32    portarbitrationcapability  : 8   ; // [7..0] Port Arbitration Capability，硬连线为1
        UINT32    Reserved_94           : 6   ; // [13..8] Reserved
        UINT32    Reserved_93           : 1   ; // [14] 未定义
        UINT32    rejectsnooptransactions  : 1   ; // [15] Reject Snoop Transactions
        UINT32    maximumtimeslots      : 7   ; // [22..16] Maximum Time Slots
        UINT32    Reserved_92           : 1   ; // [23] Reserved
        UINT32    vc_res_cap0           : 8   ; // [31..24] Port Arbitration Table Offset，不适用于Endpoint，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_VC_CAP7_U;

// Define the union PCIE_MIEP_VC_CAP8_U
// 虚拟通道功能寄存器
// 0x9160
typedef union tagMiepVcCap8
{
    // Define the struct Bits
    struct
    {
        UINT32    tc_vcmap              : 8   ; // [7..0] TC/VC Map
        UINT32    Reserved_97           : 8   ; // [15..8] Reserved
        UINT32    loadportarbitrationtable  : 1   ; // [16] Load Port Arbitration Table
        UINT32    portarbitrationselect  : 3   ; // [19..17] Port Arbitration Select，对于Endpoint硬连线为0
        UINT32    Reserved_96           : 4   ; // [23..20] Reserved
        UINT32    vcid                  : 3   ; // [26..24] VC ID
        UINT32    Reserved_95           : 4   ; // [30..27] Reserved
        UINT32    vc_res_ctrl0          : 1   ; // [31] VC Enable0：VC禁用;1：VC使能。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_VC_CAP8_U;

// Define the union PCIE_MIEP_VC_CAP9_U
// 虚拟通道功能寄存器
// 0x9164
typedef union tagMiepVcCap9
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_98           : 16  ; // [15..0] Reserved
        UINT32    arbitrationtablestatus  : 1   ; // [16] Arbitration Table Status
        UINT32    vcnegotiationpending  : 1   ; // [17] VC Negotiation Pending
        UINT32    vc_res_status0        : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_VC_CAP9_U;

// Define the union PCIE_MIEP_PORT_LOGIC0_U
// 端口逻辑寄存器
// 0x9700
typedef union tagMiepPortLogic0
{
    // Define the struct Bits
    struct
    {
        UINT32    ack_lat_timer         : 16  ; // [15..0] Round Trip Latency Time Limit
        UINT32    replay_timer          : 16  ; // [31..16] Replay Time Limit
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC0_U;

// Define the union PCIE_MIEP_PORT_LOGIC2_U
// 端口逻辑寄存器
// 0x9708
typedef union tagMiepPortLogic2
{
    // Define the struct Bits
    struct
    {
        UINT32    linknumber            : 8   ; // [7..0] Link Number，不适用于Endpoint
        UINT32    Reserved_101          : 7   ; // [14..8] Reserved
        UINT32    forcelink             : 1   ; // [15] Force Link
        UINT32    linkstate             : 6   ; // [21..16] Link State
        UINT32    Reserved_100          : 2   ; // [23..22] Reserved
        UINT32    port_force_link       : 8   ; // [31..24] Low Power Entrance Count
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC2_U;

// Define the union PCIE_MIEP_PORT_LOGIC3_U
// 端口逻辑寄存器
// 0x970C
typedef union tagMiepPortLogic3
{
    // Define the struct Bits
    struct
    {
        UINT32    ackfrequency          : 8   ; // [7..0] Ack Frequency
        UINT32    n_fts                 : 8   ; // [15..8] N_FTS
        UINT32    commonclockn_fts      : 8   ; // [23..16] Common Clock N_FTS
        UINT32    l0sentrancelatency    : 3   ; // [26..24] L0s Entrance Latency000：1us;001：2us;010：3us;011：4us;100：5us;101：6us;110：7us;111：7us。
        UINT32    l1entrancelatency     : 3   ; // [29..27] L1 Entrance Latency000：1us;001：2us;010：4us;011：8us;100：16us;101：32us;110：64us;111：64us。
        UINT32    enteraspml1withoutreceiveinl0s  : 1   ; // [30] Enter ASPM L1 without receive in L0s0：发送接收端都处于L0s一段空闲时间后，core才能进入L1状态;
        UINT32    ack_aspm              : 1   ; // [31] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC3_U;

// Define the union PCIE_MIEP_PORT_LOGIC4_U
// 端口逻辑寄存器
// 0x9710
typedef union tagMiepPortLogic4
{
    // Define the struct Bits
    struct
    {
        UINT32    vendorspecificdllprequest  : 1   ; // [0] Vendor Specific DLLP Request0：不发送Vendor Specific DLLP Register定义的DLLP;1：发送Vendor Specific DLLP Register定义的DLLP。
        UINT32    scrambledisable       : 1   ; // [1] Scramble Disable0：禁用加扰;1：使能加扰。
        UINT32    loopbackenable        : 1   ; // [2] Loopback Enable0：禁用loopback;1：使能loopback。
        UINT32    resetassert           : 1   ; // [3] Reset Assert，不适用于EP0：不触发recovery状态;
        UINT32    Reserved_104          : 1   ; // [4] Reserved
        UINT32    dlllinkenable         : 1   ; // [5] DLL Link Enable0：禁用initFC DLLP发送以及建立链路;1：使能initFC DLLP发送以及建立链路。
        UINT32    Reserved_103          : 1   ; // [6] Reserved
        UINT32    fastlinkmode          : 1   ; // [7] Fast Link Mode0：禁用Fast Link Mode;1：使能Fast Link Mode。
        UINT32    Reserved_102          : 8   ; // [15..8] Reserved
        UINT32    linkmodeenable        : 6   ; // [21..16] Link Mode Enable000001：x1;
        UINT32    crosslinkenable       : 1   ; // [22] Crosslink Enable0：禁用crosslink;1：使能crosslink。
        UINT32    crosslinkactive       : 1   ; // [23] Crosslink Active0：未发生crosslink;1：发生crosslink。
        UINT32    port_link_ctrl        : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC4_U;

// Define the union PCIE_MIEP_PORT_LOGIC5_U
// 端口逻辑寄存器
// 0x9714
typedef union tagMiepPortLogic5
{
    // Define the struct Bits
    struct
    {
        UINT32    insertlaneskewfortransmit  : 24  ; // [23..0] Insert Lane Skew for Transmit
        UINT32    flowcontroldisable    : 1   ; // [24] Flow Control Disable0：不禁用core发送FC DLLP;1：禁用core发送FC DLLP。
        UINT32    ack_nakdisable        : 1   ; // [25] Ack/Nak Disable0：不禁用core发送Ack/Nak DLLP;1：禁用core发送Ack/Nak DLLP。
        UINT32    Reserved_105          : 5   ; // [30..26] reserved
        UINT32    lane_skew             : 1   ; // [31] Disable Lane-to-Lane Deskew0：不禁用Lane-to-Lane Deskew;1：禁用Lane-to-Lane Deskew。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC5_U;

// Define the union PCIE_MIEP_PORT_LOGIC6_U
// 端口逻辑寄存器
// 0x9718
typedef union tagMiepPortLogic6
{
    // Define the struct Bits
    struct
    {
        UINT32    numberoftssymbols     : 4   ; // [3..0] Number of TS Symbols
        UINT32    Reserved_107          : 4   ; // [7..4] Reserved
        UINT32    numberofskpsymbols    : 3   ; // [10..8] Number of SKP Symbols
        UINT32    Reserved_106          : 3   ; // [13..11] Reserved
        UINT32    timermodifierforreplaytimer  : 5   ; // [18..14] Timer Modifier for Replay Timer
        UINT32    timermodifierforack_naklatencytimer  : 5   ; // [23..19] Timer Modifier for Ack/Nak Latency Timer
        UINT32    timermodifierforflowcontrolwatchdogtimer  : 5   ; // [28..24] Timer Modifier for Flow Control Watchdog Timer
        UINT32    sym_num               : 3   ; // [31..29] Configuration Requests targeted at function numbers above this value will be returned with UR (unsupported request).
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC6_U;

// Define the union PCIE_MIEP_PORT_LOGIC7_U
// 端口逻辑寄存器
// 0x971C
typedef union tagMiepPortLogic7
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0posteddataqueuedepth  : 11  ; // [10..0] SKP Interval Value
        UINT32    Reserved_108          : 4   ; // [14..11] Reserved
        UINT32    sym_timer             : 1   ; // [15] Disable FC Watchdog Timer0：不禁用FC Watchdog Timer;1：禁用FC Watchdog Timer。
        UINT32    maskfunctionmismatchfilteringfo  : 1   ; // [16] Mask function mismatch filtering for incoming Requests0：不使用Mask;1：使用Mask。
        UINT32    maskpoisonedtlpfiltering  : 1   ; // [17] Mask poisoned TLP filtering0：不使用Mask;1：使用Mask。
        UINT32    maskbarmatchfiltering  : 1   ; // [18] Mask BAR match filtering0：不使用Mask;1：使用Mask。
        UINT32    masktype1configurationrequestfiltering  : 1   ; // [19] Mask Type 1 Configuration Request filtering0：不使用Mask;1：使用Mask。
        UINT32    masklockedrequestfiltering  : 1   ; // [20] Mask Locked Request filtering0：不使用Mask;1：使用Mask。
        UINT32    masktagerrorrulesforreceivedcompletions  : 1   ; // [21] Mask Tag error rules for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maskrequesteridmismatcherrorforreceivedcompletions  : 1   ; // [22] Mask Requester ID mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maskfunctionmismatcherrorforreceivedcompletions  : 1   ; // [23] Mask function mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_traffic_classmis_match_error_forreceived_completions  : 1   ; // [24] Mask Traffic Class mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_attributesmismatcherrorforreceivedcompletions  : 1   ; // [25] Mask Attributes mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_length_mismatch_error_forreceive_dcompletions  : 1   ; // [26] Mask Length mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maske_crcerror_filtering  : 1   ; // [27] Mask ECRC error filtering0：不使用Mask;1：使用Mask。
        UINT32    maske_crcerror_filtering_forcompletions  : 1   ; // [28] Mask ECRC error filtering for Completions0：不使用Mask;1：使用Mask。
        UINT32    message_control       : 1   ; // [29] 0：send decoded Message on the SII,then drop the Message TLPs;
        UINT32    maskfilteringofreceived  : 1   ; // [30] Mask filtering of received I/O Requests (RC mode only)0：不使用Mask;1：使用Mask。
        UINT32    flt_mask1             : 1   ; // [31] Mask filtering of received Configuration Requests (RC mode only)0：不使用Mask;1：使用Mask。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC7_U;

// Define the union PCIE_MIEP_PORT_LOGIC8_U
// 端口逻辑寄存器
// 0x9720
typedef union tagMiepPortLogic8
{
    // Define the struct Bits
    struct
    {
        UINT32    cx_flt_mask_venmsg0_drop  : 1   ; // [0] CX_FLT_MASK_VENMSG0_DROP0：丢弃Vendor MSG Type 0并报告UR错误;1：不丢弃Vendor MSG Type 0。
        UINT32    cx_flt_mask_venmsg1_drop  : 1   ; // [1] CX_FLT_MASK_VENMSG1_DROP0：丢弃Vendor MSG Type 1;1：不丢弃Vendor MSG Type 1。
        UINT32    cx_flt_mask_dabort_4ucpl  : 1   ; // [2] CX_FLT_MASK_DABORT_4UCPL0：对于unexpected CPL使能DLLP abort;1：对于unexpected CPL禁用DLLP abort。
        UINT32    cx_flt_mask_handle_flush  : 1   ; // [3] CX_FLT_MASK_HANDLE_FLUSH0：禁用core filter处理flush请求;1：使能core filter处理flush请求。
        UINT32    flt_mask2             : 28  ; // [31..4] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC8_U;

// Define the union PCIE_MIEP_PORT_LOGIC9_U
// 端口逻辑寄存器
// 0x9724
typedef union tagMiepPortLogic9
{
    // Define the struct Bits
    struct
    {
        UINT32    amba_multi_outbound_decomp_np  : 1   ; // [0] Enable AMBA Multiple Outbound Decomposed NP Sub-Request0：禁用;1：使能。
        UINT32    amba_obnp_ctrl        : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC9_U;

// Define the union PCIE_MIEP_PORT_LOGIC12_U
// 端口逻辑寄存器
// 0x9730
typedef union tagMiepPortLogic12
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitposteddatafccredits  : 12  ; // [11..0] Transmit Posted Data FC Credits
        UINT32    transmitpostedheaderfccredits  : 8   ; // [19..12] Transmit Posted Header FC Credits
        UINT32    tx_pfc_status         : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC12_U;

// Define the union PCIE_MIEP_PORT_LOGIC13_U
// 端口逻辑寄存器
// 0x9734
typedef union tagMiepPortLogic13
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitnon_posteddatafccredits  : 12  ; // [11..0] Transmit Non-Posted Data FC Credits
        UINT32    transmitnon_postedheaderfccredits  : 8   ; // [19..12] Transmit Non-Posted Header FC Credits
        UINT32    tx_npfc_status        : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC13_U;

// Define the union PCIE_MIEP_PORT_LOGIC14_U
// 端口逻辑寄存器
// 0x9738
typedef union tagMiepPortLogic14
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitcompletiondatafccredits  : 12  ; // [11..0] Transmit Completion Data FC Credits
        UINT32    transmitcompletionheaderfccredits  : 8   ; // [19..12] Transmit Completion Header FC Credits
        UINT32    tx_cplfc_status       : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC14_U;

// Define the union PCIE_MIEP_PORT_LOGIC15_U
// 端口逻辑寄存器
// 0x973C
typedef union tagMiepPortLogic15
{
    // Define the struct Bits
    struct
    {
        UINT32    rx_tlp_fc_credit_not_retured  : 1   ; // [0] Received TLP FC Credits Not ReturnedIndicates that the core has sent a TLP but has not yet received anUpdateFC DLLP indicating that the credits for that TLP have been restoredby the receiver at the other end of the link
        UINT32    tx_retry_buf_not_empty  : 1   ; // [1] Transmit Retry Buffer Not EmptyIndicates that there is data in the transmit retry buffer.
        UINT32    rx_queue_not_empty    : 1   ; // [2] Received Queue Not EmptyIndicates there is data in one or more of the receive buffers
        UINT32    Reserved_110          : 13  ; // [15..3] Reserved
        UINT32    fc_latency_timer_override_value  : 13  ; // [28..16] FC Latency Timer Override Value
        UINT32    Reserved_109          : 2   ; // [30..29] Reserved
        UINT32    fc_latency_timer_override_en  : 1   ; // [31] FC Latency Timer Override Enable
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC15_U;

// Define the union PCIE_MIEP_PORT_LOGIC16_U
// 端口逻辑寄存器
// 0x9748
typedef union tagMiepPortLogic16
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0posteddatacredits  : 12  ; // [11..0] VC0 Posted Data Credits
        UINT32    vc0postedheadercredits  : 8   ; // [19..12] VC0 Posted Header Credits
        UINT32    Reserved_112          : 1   ; // [20] Reserved
        UINT32    vc0_postedtlpqueuemode  : 1   ; // [21] VC0 Posted TLP Queue Mode0：未选择store-and-forword;1：选择store-and-forword。
        UINT32    vc0postedtlpqueuemode  : 1   ; // [22] VC0 Posted TLP Queue Mode0：未选择cut_through;1：选择cut_through。
        UINT32    vc0postedtlpqueuemo   : 1   ; // [23] VC0 Posted TLP Queue Mode0：未选择Bypass;1：选择Bypass。
        UINT32    Reserved_111          : 6   ; // [29..24] Reserved
        UINT32    tlptypeorderingforvc0  : 1   ; // [30] TLP Type Ordering for VC00：Strict ordering;1：Ordering follows the rules in PCIe 3.0。
        UINT32    rx_pque_ctrl          : 1   ; // [31] VC Ordering for Receive Queues0：round robin;
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC16_U;

// Define the union PCIE_MIEP_PORT_LOGIC17_U
// 端口逻辑寄存器
// 0x974C
typedef union tagMiepPortLogic17
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0non_posteddatacredits  : 12  ; // [11..0] VC0 Non-Posted data Credits
        UINT32    vc0non_postedheadercredits  : 8   ; // [19..12] VC0 Non-Posted Header Credits
        UINT32    rx_npque_ctrl         : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC17_U;

// Define the union PCIE_MIEP_PORT_LOGIC18_U
// 端口逻辑寄存器
// 0x9750
typedef union tagMiepPortLogic18
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_comp_data_credits  : 12  ; // [11..0] VC0 Completion Data Credits
        UINT32    vc0_cpl_header_credt  : 8   ; // [19..12] VC0 Completion header credits
        UINT32    Reserved_114          : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC18_U;

// Define the union PCIE_MIEP_PORT_LOGIC19_U
// 端口逻辑寄存器
// 0x97A8
typedef union tagMiepPortLogic19
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_posted_data_que_path  : 14  ; // [13..0] VC0 Posted Data Queue Depth
        UINT32    Reserved_115          : 2   ; // [15..14] Reserved
        UINT32    vco_posted_head_queue_depth  : 10  ; // [25..16] VC0 Posted Header Queue Depth
        UINT32    vc_pbuf_ctrl          : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC19_U;

// Define the union PCIE_MIEP_PORT_LOGIC20_U
// 端口逻辑寄存器
// 0x97AC
typedef union tagMiepPortLogic20
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_np_data_que_depth  : 14  ; // [13..0] VC0 Non-Posted Data Queue Depth
        UINT32    Reserved_117          : 2   ; // [15..14] Reserved
        UINT32    vco_np_header_que_depth  : 10  ; // [25..16] VC0 Non-Posted Header Queue Depth
        UINT32    vc_npbuf_ctrl         : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC20_U;

// Define the union PCIE_MIEP_PORT_LOGIC21_U
// 端口逻辑寄存器
// 0x97B0
typedef union tagMiepPortLogic21
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_comp_data_queue_depth  : 14  ; // [13..0] VC0 Completion Data Queue Depth
        UINT32    Reserved_119          : 2   ; // [15..14] Reserved
        UINT32    vco_posted_head_queue_depth  : 10  ; // [25..16] VC0 Posted Header Queue Depth
        UINT32    Reserved_118          : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC21_U;

// Define the union PCIE_MIEP_PORT_LOGIC22_U
// 端口逻辑寄存器
// 0x980C
typedef union tagMiepPortLogic22
{
    // Define the struct Bits
    struct
    {
        UINT32    n_fts                 : 8   ; // [7..0] Sets the Number of Fast Training Sequences (N_FTS) that the core advertises as its N_FTS during Gen2 or Gen3 Link training
        UINT32    pre_determ_num_of_lane  : 9   ; // [16..8] Predetermined Number of Lanes1：1 lane;2：2 lanes;其他值：保留。
        UINT32    det_sp_change         : 1   ; // [17] Directed Speed Change0：指示LTSSM在链路初始化完成后不改变到GEN2速率;1：指示LTSSM在链路初始化完成后改变到GEN2速率。
        UINT32    config_phy_tx_sw      : 1   ; // [18] Config PHY Tx Swing0：Low Swing;1：Full Swing。
        UINT32    config_tx_comp_rcv_bit  : 1   ; // [19] Config Tx Compliance Receive Bit0：不指示LTSSM发送含有声明compliance接受比特的TS有序集;1：指示LTSSM发送含有声明compliance接受比特的TS有序集。
        UINT32    set_emp_level         : 1   ; // [20] Used to set the de-emphasis level for Upstream Ports0：-6dB;1：-3.5dB。
        UINT32    Reserved_120          : 11  ; // [31..21] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORT_LOGIC22_U;

// Define the union PCIE_MIEP_PORTLOGIC25_U
// 端口逻辑寄存器
// 0x9818
typedef union tagMiepPortlogic25
{
    // Define the struct Bits
    struct
    {
        UINT32    remote_rd_req_size    : 3   ; // [2..0] Remote Read Request Size000：128;001：256;010：512;011：1024;100：2048;101：4096;110：保留;111：保留。
        UINT32    Reserved_123          : 5   ; // [7..3] Reserved
        UINT32    remote_max_brd_tag    : 8   ; // [15..8] Remote Max Bridge Tag
        UINT32    Reserved_122          : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC25_U;

// Define the union PCIE_MIEP_PORTLOGIC26_U
// 端口逻辑寄存器
// 0x981C
typedef union tagMiepPortlogic26
{
    // Define the struct Bits
    struct
    {
        UINT32    resize_master_resp_compser  : 1   ; // [0] Resize Master Response Composer0：不改变AXI Master Response Composer Contro Register 0的值;1：改变AXI Master Response Composer Contro Register 0的值。
        UINT32    axi_ctrl1             : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC26_U;

// Define the union PCIE_MIEP_PORTLOGIC54_U
// 端口逻辑寄存器
// 0x9900
typedef union tagMiepPortlogic54
{
    // Define the struct Bits
    struct
    {
        UINT32    region_index          : 4   ; // [3..0] Region Index
        UINT32    Reserved_124          : 27  ; // [30..4] Reserved
        UINT32    iatu_view             : 1   ; // [31] Region Direction0：Outbound;1：Inbound。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC54_U;

// Define the union PCIE_MIEP_PORTLOGIC55_U
// 端口逻辑寄存器
// 0x9904
typedef union tagMiepPortlogic55
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu1_type            : 5   ; // [4..0] 出站TLP的地址在该区域内则该TLP的TYPE字段用该值替换;入站TLP的TYPE字段如果等于该值则执行地址转换。
        UINT32    iatu1_tc              : 3   ; // [7..5] 出站TLP的地址在该区域内则该TLP的TC字段用该值替换;入站TLP的TC字段如果等于该值则执行地址转换。
        UINT32    iatu1_td              : 1   ; // [8] 出站TLP的地址在该区域内则该TLP的TD字段用该值替换;入站TLP的TD字段如果等于该值则执行地址转换。
        UINT32    iatu1_attr            : 2   ; // [10..9] 出站TLP的地址在该区域内则该TLP的ATTR字段用该值替换;入站TLP的ATTR字段如果等于该值则执行地址转换。
        UINT32    Reserved_128          : 5   ; // [15..11] Reserved
        UINT32    iatu1_at              : 2   ; // [17..16] 出站TLP的地址在该区域内则该TLP的AT字段用该值替换;入站TLP的AT字段如果等于该值则执行地址转换。
        UINT32    Reserved_127          : 2   ; // [19..18] Reserved
        UINT32    iatu1_id              : 3   ; // [22..20] 出站TLP的地址在该区域内则该TLP的Requester ID的功能号字段用该值替换;对于入站MEM/IO，如果与该功能号的BAR匹配，则执行地址转换;对于入站CFG，如果功能号字段等于该值则执行地址转换。
        UINT32    Reserved_126          : 9   ; // [31..23] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC55_U;

// Define the union PCIE_MIEP_PORTLOGIC56_U
// 端口逻辑寄存器
// 0x9908
typedef union tagMiepPortlogic56
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu2_type            : 8   ; // [7..0] 出站TLP的地址在该区域内，并且转换的TLP的TYPE字段为消息，那么该TLP的Message Code字段用该值替换;
        UINT32    iatu2_bar_num         : 3   ; // [10..8] BAR Number对于Outbound不适用。
        UINT32    Reserved_132          : 3   ; // [13..11] Reserved
        UINT32    iatu2_tc_match_en     : 1   ; // [14] TC Match Enable对于Outbound不适用。
        UINT32    iatu2_td_match_en     : 1   ; // [15] TD Match Enable对于Outbound不适用。
        UINT32    iatu2_attr_match_en   : 1   ; // [16] ATTR Match Enable对于Outbound不适用。
        UINT32    Reserved_131          : 1   ; // [17] Reserved
        UINT32    iatu2_at_match_en     : 1   ; // [18] AT Match Enable对于Outbound不适用。
        UINT32    iatu2_func_num_match_en  : 1   ; // [19] Function Number Match Enable对于Outbound不适用。
        UINT32    iatu2_virtual_func_num_match_en  : 1   ; // [20] Virtual Function Number Match Enable对于Outbound不适用。
        UINT32    message_code_match_en  : 1   ; // [21] Message Code Match Enable对于Outbound不适用。
        UINT32    Reserved_130          : 2   ; // [23..22] Reserved
        UINT32    iatu2_response_code   : 2   ; // [25..24] Response Code对于Outbound不适用。
        UINT32    Reserved_129          : 1   ; // [26] Reserved
        UINT32    iatu2_fuzzy_type_match_mode  : 1   ; // [27] Fuzzy Type Match Mode对于Outbound不适用。
        UINT32    iatu2_cfg_shift_mode  : 1   ; // [28] CFG Shift Mode0：不使用CFG Shift Mode;1：使用CFG Shift Mode。
        UINT32    iatu2_ivert_mode      : 1   ; // [29] Invert Mode0：不使用Invert Mode;1：使用Invert Mode。
        UINT32    iatu2_match_mode      : 1   ; // [30] Match Mode对于Outbound不适用。
        UINT32    iatu2_region_en       : 1   ; // [31] Region Enable0：禁用该区域地址转换;1：使能该区域地址转换。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC56_U;

// Define the union PCIE_MIEP_PORTLOGIC57_U
// 端口逻辑寄存器
// 0x990C
typedef union tagMiepPortlogic57
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu_start_low        : 12  ; // [11..0] Forms Bits [11:0] of the start address of the address region to be translated.
        UINT32    iatu_start_high       : 20  ; // [31..12] Forms Bits [31:12] of the start address of the address region to be translated.
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC57_U;

// Define the union PCIE_MIEP_PORTLOGIC59_U
// 端口逻辑寄存器
// 0x9914
typedef union tagMiepPortlogic59
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu_limit_low        : 12  ; // [11..0] Forms Bits [11:0] of the end address of the address region to be translated
        UINT32    iatu_limit_high       : 20  ; // [31..12] Forms Bits [31:12] of the end address of the address region to be translated
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC59_U;

// Define the union PCIE_MIEP_PORTLOGIC60_U
// 端口逻辑寄存器
// 0x9918
typedef union tagMiepPortlogic60
{
    // Define the struct Bits
    struct
    {
        UINT32    xlated_addr_high      : 12  ; // [11..0] Forms Bits [11:0] of the start address of the new address of the translated region
        UINT32    xlated_addr_low       : 20  ; // [31..12] Forms Bits [31:12] of the of the new address of the translated region
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC60_U;

// Define the union PCIE_MIEP_PORTLOGIC62_U
// 端口逻辑寄存器
// 0x997C
typedef union tagMiepPortlogic62
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_wr_eng_en         : 1   ; // [0] DMA Write Engine Enable0：禁用DMA Write Engine;1：使能DMA Write Engine。
        UINT32    dma_wr_ena            : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC62_U;

// Define the union PCIE_MIEP_PORTLOGIC63_U
// 端口逻辑寄存器
// 0x9980
typedef union tagMiepPortlogic63
{
    // Define the struct Bits
    struct
    {
        UINT32    wr_doorbell_num       : 3   ; // [2..0] Doorbell Number必须写入0x0来启动DMA写操作，目前仅支持单通道。
        UINT32    Reserved_134          : 28  ; // [30..3] Reserved
        UINT32    dma_wr_dbell_stop     : 1   ; // [31] Stop0：不停止产生请求;1：停止产生请求。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC63_U;

// Define the union PCIE_MIEP_PORTLOGIC64_U
// 端口逻辑寄存器
// 0x999C
typedef union tagMiepPortlogic64
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_read_eng_en       : 1   ; // [0] DMA Read Engine Enable0：禁用DMA Read Engine;1：使能DMA Read Engine。
        UINT32    Reserved_135          : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC64_U;

// Define the union PCIE_MIEP_PORTLOGIC65_U
// 端口逻辑寄存器
// 0x99A0
typedef union tagMiepPortlogic65
{
    // Define the struct Bits
    struct
    {
        UINT32    rd_doorbell_num       : 3   ; // [2..0] Doorbell Number必须写入0x0来启动DMA读操作，目前仅支持单通道。
        UINT32    Reserved_137          : 28  ; // [30..3] Reserved
        UINT32    dma_rd_dbell_stop     : 1   ; // [31] Stop0：不停止产生请求;1：停止产生请求。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC65_U;

// Define the union PCIE_MIEP_PORTLOGIC66_U
// 端口逻辑寄存器
// 0x99BC
typedef union tagMiepPortlogic66
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_status       : 8   ; // [7..0] Done Interrupt Status0：未产生完成中断;1：产生完成中断。
        UINT32    Reserved_139          : 8   ; // [15..8] Reserved
        UINT32    abort_int_status      : 8   ; // [23..16] Abort Interrupt Status0：未丢弃出错传输;1：丢弃出错传输。
        UINT32    Reserved_138          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC66_U;

// Define the union PCIE_MIEP_PORTLOGIC67_U
// 端口逻辑寄存器
// 0x99C4
typedef union tagMiepPortlogic67
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_mask         : 8   ; // [7..0] Done Interrupt Mask0：不使用Done Interrupt Mask;1：使用Done Interrupt Mask。
        UINT32    Reserved_142          : 8   ; // [15..8] Reserved
        UINT32    abort_int_mask        : 8   ; // [23..16] Abort Interrupt Mask0：不使用Abort Interrupt Mask;
        UINT32    Reserved_141          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC67_U;

// Define the union PCIE_MIEP_PORTLOGIC68_U
// 端口逻辑寄存器
// 0x99C8
typedef union tagMiepPortlogic68
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_clr          : 8   ; // [7..0] Done Interrupt Clear0：不清除Done Interrupt Status字段;1：清除Done Interrupt Status字段。
        UINT32    Reserved_145          : 8   ; // [15..8] Reserved
        UINT32    abort_int_clr         : 8   ; // [23..16] Abort Interrupt Clear0：不清除Abort Interrupt Status字段;1：清除Abort Interrupt Status字段。
        UINT32    Reserved_144          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC68_U;

// Define the union PCIE_MIEP_PORTLOGIC69_U
// 端口逻辑寄存器
// 0x99CC
typedef union tagMiepPortlogic69
{
    // Define the struct Bits
    struct
    {
        UINT32    app_rd_err_det        : 8   ; // [7..0] Application Read Error Detected0：未检测到Application Read Error ;1：检测到Application Read Error。
        UINT32    Reserved_147          : 8   ; // [15..8] Reserved
        UINT32    ll_element_fetch_err_det  : 8   ; // [23..16] Linked List Element Fetch Error Detected0：未检测到Linked List Element Fetch Error;1：检测到Linked List Element Fetch Error。
        UINT32    Reserved_146          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC69_U;

// Define the union PCIE_MIEP_PORTLOGIC74_U
// 端口逻辑寄存器
// 0x99E0
typedef union tagMiepPortlogic74
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_wr_c0_imwr_data   : 16  ; // [15..0] The DMA uses this field to generate the data field for the Done or Abort IMWr TLPs it generates for write Channel 0
        UINT32    dma_wr_c1_imwr_data   : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC74_U;

// Define the union PCIE_MIEP_PORTLOGIC75_U
// 端口逻辑寄存器
// 0x9A00
typedef union tagMiepPortlogic75
{
    // Define the struct Bits
    struct
    {
        UINT32    wr_ch_ll_remote_abort_int_en  : 8   ; // [7..0] Write Channel LL Remote Abort Interrupt Enable (LLRAIE)0：禁用Write Channel LL Remote Abort Interrupt;1：使能Write Channel LL Remote Abort Interrupt。
        UINT32    Reserved_149          : 8   ; // [15..8] Reserved
        UINT32    wr_ch_ll_local_abort_int_en  : 8   ; // [23..16] Write Channel LL Local Abort Interrupt Enable (LLLAIE)0：禁用Write Channel LL Local Abort Interrupt;1：使能Write Channel LL Local Abort Interrupt。
        UINT32    Reserved_148          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC75_U;

// Define the union PCIE_MIEP_PORTLOGIC76_U
// 端口逻辑寄存器
// 0x9A10
typedef union tagMiepPortlogic76
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_status       : 8   ; // [7..0] Done Interrupt Status0：未产生完成中断;1：产生完成中断。
        UINT32    Reserved_152          : 8   ; // [15..8] Reserved
        UINT32    abort_int_status      : 8   ; // [23..16] Abort Interrupt Status0：未丢弃出错传输;1：丢弃出错传输。
        UINT32    Reserved_151          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC76_U;

// Define the union PCIE_MIEP_PORTLOGIC77_U
// 端口逻辑寄存器
// 0x9A18
typedef union tagMiepPortlogic77
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_mask         : 8   ; // [7..0] Done Interrupt Mask0：不使用Done Interrupt Mask;1：使用Done Interrupt Mask。
        UINT32    Reserved_154          : 8   ; // [15..8] Reserved
        UINT32    abort_int_mask        : 8   ; // [23..16] Abort Interrupt Mask0：不使用Abort Interrupt Mask;
        UINT32    dma_rd_int_mask       : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC77_U;

// Define the union PCIE_MIEP_PORTLOGIC78_U
// 端口逻辑寄存器
// 0x9A1C
typedef union tagMiepPortlogic78
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_clr          : 8   ; // [7..0] Done Interrupt Clear0：不清除Done Interrupt Status字段;1：清除Done Interrupt Status字段。
        UINT32    Reserved_156          : 8   ; // [15..8] Reserved
        UINT32    abort_int_clr         : 8   ; // [23..16] Abort Interrupt Clear0：不清除Abort Interrupt Status字段;1：清除Abort Interrupt Status字段。
        UINT32    dma_rd_int_clr        : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC78_U;

// Define the union PCIE_MIEP_PORTLOGIC79_U
// 端口逻辑寄存器
// 0x9A24
typedef union tagMiepPortlogic79
{
    // Define the struct Bits
    struct
    {
        UINT32    app_wr_err_det        : 8   ; // [7..0] Application Read Error Detected0：未检测到Application Read Error ;1：检测到Application Read Error。
        UINT32    Reserved_157          : 8   ; // [15..8] Reserved
        UINT32    link_list_fetch_err_det  : 8   ; // [23..16] Linked List Element Fetch Error Detected0：未检测到Linked List Element Fetch Error;1：检测到Linked List Element Fetch Error。
        UINT32    dma_rd_err_low        : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC79_U;

// Define the union PCIE_MIEP_PORTLOGIC80_U
// 端口逻辑寄存器
// 0x9A28
typedef union tagMiepPortlogic80
{
    // Define the struct Bits
    struct
    {
        UINT32    unspt_request         : 8   ; // [7..0] Unsupported Request0：未检测到Unsupported Request;1：检测到Unsupported Request。
        UINT32    completer_abort       : 8   ; // [15..8] Completer Abort0：未检测到Completer Abort;1：检测到Completer Abort。
        UINT32    cpl_time_out          : 8   ; // [23..16] Completion Time Out
        UINT32    dma_rd_err_high       : 8   ; // [31..24] Data Poisoning0：未检测到Data Poisoning;1：检测到Data Poisoning。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC80_U;

// Define the union PCIE_MIEP_PORTLOGIC81_U
// 端口逻辑寄存器
// 0x9A34
typedef union tagMiepPortlogic81
{
    // Define the struct Bits
    struct
    {
        UINT32    remote_abort_int_en   : 8   ; // [7..0] Read Channel LL Remote Abort Interrupt Enable (LLRAIE)0：禁用Read Channel LL Remote Abort Interrupt;1：使能Read Channel LL Remote Abort Interrupt。
        UINT32    Reserved_159          : 8   ; // [15..8] Reserved
        UINT32    local_abort_int_en    : 8   ; // [23..16] Read Channel LL Local Abort Interrupt Enable (LLLAIE)0：禁用Read Channel LL Local Abort Interrupt;1：使能Read Channel LL Local Abort Interrupt。
        UINT32    dma_rd_ll_err_ena     : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC81_U;

// Define the union PCIE_MIEP_PORTLOGIC86_U
// 端口逻辑寄存器
// 0x9A6C
typedef union tagMiepPortlogic86
{
    // Define the struct Bits
    struct
    {
        UINT32    channel_dir           : 3   ; // [2..0] 
        UINT32    Reserved_162          : 28  ; // [30..3] Reserved
        UINT32    dma_ch_con_idx        : 1   ; // [31] Channel Direction0：写通道0;1：读通道0。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC86_U;

// Define the union PCIE_MIEP_PORTLOGIC87_U
// 端口逻辑寄存器
// 0x9A70
typedef union tagMiepPortlogic87
{
    // Define the struct Bits
    struct
    {
        UINT32    cycle_bit             : 1   ; // [0] Cycle Bit (CB)
        UINT32    toggle_cycle_bit      : 1   ; // [1] Toggle Cycle Bit (TCB)
        UINT32    load_link_pointer     : 1   ; // [2] Load Link Pointer (LLP)
        UINT32    local_int_en          : 1   ; // [3] Local Interrupt Enable (LIE)0：禁用Local Interrupt;1：使能Local Interrupt。
        UINT32    remote_int_en         : 1   ; // [4] Remote Interrupt Enable (RIE)0：禁用Remote Interrupt;1：使能Remote Interrupt。
        UINT32    channel_status        : 2   ; // [6..5] Channel Status00：保留;01：Running;10：Halted;11：Stopped。
        UINT32    Reserved_166          : 1   ; // [7] Reserved
        UINT32    consumer_cycle_state  : 1   ; // [8] Consumer Cycle State (CCS)
        UINT32    linked_list_en        : 1   ; // [9] Linked List Enable (LLE)0：禁用Linked List;1：使能Linked List。
        UINT32    Reserved_165          : 2   ; // [11..10] Reserved
        UINT32    func_num_dma          : 5   ; // [16..12] Function Number (FN) for Generated MRd/MWr DMA TLPs
        UINT32    Reserved_164          : 7   ; // [23..17] Reserved
        UINT32    no_snoop              : 1   ; // [24] No Snoop TLP Header Bit (NS)
        UINT32    ro                    : 1   ; // [25] Relaxed Ordering TLP Header Bit (RO)
        UINT32    td                    : 1   ; // [26] Traffic Digest TLP Header Bit (TD)
        UINT32    tc                    : 3   ; // [29..27] Traffic Class TLP Header Bit (TC)
        UINT32    dma_ch_ctrl           : 2   ; // [31..30] Address Translation TLP Header Bit (AT)
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC87_U;

// Define the union PCIE_MIEP_PORTLOGIC93_U
// 端口逻辑寄存器
// 0x9A8C
typedef union tagMiepPortlogic93
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_168          : 2   ; // [1..0] Reserved
        UINT32    dma_ll_ptr_low        : 30  ; // [31..2] Lower Bits of the address of the Linked List Transfer List in local memory
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_MIEP_PORTLOGIC93_U;


/* NTB_Init 模块寄存器基地址 */
#define PCIE_IEP_BASE                             (0x00000000)

/******************************************************************************/
/*                      PhosphorV660 NTB_Init 寄存器定义                      */
/******************************************************************************/
#define PCIE_IEP_DEVICE_VENDOR_ID_REG             (PCIE_IEP_BASE + 0x0)           /* 设备ID和厂商ID */
#define PCIE_IEP_PCISTS_PCICMD_REG                (PCIE_IEP_BASE + 0x4)           /* 控制和状况寄存器 */
#define PCIE_IEP_CCR_RID_REG                      (PCIE_IEP_BASE + 0x8)           /* 类代码和修订版ID */
#define PCIE_IEP_PBAR01_BASE_LOWER_REG            (PCIE_IEP_BASE + 0x10)          /* 基地址寄存器01低32位 */
#define PCIE_IEP_PBAR01_BASE_UPPER_REG            (PCIE_IEP_BASE + 0x14)          /* 基地址寄存器01高32位 */
#define PCIE_IEP_PBAR23_BASE_LOWER_REG            (PCIE_IEP_BASE + 0x18)          /* 基地址寄存器23低32位 */
#define PCIE_IEP_PBAR23_BASE_UPPER_REG            (PCIE_IEP_BASE + 0x1C)          /* 基地址寄存器23低32位 */
#define PCIE_IEP_PBAR45_BASE_LOWER_REG            (PCIE_IEP_BASE + 0x20)          /* 基地址寄存器45高32位 */
#define PCIE_IEP_PBAR45_BASE_UPPER_REG            (PCIE_IEP_BASE + 0x24)          /* 基地址寄存器45高32位 */
#define PCIE_IEP_CARDBUSCISPTR_REG                (PCIE_IEP_BASE + 0x28)          /* Card Bus CIS指针 */
#define PCIE_IEP_SUBSYSTEMID_REG                  (PCIE_IEP_BASE + 0x2C)          /* 子系统Vendor ID */
#define PCIE_IEP_EXPANSIONROM_BASE_ADDR_REG       (PCIE_IEP_BASE + 0x30)          /* 扩展ROM基地址 */
#define PCIE_IEP_CAPPTR_REG                       (PCIE_IEP_BASE + 0x34)          /* 功能指针 */
#define PCIE_IEP_INTERRUPT_REG                    (PCIE_IEP_BASE + 0x3C)          /* 中断引脚，中断线 */
#define PCIE_IEP_MSI_CAPABILITY_REGISTER_REG      (PCIE_IEP_BASE + 0x50)          /* MSI功能寄存器 */
#define PCIE_IEP_MSI_LOWER32_BITADDRESS_REG       (PCIE_IEP_BASE + 0x54)          /* MSI低32位地址寄存器 */
#define PCIE_IEP_MSI_UPPER32_BIT_ADDRESS_REG      (PCIE_IEP_BASE + 0x58)          /* MSI高32位地址寄存器 */
#define PCIE_IEP_MSI_DATA_REG                     (PCIE_IEP_BASE + 0x5C)          /* MSI数据 */
#define PCIE_IEP_MSI_MASK_REG                     (PCIE_IEP_BASE + 0x60)          /* MSI屏蔽寄存器 */
#define PCIE_IEP_MSI_PENDING_REG                  (PCIE_IEP_BASE + 0x64)          /* MSI状态寄存器 */
#define PCIE_IEP_PCIE_CAPABILITY_REGISTER_REG     (PCIE_IEP_BASE + 0x70)          /* PCIe功能寄存器组 */
#define PCIE_IEP_DEVICE_CAPABILITIES_REGISTER_REG  (PCIE_IEP_BASE + 0x74)          /* 设备功能寄存器 */
#define PCIE_IEP_DEVICE_STATUS_REGISTER_REG       (PCIE_IEP_BASE + 0x78)          /* 设备状况和控制寄存器 */
#define PCIE_IEP_LINK_CAPABILITY_REG              (PCIE_IEP_BASE + 0x7C)          /* 链路功能寄存器 */
#define PCIE_IEP_LINK_CONTROL_STATUS_REG          (PCIE_IEP_BASE + 0x80)          /* 链路控制和状况寄存器 */
#define PCIE_IEP_AER_CAP_HEADER_REG               (PCIE_IEP_BASE + 0x100)         /* AER功能寄存器头 */
#define PCIE_IEP_UC_ERROR_STATUS_REG              (PCIE_IEP_BASE + 0x104)         /* 不可修正错误状况寄存器 */
#define PCIE_IEP_UC_ERROR_MASK_REG                (PCIE_IEP_BASE + 0x108)         /* 不可修正错误屏蔽寄存器 */
#define PCIE_IEP_UC_ERROR_SEVERITY_REG            (PCIE_IEP_BASE + 0x10C)         /* 不可修正错误严重程度寄存器 */
#define PCIE_IEP_C_ERROR_STATUS_REG               (PCIE_IEP_BASE + 0x110)         /* 可修正错误状况寄存器 */
#define PCIE_IEP_C_ERROR_MASK_REG                 (PCIE_IEP_BASE + 0x114)         /* 可修正错误屏蔽寄存器 */
#define PCIE_IEP_ADVANCED_ERROR_CAPABILITIES_AND_CONTROL_REG  (PCIE_IEP_BASE + 0x118)         /* AER 功能和控制寄存器 */
#define PCIE_IEP_HEADER_LOG_REGISTERS_1_REG       (PCIE_IEP_BASE + 0x11C)         /* 头日志寄存器1 */
#define PCIE_IEP_HEADER_LOG_REGISTERS_2_REG       (PCIE_IEP_BASE + 0x120)         /* 头日志寄存器2 */
#define PCIE_IEP_HEADER_LOG_REGISTERS_3_REG       (PCIE_IEP_BASE + 0x124)         /* 头日志寄存器3 */
#define PCIE_IEP_HEADER_LOG_REGISTERS_4_REG       (PCIE_IEP_BASE + 0x128)         /* 头日志寄存器4 */
#define PCIE_IEP_TLP_PREFIX_LOGREGISTERS_1_REG    (PCIE_IEP_BASE + 0x130)         /* TLP前缀日志寄存器1 */
#define PCIE_IEP_TLP_PREFIX_LOGREGISTERS_2_REG    (PCIE_IEP_BASE + 0x134)         /* TLP前缀日志寄存器2 */
#define PCIE_IEP_TLP_PREFIX_LOGREGISTERS_3_REG    (PCIE_IEP_BASE + 0x138)         /* TLP前缀日志寄存器3 */
#define PCIE_IEP_TLP_PREFIX_LOGREGISTERS_4_REG    (PCIE_IEP_BASE + 0x13C)         /* TLP前缀日志寄存器4 */
#define PCIE_IEP_NTB_IEP_CFG_SPACE_LOWER_REG      (PCIE_IEP_BASE + 0x700)         /* iEP配置空间低32位地址 */
#define PCIE_IEP_NTB_IEP_CFG_SPACE_UPPER_REG      (PCIE_IEP_BASE + 0x704)         /* iEP配置空间低32位地址 */
#define PCIE_IEP_NTB_IEP_BAR01_CTRL_REG           (PCIE_IEP_BASE + 0x708)         /* 映射到BAR01空间的TLP头控制寄存器 */
#define PCIE_IEP_NTB_IEP_BAR23_CTRL_REG           (PCIE_IEP_BASE + 0x70C)         /* 映射到BAR23空间的TLP头控制寄存器 */
#define PCIE_IEP_NTB_IEP_BAR45_CTRL_REG           (PCIE_IEP_BASE + 0x710)         /* 映射到BAR45空间的TLP头控制寄存器 */
#define PCIE_IEP_MSI_CTRL_ADDRESS_LOWER_REG       (PCIE_IEP_BASE + 0x714)         /* MSI控制器低32位地址 */
#define PCIE_IEP_MSI_CTRL_ADDRESS_UPPER_REG       (PCIE_IEP_BASE + 0x718)         /* MSI控制器低32位地址 */
#define PCIE_IEP_MSI_CTRL_INT_EN_REG              (PCIE_IEP_BASE + 0x71C)         /* MSI Interrupt使能信号 */
#define PCIE_IEP_MSI_CTRL_INT0_MASK_REG           (PCIE_IEP_BASE + 0x720)         /* MSI Interrupt屏蔽信号 */
#define PCIE_IEP_MSI_CTRL_INT_STATUS_REG          (PCIE_IEP_BASE + 0x724)         /* MSI Interrupt状态标志 */
// Define the union PCIE_IEP_Device_Vendor_ID_U
// 设备ID和厂商ID
// 0x0
typedef union tagIepDeviceVendorId
{
    // Define the struct Bits
    struct
    {
        UINT32    Vendor_ID             : 16  ; // [15..0] 厂商ID
        UINT32    Device_ID             : 16  ; // [31..16] 设备ID
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_DEVICE_VENDOR_ID_U;

// Define the union PCIE_IEP_PCISTS_PCICMD_U
// 控制和状况寄存器
// 0x4
typedef union tagIepPcistsPcicmd
{
    // Define the struct Bits
    struct
    {
        UINT32    IO_Space_Enable       : 1   ; // [0] IO地址空间解码器允许，不支持IO访问
        UINT32    Memory_Space_Enable   : 1   ; // [1] 存储器地址空间解码器使能
        UINT32    Bus_Master_Enable     : 1   ; // [2] 总线主控器允许;
        UINT32    SpecialCycleEnable    : 1   ; // [3] PCIe不支持，硬连线为0
        UINT32    Memory_Write_and_Invalidate  : 1   ; // [4] PCIe不支持，硬连线为0
        UINT32    VGA_palette_snoop_Enable  : 1   ; // [5] PCIe不支持，硬连线为0
        UINT32    Parity_Error_Response  : 1   ; // [6] 奇偶校验错误响应，用于控制将Master的数据奇偶校验错误记录在status寄存器，当该bit为0时，status寄存器不会记录该错误。
        UINT32    IDSEL_Stepping_WaitCycle_Control  : 1   ; // [7] PCIe不支持，硬连线为0
        UINT32    SERR_Enable           : 1   ; // [8] 用于控制设备将Non-Fatal和Fatal错误报告给RC
        UINT32    FastBack_to_BackEnable  : 1   ; // [9] 快速背靠背允许，PCIe不适用，为0
        UINT32    Interrupt_Disable     : 1   ; // [10] 中断禁用，控制PCIe设备产生INTx中断消息的能力
        UINT32    Reserved_2            : 5   ; // [15..11] 保留
        UINT32    Reserved_1            : 3   ; // [18..16] 保留
        UINT32    INTx_Status           : 1   ; // [19] 中断状况，表示该功能有个未完成的中断请求
        UINT32    CapabilitiesList      : 1   ; // [20] 功能列表.该比特为1表示存在扩展功能列表。
        UINT32    pcibus66MHzcapable    : 1   ; // [21] 保留
        UINT32    Reserved_0            : 1   ; // [22] 保留
        UINT32    FastBack_to_Back      : 1   ; // [23] 保留
        UINT32    MasterDataParityError  : 1   ; // [24] 主控数据奇偶错误，如果在命令寄存器中设置了奇偶错误允许比特时，如果收到错误的完成或者写请求中毒时，设置该比特
        UINT32    DEVSEL_Timing         : 2   ; // [26..25] PCIe不支持，保留
        UINT32    Signaled_Target_Abort  : 1   ; // [27] 已发送目标异常中断，当充当完成者的功能通过发送完成者异常中断完成状况到请求者要求终止请求时，该比特置为1
        UINT32    Received_Target_Abort  : 1   ; // [28] 已接收目标异常中断，当请求者接收到一个带完成者异常中断完成状况的完成时，设置该比特
        UINT32    Received_Master_Abort  : 1   ; // [29] 已接收控制器异常中断，当请求者接收到一个带未受支持的的请求完成状况时，设置该比特。
        UINT32    Signaled_System_Error  : 1   ; // [30] 已发信号系统错误，当功能发送ERR_FATAL或者ERR_NONFATAL消息，并且命令寄存器中的SEER允许比特为1时，设置该比特
        UINT32    Detected_Parity_Error  : 1   ; // [31] 已发现奇偶错误，不论功能的命令寄存器中的奇偶错误启用比特的状态如何，只要该功能受到一个中毒TLP，就设置该比特。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_PCISTS_PCICMD_U;

// Define the union PCIE_IEP_CCR_RID_U
// 类代码和修订版ID
// 0x8
typedef union tagIepCcrRid
{
    // Define the struct Bits
    struct
    {
        UINT32    Revision_Identification  : 8   ; // [7..0] 修订版ID
        UINT32    Reserved_3            : 8   ; // [15..8] 保留
        UINT32    Sub_Class             : 8   ; // [23..16] 子类代码，在NTB模式下，该寄存器的值硬连线到0x80h表示“其它类型桥设备”
        UINT32    BaseClass             : 8   ; // [31..24] 类代码，桥设备，硬连线到0x06
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_CCR_RID_U;

// Define the union PCIE_IEP_PBAR01_BASE_LOWER_U
// 基地址寄存器01低32位
// 0x10
typedef union tagIepPbar01BaseLower
{
    // Define the struct Bits
    struct
    {
        UINT32    BAR01_Space_Inicator  : 1   ; // [0] 0 =BAR0 is a memory BAR1 =BAR0 is an I/O BARNTB只支持Memory空间，不支持IO空间
        UINT32    BAR01_Type            : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    BAR01_Prefetchable    : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_4            : 12  ; // [15..4] 保留位
        UINT32    pbar01_lower          : 16  ; // [31..16] BAR01基地址低位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_PBAR01_BASE_LOWER_U;

// Define the union PCIE_IEP_PBAR23_BASE_LOWER_U
// 基地址寄存器23低32位
// 0x18
typedef union tagIepPbar23BaseLower
{
    // Define the struct Bits
    struct
    {
        UINT32    pbar23_space_inicator  : 1   ; // [0] 0 =BAR0 is a memory BAR1 =BAR0 is an I/O BAR
        UINT32    pbar23_type           : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    pbar23_prefetchable   : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_6            : 8   ; // [11..4] 保留位
        UINT32    pbar23_lower          : 20  ; // [31..12] BAR23基地址低位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_PBAR23_BASE_LOWER_U;

// Define the union PCIE_IEP_PBAR45_BASE_LOWER_U
// 基地址寄存器45高32位
// 0x20
typedef union tagIepPbar45BaseLower
{
    // Define the struct Bits
    struct
    {
        UINT32    pbar45_space_inicator  : 1   ; // [0] 0 =BAR0 is a memory BAR1 =BAR0 is an I/O BAR
        UINT32    pbar45_type           : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    pbar45_prefetchable   : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_7            : 8   ; // [11..4] 保留位
        UINT32    pbar45_lower          : 20  ; // [31..12] BAR45基地址低位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_PBAR45_BASE_LOWER_U;

// Define the union PCIE_IEP_SubSystemId_U
// 子系统Vendor ID
// 0x2C
typedef union tagIepSubsystemid
{
    // Define the struct Bits
    struct
    {
        UINT32    SubsystemID           : 16  ; // [15..0] 子系统ID
        UINT32    SubsystemVendorID     : 16  ; // [31..16] 子系统厂商ID
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_SubSystemId_U;

// Define the union PCIE_IEP_CapPtr_U
// 功能指针
// 0x34
typedef union tagIepCapptr
{
    // Define the struct Bits
    struct
    {
        UINT32    CapPtr                : 8   ; // [7..0] 功能指针，指向功能MSI
        UINT32    Reserved_10           : 24  ; // [31..8] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_CapPtr_U;

// Define the union PCIE_IEP_Interrupt_U
// 中断引脚，中断线
// 0x3C
typedef union tagIepInterrupt
{
    // Define the struct Bits
    struct
    {
        UINT32    Interrupt_Line        : 8   ; // [7..0] 中断线寄存器，该寄存器保留仅仅是为了荷PCI兼容
        UINT32    Interrupt_Pin         : 8   ; // [15..8] 中断引脚寄存器，NTB Primary侧不支持对RC发送INTx中断
        UINT32    Min_Grant             : 8   ; // [23..16] 硬连线为0
        UINT32    Max_Latency           : 8   ; // [31..24] 硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_Interrupt_U;

// Define the union PCIE_IEP_MSI_Capability_Register_U
// MSI功能寄存器
// 0x50
typedef union tagIepMsiCapabilityRegister
{
    // Define the struct Bits
    struct
    {
        UINT32    CapabilityID          : 8   ; // [7..0] 功能ID，对于MSI，硬连线0x05，只读
        UINT32    Next_Capability_Pointer  : 8   ; // [15..8] 下一个功能指针
        UINT32    MSI_Enabled           : 1   ; // [16] MSI使能
        UINT32    Multiple_Message_Capable  : 3   ; // [19..17] 多种Message功能使能3'b001表示NTB Primary侧能产生1个MSI中断向量，在NTB的应用中，MSI仅仅用于doorbell发送中断
        UINT32    Multiple_Message_Enabled  : 3   ; // [22..20] 多种Message功能使能
        UINT32    MSI_64_EN             : 1   ; // [23] 支持64位地址功能
        UINT32    PVM_EN                : 1   ; // [24] 设备是否支持Per Vector Masking功能1'b0: 不支持1'b1: 支持
        UINT32    Message_Control_Register  : 7   ; // [31..25] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_MSI_Capability_Register_U;

// Define the union PCIE_IEP_MSI_Lower32_bitAddress_U
// MSI低32位地址寄存器
// 0x54
typedef union tagIepMsiLower32Bitaddress
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_13           : 2   ; // [1..0] 保留
        UINT32    Lower32_bitAddress    : 30  ; // [31..2] MSI低32位地址
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_MSI_Lower32_bitAddress_U;

// Define the union PCIE_IEP_MSI_Data_U
// MSI数据
// 0x5C
typedef union tagIepMsiData
{
    // Define the struct Bits
    struct
    {
        UINT32    MSI_Data              : 16  ; // [15..0] MSI数据
        UINT32    Reserved_14           : 16  ; // [31..16] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_MSI_Data_U;

// Define the union PCIE_IEP_MSI_MASK_U
// MSI屏蔽寄存器
// 0x60
typedef union tagIepMsiMask
{
    // Define the struct Bits
    struct
    {
        UINT32    MsiMask               : 1   ; // [0] 屏蔽MSI中断
        UINT32    Reserved_15           : 31  ; // [31..1] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_MSI_MASK_U;

// Define the union PCIE_IEP_MSI_Pending_U
// MSI状态寄存器
// 0x64
typedef union tagIepMsiPending
{
    // Define the struct Bits
    struct
    {
        UINT32    MsiPending            : 1   ; // [0] MSI中断状态标志位
        UINT32    Reserved_16           : 31  ; // [31..1] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_MSI_Pending_U;

// Define the union PCIE_IEP_PCIE_Capability_Register_U
// PCIe功能寄存器组
// 0x70
typedef union tagIepPcieCapabilityRegister
{
    // Define the struct Bits
    struct
    {
        UINT32    Capability_ID         : 8   ; // [7..0] 功能ID，硬连线0x10，表示PCI Express功能，只读
        UINT32    Next_Capability_Pointer  : 8   ; // [15..8] 下一个功能指针
        UINT32    PCIE_Capability_Version  : 4   ; // [19..16] 功能版本
        UINT32    Device_Port_Type      : 4   ; // [23..20] 设备端口类型，0000传统的PCIe EP
        UINT32    Slot_Implemented      : 1   ; // [24] 插槽实现，设置时标志该根端口将连接到附加卡插槽上，不支持，硬连线为0
        UINT32    Interrupt_Message_Number  : 5   ; // [29..25] 中断消息数目，MSI只支持一个中断向量，所以该值为0
        UINT32    Reserved_17           : 2   ; // [31..30] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_PCIE_Capability_Register_U;

// Define the union PCIE_IEP_Device_Capabilities_Register_U
// 设备功能寄存器
// 0x74
typedef union tagIepDeviceCapabilitiesRegister
{
    // Define the struct Bits
    struct
    {
        UINT32    Max_Payload_Size_Supported  : 3   ; // [2..0] 支持最大payload 为512Byte
        UINT32    Phantom_Function_Supported  : 2   ; // [4..3] 仿真器功能支持，硬连线0
        UINT32    Extended_TagField_Supported  : 1   ; // [5] 拓展标记字段支持，支持最大outstanding的深度为32
        UINT32    Endpoint_L0sAcceptable_Latency  : 3   ; // [8..6] 端点L0可接受的延时，不支持，硬连线为0
        UINT32    Endpoint_L1Acceptable_Latency  : 3   ; // [11..9] 端点L1可接受的延时，不支持，硬连线为0
        UINT32    Undefined             : 3   ; // [14..12] 保留
        UINT32    Reserved_20           : 3   ; // [17..15] 保留
        UINT32    Captured_Slot_Power_Limit_Value  : 8   ; // [25..18] 捕获的插槽功率极限值，硬连线0x0，只读
        UINT32    Captured_Slot_Power_Limit_Scale  : 2   ; // [27..26] 捕获的插槽功率极限因子，硬连线0x0，只读
        UINT32    Function_Level_Reset  : 1   ; // [28] Function级的复位，NTB不支持该功能
        UINT32    Reserved_19           : 3   ; // [31..29] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_Device_Capabilities_Register_U;

// Define the union PCIE_IEP_Device_Status_Register_U
// 设备状况和控制寄存器
// 0x78
typedef union tagIepDeviceStatusRegister
{
    // Define the struct Bits
    struct
    {
        UINT32    Correctable_Error_Reporting_Enable  : 1   ; // [0] 可修正错误报告启用
        UINT32    Non_Fatal_Error_Reporting_Enable  : 1   ; // [1] 非致命错误报告启用
        UINT32    Fatal_Error_Reporting_Enable  : 1   ; // [2] 致命错误报告启用
        UINT32    UREnable              : 1   ; // [3] UR错误报告启用
        UINT32    Enable_Relaxed_Ordering  : 1   ; // [4] 启用灵活的顺序，不支持，硬连线为0
        UINT32    Max_Payload_Size      : 3   ; // [7..5] 最大有效载荷
        UINT32    Extended_TagFieldEnable  : 1   ; // [8] 拓展标记字段允许，不支持，硬连线为0
        UINT32    Phantom_Function_Enable  : 1   ; // [9] 仿真功能允许，不支持，硬连线为0
        UINT32    AUXPowerPMEnable      : 1   ; // [10] 辅助电源使能，不支持，硬连线为0
        UINT32    EnableNoSnoop         : 1   ; // [11] 启用无侦测，不支持，硬连线为0
        UINT32    Max_Read_Request_Size  : 3   ; // [14..12] 最大读请求大小，NTB不支持
        UINT32    Reserved_22           : 1   ; // [15] 保留
        UINT32    CorrectableErrorDetected  : 1   ; // [16] 可修正错误检测
        UINT32    Non_FatalErrordetected  : 1   ; // [17] 非致命错误检测
        UINT32    FatalErrorDetected    : 1   ; // [18] 致命错误检测
        UINT32    UnsupportedRequestDetected  : 1   ; // [19] UR检测
        UINT32    AuxPowerDetected      : 1   ; // [20] 辅助电源检测，不支持，硬连线为0
        UINT32    TransactionPending    : 1   ; // [21] 事务待决，不支持，硬连线为0
        UINT32    Reserved_21           : 10  ; // [31..22] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_Device_Status_Register_U;

// Define the union PCIE_IEP_Link_Capability_U
// 链路功能寄存器
// 0x7C
typedef union tagIepLinkCapability
{
    // Define the struct Bits
    struct
    {
        UINT32    Max_Link_Speed        : 4   ; // [3..0] 支持的最大链接速度4'b0001 : 2.5GT/s4'b0010 : 5GT/s4'b0011 : 8GT/s其它值不支持
        UINT32    Max_Link_Width        : 6   ; // [9..4] 支持最大链路宽度，支持最大X8 lane
        UINT32    Active_State_Power_Management  : 2   ; // [11..10] 活动状态电源管理，NTB不支持
        UINT32    L0s_ExitLatency       : 3   ; // [14..12] 保留，NTB不支持
        UINT32    L1_Exit_Latency       : 3   ; // [17..15] 保留，NTB不支持
        UINT32    Clock_Power_Management  : 1   ; // [18] 保留，NTB不支持
        UINT32    Surprise_Down_Error_Report_Cap  : 1   ; // [19] 保留,NTB不支持
        UINT32    Data_Link_Layer_Active_Report_Cap  : 1   ; // [20] 保留,NTB不支持
        UINT32    Link_Bandwidth_Noti_Cap  : 1   ; // [21] 保留,NTB不支持
        UINT32    ASPM_Option_Compliance  : 1   ; // [22] 根据PCIe Spec，固定为1
        UINT32    Reserved_23           : 1   ; // [23] 固定为1
        UINT32    Port_Number           : 8   ; // [31..24] NTB端口号
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_Link_Capability_U;

// Define the union PCIE_IEP_Link_Control_Status_U
// 链路控制和状况寄存器
// 0x80
typedef union tagIepLinkControlStatus
{
    // Define the struct Bits
    struct
    {
        UINT32    Active_State_Power_Management  : 2   ; // [1..0] NTB模式下不支持，硬连线到0
        UINT32    Reserved_26           : 1   ; // [2] 保留
        UINT32    RCB                   : 1   ; // [3] 0表示能返回64B边界的完成报文
        UINT32    Link_Disable          : 1   ; // [4] NTB模式下不支持，硬连线到0
        UINT32    Retrain_Link          : 1   ; // [5] NTB模式下不支持，硬连线到0
        UINT32    Common_Clock_Config   : 1   ; // [6] NTB模式下不支持，硬连线到0
        UINT32    Extended_Sync         : 1   ; // [7] NTB模式下不支持，硬连线到0
        UINT32    Enable_Clock_Pwr_Management  : 1   ; // [8] NTB模式下不支持，硬连线到0
        UINT32    Hw_Auto_Width_Disable  : 1   ; // [9] NTB模式下不支持，硬连线到0
        UINT32    Link_Bandwidth_Management_Int_En  : 1   ; // [10] NTB模式下不支持，硬连线到0
        UINT32    Link_Auto_Bandwidth_Int_En  : 1   ; // [11] NTB模式下不支持，硬连线到0
        UINT32    Reserved_25           : 4   ; // [15..12] 保留
        UINT32    current_link_speed    : 4   ; // [19..16] 协商的链路宽度，可能值为x1/x2/x4/x8
        UINT32    negotiated_link_width  : 6   ; // [25..20] 保留位
        UINT32    Reserved_24           : 1   ; // [26] 链路协商正在进行的状态
        UINT32    link_training         : 1   ; // [27] 表示设备是否使用连接器上提供的参考物理时钟
        UINT32    slot_clock_config     : 1   ; // [28] 链路层的活动状态
        UINT32    data_link_layer_active  : 1   ; // [29] NTB模式下不支持，硬连线到0
        UINT32    link_bandwidth_management_status  : 1   ; // [30] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_status  : 1   ; // [31] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_Link_Control_Status_U;

// Define the union PCIE_IEP_AER_Cap_header_U
// AER功能寄存器头
// 0x100
typedef union tagIepAerCapHeader
{
    // Define the struct Bits
    struct
    {
        UINT32    PCIE_Extended_Capability_ID  : 16  ; // [15..0] PCIe功能ID
        UINT32    Capability_Version    : 4   ; // [19..16] 功能版本号
        UINT32    Next_Capability_Offset  : 12  ; // [31..20] 下一个功能地址偏移
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_AER_Cap_header_U;

// Define the union PCIE_IEP_UC_Error_Status_U
// 不可修正错误状况寄存器
// 0x104
typedef union tagIepUcErrorStatus
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_31           : 1   ; // [0] 保留
        UINT32    Reserved_30           : 3   ; // [3..1] 保留
        UINT32    DataLinkProtocolErrorStatus  : 1   ; // [4] 数据链路层协议错误状况，不支持，硬连线为0
        UINT32    SurpriseDownErrorStatus  : 1   ; // [5] 意外链路断开错误状况，不支持，硬连线为0
        UINT32    Reserved_29           : 6   ; // [11..6] 保留
        UINT32    PoisonedTLPStatus     : 1   ; // [12] 中毒TLP错误状况
        UINT32    FlowControlProtocolErrorStatus  : 1   ; // [13] 不支持，硬连线为0
        UINT32    CompletionTimeoutStatus  : 1   ; // [14] 完成超时错误状况，不支持，硬连线为0
        UINT32    CompleterAbortStatus  : 1   ; // [15] 完成者异常结束错误状况，不支持，硬连线为0
        UINT32    UnexpectedCompletionStatus  : 1   ; // [16] 非预期的完成错误状况，不支持，硬连线为0
        UINT32    ReceiverOverflowStatus  : 1   ; // [17] 接收器溢出错误状况，不支持，硬连线为0
        UINT32    MalformedTLPStatus    : 1   ; // [18] 畸形TLP错误状况
        UINT32    ECRCErrorStatus       : 1   ; // [19] ECRC错误状况，不支持，硬连线为0
        UINT32    UnsupportedRequestErrorStatus  : 1   ; // [20] 不支持请求错误状况
        UINT32    Reserved_28           : 11  ; // [31..21] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_UC_Error_Status_U;

// Define the union PCIE_IEP_UC_Error_Mask_U
// 不可修正错误屏蔽寄存器
// 0x108
typedef union tagIepUcErrorMask
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_35           : 1   ; // [0] 保留
        UINT32    Reserved_34           : 3   ; // [3..1] 保留
        UINT32    DataLinkProtocolErrorMask  : 1   ; // [4] 数据链路层协议错误，不支持，硬连线为0
        UINT32    SurpriseDownErrorMask  : 1   ; // [5] 意外链路断开错误屏蔽，不支持，硬连线为0
        UINT32    Reserved_33           : 6   ; // [11..6] 保留
        UINT32    PoisonedTLPMask       : 1   ; // [12] 中毒TLP错误屏蔽
        UINT32    FlowControlProtocolErrorMask  : 1   ; // [13] 不支持，硬连线为0
        UINT32    CompletionTimeoutMask  : 1   ; // [14] 完成超时错误屏蔽，不支持，硬连线为0
        UINT32    CompleterAbortMask    : 1   ; // [15] 完成者异常结束错误屏蔽，不支持，硬连线为0
        UINT32    UnexpectedCompletionMask  : 1   ; // [16] 非预期的完成错误屏蔽，不支持，硬连线为0
        UINT32    ReceiverOverflowMask  : 1   ; // [17] 接收器溢出错误屏蔽，不支持，硬连线为0
        UINT32    MalformedTLPMask      : 1   ; // [18] 畸形TLP错误屏蔽
        UINT32    ECRCErrorMask         : 1   ; // [19] ECRC错误屏蔽，不支持，硬连线为0
        UINT32    UnsupportedRequestErrorMask  : 1   ; // [20] 不支持请求错误屏蔽
        UINT32    Reserved_32           : 11  ; // [31..21] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_UC_Error_Mask_U;

// Define the union PCIE_IEP_UC_Error_Severity_U
// 不可修正错误严重程度寄存器
// 0x10C
typedef union tagIepUcErrorSeverity
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_39           : 1   ; // [0] 保留
        UINT32    Reserved_38           : 3   ; // [3..1] 保留
        UINT32    DataLinkProtocolErrorSeverity  : 1   ; // [4] 数据链路层协议错误严重程度，不支持
        UINT32    SurpriseDownErrorSeverity  : 1   ; // [5] 意外链路断开错误严重程度，不支持，硬连线为0
        UINT32    Reserved_37           : 6   ; // [11..6] 保留
        UINT32    PoisonedTLPSeverity   : 1   ; // [12] 中毒TLP的严重程度
        UINT32    FlowControlProtocolErrorSeverity  : 1   ; // [13] 不支持
        UINT32    CompletionTimeoutSeverity  : 1   ; // [14] 完成超时严重程度，不支持
        UINT32    CompleterAbortSeverity  : 1   ; // [15] 完成者异常结束严重程度，不支持，硬连线为0
        UINT32    UnexpectedCompletionSeverity  : 1   ; // [16] 非预期的完成严重程度，不支持，硬连线为0
        UINT32    ReceiverOverflowSeverity  : 1   ; // [17] 接收器溢出严重程度，不支持，硬连线为0
        UINT32    MalformedTLPSeverity  : 1   ; // [18] 畸形TLP的严重程度
        UINT32    ECRCErrorSeverity     : 1   ; // [19] ECRC错误的严重程度，不支持，硬连线为0
        UINT32    UnsupportedRequestErrorSeverity  : 1   ; // [20] 不支持请求错误的严重程度
        UINT32    Reserved_36           : 11  ; // [31..21] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_UC_Error_Severity_U;

// Define the union PCIE_IEP_C_Error_Status_U
// 可修正错误状况寄存器
// 0x110
typedef union tagIepCErrorStatus
{
    // Define the struct Bits
    struct
    {
        UINT32    Receiver_Error_Status  : 1   ; // [0] 接收器错误状态，不支持，硬连线为0
        UINT32    Reserved_42           : 5   ; // [5..1] 保留
        UINT32    Bad_TLP_Status        : 1   ; // [6] 坏的TLP状况
        UINT32    Bad_DLLP_Status       : 1   ; // [7] 不支持，硬连线为0
        UINT32    REPLAY_NUM_Rollover_Status  : 1   ; // [8] REPLAY_NUM反转情况,不支持，硬连线为0
        UINT32    Reserved_41           : 3   ; // [11..9] 保留
        UINT32    Replay_Timer_Timeout_Status  : 1   ; // [12] 重放定时器超时状况,不支持，为0
        UINT32    Advisory_Non_Fatal_Error_Status  : 1   ; // [13] 
        UINT32    Reserved_40           : 18  ; // [31..14] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_C_Error_Status_U;

// Define the union PCIE_IEP_C_Error_Mask_U
// 可修正错误屏蔽寄存器
// 0x114
typedef union tagIepCErrorMask
{
    // Define the struct Bits
    struct
    {
        UINT32    Receiver_Error_Mask   : 1   ; // [0] 接收器错误状态屏蔽，不支持，硬连线为0
        UINT32    Reserved_45           : 5   ; // [5..1] 保留
        UINT32    Bad_TLP_Mask          : 1   ; // [6] 坏的TLP状况屏蔽
        UINT32    Bad_DLLP_Mask         : 1   ; // [7] 不支持，硬连线为0
        UINT32    REPLAY_NUMRollover_Mask  : 1   ; // [8] REPLAY_NUM反转情况屏蔽，不支持，硬连线为0
        UINT32    Reserved_44           : 3   ; // [11..9] 保留
        UINT32    Replay_Timer_Timeout_Mask  : 1   ; // [12] 重放定时器超时状况屏蔽，不支持，硬连线为0
        UINT32    Advisory_Non_Fatal_Error_Mask  : 1   ; // [13] 
        UINT32    Reserved_43           : 18  ; // [31..14] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_C_Error_Mask_U;

// Define the union PCIE_IEP_Advanced_Error_Capabilities_and_Control_U
// AER 功能和控制寄存器
// 0x118
typedef union tagIepAdvancedErrorCapabilitiesAndControl
{
    // Define the struct Bits
    struct
    {
        UINT32    First_Error_Pointer   : 5   ; // [4..0] 第一个错误的指针
        UINT32    ECRC_Generation_Capability  : 1   ; // [5] 产生ECRC的功能，不支持，硬连线为0
        UINT32    ECRC_Generation_Enable  : 1   ; // [6] 产生ECRC的功能使能，不支持，硬连线为0
        UINT32    ECRC_Check_Capable    : 1   ; // [7] ECRC校验的功能，不支持，硬连线为0
        UINT32    ECRC_Check_Enable     : 1   ; // [8] ECRC校验的功能，不支持，硬连线为0
        UINT32    Reserved_47           : 2   ; // [10..9] 保留
        UINT32    TLP_Prefix_Log_Present  : 1   ; // [11] 存在TLP_Prefix_Log
        UINT32    Reserved_46           : 20  ; // [31..12] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_Advanced_Error_Capabilities_and_Control_U;

// Define the union PCIE_IEP_NTB_IEP_BAR01_CTRL_U
// 映射到BAR01空间的TLP头控制寄存器
// 0x708
typedef union tagIepNtbIepBar01Ctrl
{
    // Define the struct Bits
    struct
    {
        UINT32    bar01_type            : 5   ; // [4..0] 当地址与BAR01的基地址匹配时，TLP头的TYPE字段将使用该字段
        UINT32    bar01_tc              : 3   ; // [7..5] 当地址与BAR01的基地址匹配时，TLP头的TC字段将使用该字段
        UINT32    bar01_td              : 1   ; // [8] 当地址与BAR01的基地址匹配时，TLP头的TD字段将使用该字段
        UINT32    bar01_attr            : 2   ; // [10..9] 当地址与BAR01的基地址匹配时，TLP头的ATTR字段将使用该字段
        UINT32    Reserved_51           : 5   ; // [15..11] 保留位
        UINT32    bar01_at              : 2   ; // [17..16] 当地址与BAR01的基地址匹配时，TLP头的AT字段将使用该字段
        UINT32    bar01_match_en        : 1   ; // [18] 当该比特置1时，Local CPU发出去的与BAR01基地址匹配的TLP头的相应字段将使用本寄存器定义的字段
        UINT32    Reserved_50           : 13  ; // [31..19] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_NTB_IEP_BAR01_CTRL_U;

// Define the union PCIE_IEP_NTB_IEP_BAR23_CTRL_U
// 映射到BAR23空间的TLP头控制寄存器
// 0x70C
typedef union tagIepNtbIepBar23Ctrl
{
    // Define the struct Bits
    struct
    {
        UINT32    bar23_type            : 5   ; // [4..0] 当地址与BAR23的基地址匹配时，TLP头的TYPE字段将使用该字段
        UINT32    bar23_tc              : 3   ; // [7..5] 当地址与BAR23的基地址匹配时，TLP头的TC字段将使用该字段
        UINT32    bar23_td              : 1   ; // [8] 当地址与BAR23的基地址匹配时，TLP头的TD字段将使用该字段
        UINT32    bar23_attr            : 2   ; // [10..9] 当地址与BAR23的基地址匹配时，TLP头的ATTR字段将使用该字段
        UINT32    Reserved_53           : 5   ; // [15..11] 保留位
        UINT32    bar23_at              : 2   ; // [17..16] 当地址与BAR23的基地址匹配时，TLP头的AT字段将使用该字段
        UINT32    bar23_match_en        : 1   ; // [18] 当该比特置1时，Local CPU发出去的与BAR23基地址匹配的TLP头的相应字段将使用本寄存器定义的字段
        UINT32    Reserved_52           : 13  ; // [31..19] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_NTB_IEP_BAR23_CTRL_U;

// Define the union PCIE_IEP_NTB_IEP_BAR45_CTRL_U
// 映射到BAR45空间的TLP头控制寄存器
// 0x710
typedef union tagIepNtbIepBar45Ctrl
{
    // Define the struct Bits
    struct
    {
        UINT32    bar45_type            : 5   ; // [4..0] 当地址与BAR45的基地址匹配时，TLP头的TYPE字段将使用该字段
        UINT32    bar45_tc              : 3   ; // [7..5] 当地址与BAR45的基地址匹配时，TLP头的TC字段将使用该字段
        UINT32    bar45_td              : 1   ; // [8] 当地址与BAR45的基地址匹配时，TLP头的TD字段将使用该字段
        UINT32    bar45_attr            : 2   ; // [10..9] 当地址与BAR45的基地址匹配时，TLP头的ATTR字段将使用该字段
        UINT32    Reserved_55           : 5   ; // [15..11] 保留位
        UINT32    bar45_at              : 2   ; // [17..16] 当地址与BAR45的基地址匹配时，TLP头的AT字段将使用该字段
        UINT32    bar45_match_en        : 1   ; // [18] 当该比特置1时，Local CPU发出去的与BAR45基地址匹配的TLP头的相应字段将使用本寄存器定义的字段
        UINT32    Reserved_54           : 13  ; // [31..19] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_NTB_IEP_BAR45_CTRL_U;

// Define the union PCIE_IEP_MSI_CTRL_INT_EN_U
// MSI Interrupt使能信号
// 0x71C
typedef union tagIepMsiCtrlIntEn
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_int_en            : 1   ; // [0] MSI中断使能控制信号
        UINT32    Reserved_56           : 31  ; // [31..1] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_MSI_CTRL_INT_EN_U;

// Define the union PCIE_IEP_MSI_CTRL_INT0_MASK_U
// MSI Interrupt屏蔽信号
// 0x720
typedef union tagIepMsiCtrlInt0Mask
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_int_mask          : 1   ; // [0] MSI中断屏蔽信号
        UINT32    Reserved_57           : 31  ; // [31..1] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_MSI_CTRL_INT0_MASK_U;

// Define the union PCIE_IEP_MSI_CTRL_INT_STATUS_U
// MSI Interrupt状态标志
// 0x724
typedef union tagIepMsiCtrlIntStatus
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_int               : 1   ; // [0] 中断状态标志位
        UINT32    Reserved_58           : 31  ; // [31..1] 保留位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_IEP_MSI_CTRL_INT_STATUS_U;

/* PCIE_SYS_CTRL 模块寄存器基地址 */
#define PCI_SYS_BASE           (0x00000000)

/******************************************************************************/
/*                      PhosphorV660 PCIE_SYS_CTRL 寄存器定义                 */
/******************************************************************************/
#define PCIE_CTRL_0_REG  (PCI_SYS_BASE + 0xF8)  /* PCIE系统控制寄存器0 */
#define PCIE_CTRL_1_REG  (PCI_SYS_BASE + 0xFC)  /* PCIE系统控制寄存器1 */
#define PCIE_CTRL_2_REG  (PCI_SYS_BASE + 0x100)  /* PCIE系统控制寄存器2 */
#define PCIE_CTRL_3_REG  (PCI_SYS_BASE + 0x104)  /* PCIE系统控制寄存器3 */
#define PCIE_CTRL_4_REG  (PCI_SYS_BASE + 0x108)  /* PCIE系统控制寄存器4 */
#define PCIE_CTRL_5_REG  (PCI_SYS_BASE + 0x10C)  /* PCIE系统控制寄存器5 */
#define PCIE_CTRL_6_REG  (PCI_SYS_BASE + 0x110)  /* PCIE系统控制寄存器6 */
#define PCIE_CTRL_7_REG  (PCI_SYS_BASE + 0x114)  /* PCIE系统控制寄存器7 */
#define PCIE_CTRL_9_REG  (PCI_SYS_BASE + 0x11C)  /* PCIE系统控制寄存器9 */
#define PCIE_CTRL_10_REG  (PCI_SYS_BASE + 0x120)  /* PCIE系统控制寄存器10 */
#define PCIE_CTRL_11_REG  (PCI_SYS_BASE + 0x124)  /* PCIE系统控制寄存器11 */
#define PCIE_SYS_CTRL12_REG  (PCI_SYS_BASE + 0x0)  /* PCIE的系统控制器12 */
#define PCIE_SYS_CTRL13_REG  (PCI_SYS_BASE + 0x4)  /* PCIE的系统控制器13 */
#define PCIE_SYS_CTRL14_REG  (PCI_SYS_BASE + 0x8)  /* PCIE的系统控制器14 */
#define PCIE_SYS_CTRL15_REG  (PCI_SYS_BASE + 0xC)  /* PCIE的系统控制器15 */
#define PCIE_SYS_CTRL16_REG  (PCI_SYS_BASE + 0x10)  /* PCIE的系统控制器16 */
#define PCIE_SYS_CTRL17_REG  (PCI_SYS_BASE + 0x14)  /* PCIE的系统控制器17 */
#define PCIE_SYS_CTRL18_REG  (PCI_SYS_BASE + 0x18)  /* PCIE的系统控制器18 */
#define PCIE_SYS_CTRL19_REG  (PCI_SYS_BASE + 0x1C)  /* PCIE的系统控制器19 */
#define PCIE_SYS_CTRL20_REG  (PCI_SYS_BASE + 0x20)  /* PCIE的系统控制器20 */
#define PCIE_RD_TAB_SEL                                 BIT31
#define PCIE_RD_TAB_EN                                  BIT30
#define PCIE_SYS_CTRL21_REG  (PCI_SYS_BASE + 0x24)  /* PCIE的系统控制器21 */
#define PCIE_SYS_CTRL22_REG  (PCI_SYS_BASE + 0x28)  /* PCIE的系统控制器22 */
#define PCIE_SYS_CTRL23_REG  (PCI_SYS_BASE + 0x2C)  /* PCIE的系统控制器23 */
#define PCIE_SYS_CTRL24_REG  (PCI_SYS_BASE + 0x1b4)  /* PCIE的系统控制器23 */
#define PCIE_SYS_CTRL28_REG  (PCI_SYS_BASE + 0x1c4)  /* PCIE的系统控制器23 */
#define PCIE_SYS_CTRL29_REG  (PCI_SYS_BASE + 0x1c8)  /* PCIE的系统控制器23 */
#define PCIE_SYS_STATE5_REG  (PCI_SYS_BASE + 0x30)  /* PCIE的系统状态寄存器5 */
#define PCIE_SYS_STATE6_REG  (PCI_SYS_BASE + 0x34)  /* PCIE的系统状态寄存器6 */
#define PCIE_SYS_STATE7_REG  (PCI_SYS_BASE + 0x38)  /* PCIE的系统状态寄存器7 */
#define PCIE_SYS_STATE8_REG  (PCI_SYS_BASE + 0x3C)  /* PCIE的系统状态寄存器8 */
#define PCIE_SYS_STATE9_REG  (PCI_SYS_BASE + 0x40)  /* PCIE的系统状态寄存器9 */
#define PCIE_SYS_STATE10_REG  (PCI_SYS_BASE + 0x44)  /* PCIE的系统状态寄存器10 */
#define PCIE_SYS_STATE11_REG  (PCI_SYS_BASE + 0x48)  /* PCIE的系统状态寄存器11 */
#define PCIE_SYS_STATE12_REG  (PCI_SYS_BASE + 0x4C)  /* PCIE的系统状态寄存器12 */
#define PCIE_SYS_STATE13_REG  (PCI_SYS_BASE + 0x50)  /* PCIE的系统状态寄存器13 */
#define PCIE_SYS_STATE14_REG  (PCI_SYS_BASE + 0x54)  /* PCIE的系统状态寄存器14 */
#define PCIE_SYS_STATE15_REG  (PCI_SYS_BASE + 0x58)  /* PCIE的系统状态寄存器15 */
#define PCIE_SYS_STATE16_REG  (PCI_SYS_BASE + 0x5C)  /* PCIE的系统状态寄存器16 */
#define PCIE_SYS_STATE17_REG  (PCI_SYS_BASE + 0x60)  /* PCIE的系统状态寄存器17 */
#define PCIE_SYS_STATE18_REG  (PCI_SYS_BASE + 0x64)  /* PCIE的系统状态寄存器18 */
#define PCIE_SYS_STATE19_REG  (PCI_SYS_BASE + 0x68)  /* PCIE的系统状态寄存器19 */
#define PCIE_SYS_STATE20_REG  (PCI_SYS_BASE + 0x6C)  /* PCIE的系统状态寄存器20 */
#define PCIE_SYS_STATE21_REG  (PCI_SYS_BASE + 0x70)  /* PCIE的系统状态寄存器21 */
#define PCIE_SYS_STATE22_REG  (PCI_SYS_BASE + 0x74)  /* PCIE的系统状态寄存器22 */
#define PCIE_SYS_STATE23_REG  (PCI_SYS_BASE + 0x78)  /* PCIE的系统状态寄存器23 */
#define PCIE_SYS_STATE24_REG  (PCI_SYS_BASE + 0x7C)  /* PCIE的系统状态寄存器24 */
#define PCIE_SYS_STATE25_REG  (PCI_SYS_BASE + 0x80)  /* PCIE的系统状态寄存器25 */
#define PCIE_SYS_STATE26_REG  (PCI_SYS_BASE + 0x84)  /* PCIE的系统状态寄存器26 */
#define PCIE_SYS_STATE27_REG  (PCI_SYS_BASE + 0x88)  /* PCIE的系统状态寄存器27 */
#define PCIE_SYS_STATE28_REG  (PCI_SYS_BASE + 0x8C)  /* PCIE的系统状态寄存器28 */
#define PCIE_SYS_STATE29_REG  (PCI_SYS_BASE + 0x90)  /* PCIE的系统状态寄存器29 */
#define PCIE_SYS_STATE30_REG  (PCI_SYS_BASE + 0x94)  /* PCIE的系统状态寄存器30 */
#define PCIE_SYS_STATE31_REG  (PCI_SYS_BASE + 0x98)  /* PCIE的系统状态寄存器31 */
#define PCIE_SYS_STATE32_REG  (PCI_SYS_BASE + 0x9C)  /* PCIE的系统状态寄存器32 */
#define PCIE_SYS_STATE33_REG  (PCI_SYS_BASE + 0xA0)  /* PCIE的系统状态寄存器33 */
#define PCIE_SYS_STATE34_REG  (PCI_SYS_BASE + 0xA4)  /* PCIE的系统状态寄存器34 */
#define PCIE_SYS_STATE35_REG  (PCI_SYS_BASE + 0xA8)  /* PCIE的系统状态寄存器35 */
#define PCIE_SYS_STATE36_REG  (PCI_SYS_BASE + 0xAC)  /* PCIE的系统状态寄存器36 */
#define PCIE_SYS_STATE37_REG  (PCI_SYS_BASE + 0xB0)  /* PCIE的系统状态寄存器37 */
#define PCIE_SYS_STATE38_REG  (PCI_SYS_BASE + 0xB4)  /* PCIE的系统状态寄存器38 */
#define PCIE_SYS_STATE39_REG  (PCI_SYS_BASE + 0xB8)  /* PCIE的系统状态寄存器39 */
#define PCIE_SYS_STATE40_REG  (PCI_SYS_BASE + 0xBC)  /* PCIE的系统状态寄存器40 */
#define PCIE_SYS_STATE41_REG  (PCI_SYS_BASE + 0xC0)  /* PCIE的系统状态寄存器41 */
#define PCIE_SYS_STATE42_REG  (PCI_SYS_BASE + 0xC4)  /* PCIE的系统状态寄存器42 */
#define PCIE_SYS_STATE43_REG  (PCI_SYS_BASE + 0xC8)  /* PCIE的系统状态寄存器43 */
#define PCIE_SYS_STATE44_REG  (PCI_SYS_BASE + 0xCC)  /* PCIE的系统状态寄存器44 */
#define PCIE_SYS_STATE45_REG  (PCI_SYS_BASE + 0xD0)  /* PCIE的系统状态寄存器45 */
#define PCIE_SYS_STATE46_REG  (PCI_SYS_BASE + 0xD4)  /* PCIE的系统状态寄存器46 */
#define PCIE_SYS_STATE47_REG  (PCI_SYS_BASE + 0xD8)  /* PCIE的系统状态寄存器47 */
#define PCIE_SYS_STATE48_REG  (PCI_SYS_BASE + 0xDC)  /* PCIE的系统状态寄存器48 */
#define PCIE_SYS_STATE49_REG  (PCI_SYS_BASE + 0xE0)  /* PCIE的系统状态寄存器49 */
#define PCIE_SYS_STATE50_REG  (PCI_SYS_BASE + 0xE4)  /* PCIE的系统状态寄存器50 */
#define PCIE_SYS_STATE51_REG  (PCI_SYS_BASE + 0xE8)  /* PCIE的系统状态寄存器51 */
#define PCIE_SYS_STATE52_REG  (PCI_SYS_BASE + 0xEC)  /* PCIE的系统状态寄存器52 */
#define PCIE_SYS_STATE53_REG  (PCI_SYS_BASE + 0xF0)  /* PCIE的系统状态寄存器53 */
#define PCIE_SYS_STATE54_REG  (PCI_SYS_BASE + 0xF4)  /* PCIE的系统状态寄存器54 */
#define PCIE_STAT_0_REG  (PCI_SYS_BASE + 0x0)  /* PCIE状态寄存器0 */
#define PCIE_STAT_1_REG  (PCI_SYS_BASE + 0x0)  /* PCIE状态寄存器1 */
#define PCIE_STAT_2_REG  (PCI_SYS_BASE + 0x0)  /* PCIE状态寄存器2 */
#define PCIE_STAT_3_REG  (PCI_SYS_BASE + 0x0)  /* PCIE状态寄存器3 */
#define PCIE_STAT_4_REG  (PCI_SYS_BASE + 0x0)  /* PCIE状态寄存器4 */
// Define the union PCIE_CTRL_0_U
// PCIE系统控制寄存器0
// 0xF8
typedef union tagPcieCtrl0
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie2_slv_awmisc_info  : 22  ; // [21..0] pcie2（X1）控制器。
        UINT32    pcie2_slv_resp_err_map  : 6   ; // [27..22] pcie2（X1）控制器。
        UINT32    pcie2_slv_device_type  : 4   ; // [31..28] pcie2（X1）控制器的类型。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_CTRL_0_U;

// Define the union PCIE_CTRL_1_U
// PCIE系统控制寄存器1
// 0xFC
typedef union tagPcieCtrl1
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie2_slv_armisc_info  : 22  ; // [21..0] pcie2（X1）控制器。
        UINT32    pcie2_common_clocks   : 1   ; // [22] pcie2（X1）控制器。
        UINT32    pcie2_app_clk_req_n   : 1   ; // [23] pcie2（X1）控制器 应用层请求时钟有效0：申请时钟;
        UINT32    pcie2_ven_msg_code    : 8   ; // [31..24] pcie2（X1）控制器Vendor定义的Message TLP的Message Core。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_CTRL_1_U;

// Define the union PCIE_CTRL_2_U
// PCIE系统控制寄存器2
// 0x100
typedef union tagPcieCtrl2
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie2_mstr_bmisc_info  : 14  ; // [13..0] pcie2（X1）控制器AXI Master 写响应的misc信息bit[1:0]：AXI response’s attributesbit[2];
        UINT32    pcie2_mstr_rmisc_info  : 12  ; // [25..14] pcie2（X1）控制器AXI Master 读响应的misc信息bit[15:14]：AXI response’s attributes;bit[16]：AXI response with Bad EOT; assigned to signal native PCIecore to drop this response;bit[19:17]：AXI response’s TC;bit[20]：AXI response’s BCM;bit[21]：AXI response’s EP;bit[22]：AXI response’s TD;bit[25:23]：AXI response’s Function number。
        UINT32    pcie2_ven_msi_req     : 1   ; // [26] pcie2（X1）控制器。
        UINT32    pcie2_ven_msi_vector  : 5   ; // [31..27] pcie2（X1）控制器当多Message模式使能的时候，用来调整MSI数据寄存器的最低5Bits;
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_CTRL_2_U;

// Define the union PCIE_CTRL_3_U
// PCIE系统控制寄存器3
// 0x104
typedef union tagPcieCtrl3
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie2_ven_msg_req     : 1   ; // [0] pcie2（X1）控制器。
        UINT32    pcie2_ven_msg_fmt     : 2   ; // [2..1] pcie2（X1）控制器。
        UINT32    pcie2_ven_msg_type    : 5   ; // [7..3] pcie2（X1）控制器。
        UINT32    pcie2_ven_msg_td      : 1   ; // [8] pcie2（X1）控制器。
        UINT32    pcie2_ven_msg_ep      : 1   ; // [9] pcie2（X1）控制器。
        UINT32    pcie2_ven_msg_attr    : 2   ; // [11..10] pcie2（X1）控制器。
        UINT32    pcie2_ven_msg_len     : 10  ; // [21..12] pcie2（X1）控制器。
        UINT32    pcie2_ven_msg_tag     : 8   ; // [29..22] pcie2（X1）控制器。
        UINT32    pcie_mstr_rresp_int_enable  : 1   ; // [30] AXI master读操作口收到总线SLVERR和DECERR响应的中断使能
        UINT32    pcie_mstr_bresp_int_enable  : 1   ; // [31] AXI master写操作口收到总线SLVERR和DECERR响应的中断使能
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_CTRL_3_U;

// Define the union PCIE_CTRL_7_U
// PCIE系统控制寄存器7
// 0x114
typedef union tagPcieCtrl7
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie2_app_init_rst    : 1   ; // [0] pcie2（X1）控制器。
        UINT32    pcie2_app_req_entr_l1  : 1   ; // [1] pcie2（X1）控制器。
        UINT32    pcie2_app_ready_entr_l23  : 1   ; // [2] pcie2（X1）控制器。
        UINT32    pcie2_app_req_exit_l1  : 1   ; // [3] pcie2（X1）控制器。
        UINT32    pcie2_app_req_retry_en  : 1   ; // [4] pcie2（X1）控制器。
        UINT32    pcie2_sys_int         : 1   ; // [5] pcie2（X1）控制器。
        UINT32    pcie2_outband_pwrup_cmd  : 1   ; // [6] pcie2（X1）控制器。
        UINT32    pcie2_app_unlock_msg  : 1   ; // [7] pcie2（X1）控制器。
        UINT32    pcie2_apps_pm_xmt_turnoff  : 1   ; // [8] pcie2（X1）控制器。
        UINT32    pcie2_apps_pm_xmt_pme  : 1   ; // [9] pcie2（X1）控制器。
        UINT32    pcie2_sys_aux_pwr_det  : 1   ; // [10] pcie2（X1）控制器。
        UINT32    pcie2_app_ltssm_enable  : 1   ; // [11] pcie2（X1）控制器。
        UINT32    pcie2_cfg_pwr_ctrler_ctrl_pol  : 1   ; // [12] pcie2（X1）控制器。
        UINT32    Reserved_7            : 1   ; // [13] reserved
        UINT32    pcie2_sys_mrl_sensor_state  : 1   ; // [14] pcie2（X1）控制器。
        UINT32    pcie2_sys_pwr_fault_det  : 1   ; // [15] pcie2（X1）控制器。
        UINT32    pcie2_sys_mrl_sensor_chged  : 1   ; // [16] pcie2（X1）控制器。
        UINT32    Reserved_6            : 1   ; // [17] 保留
        UINT32    pcie2_sys_cmd_cpled_int  : 1   ; // [18] pcie2（X1）控制器。
        UINT32    pcie2_sys_eml_interlock_engaged  : 1   ; // [19] 保留
        UINT32    pcie2_cfg_l1_clk_removal_en  : 1   ; // [20] pcie2（X1）控制器在L1状态是否使能移除参考时钟。
        UINT32    pcie0_int_ctrl        : 8   ; // [28..21] PCIe0(X1)控制器中断屏蔽，高有效[0]:对应cfg_aer_rc_err_int[1]:对应ven_msi_int[2]:对应misc_int[3]:对应cfg_pme_int[4]:选择中断inta共用中断脚[5]:选择中断intb或者MSI共用中断脚[6]:选择中断intc共用中断脚[7]:选择中断intd共用中断脚
        UINT32    pcie_linkdown_auto_rstn_enable  : 1   ; // [29] Linkdown自动复位屏蔽使能 1：屏蔽 0：不屏蔽
        UINT32    pcie_err_bresp_enable  : 1   ; // [30] PCIe0（X1）控制器slv_err_rresp中断使能0：禁止;
        UINT32    pcie_err_rresp_enable  : 1   ; // [31] PCIe0（X1）控制器slv_err_bresp中断使能0：禁止;
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_CTRL_7_U;

// Define the union PCIE_CTRL_9_U
// PCIE系统控制寄存器9
// 0x11C
typedef union tagPcieCtrl9
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_l1_aux_clk_switch_core_clk_gate_en  : 1   ; // [0] 在L1下控制信号从P1到P2的powerdown使能
        UINT32    cfg_l1_mac_powerdown_override_to_p2_en  : 1   ; // [1] 使能控制器可以在L1的状态下aux_clk由PCLK转换为外部提供的低频的空闲状态下的时钟
        UINT32    Reserved_9            : 30  ; // [31..2] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_CTRL_9_U;

// Define the union PCIE_CTRL_10_U
// PCIE系统控制寄存器10
// 0x120
typedef union tagPcieCtrl10
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_aer_rc_err_msi_mask  : 1   ; // [0] AER rc 致命错误中断屏蔽 1:屏蔽 0：不屏蔽
        UINT32    cfg_sys_err_rc_mask   : 1   ; // [1] 系统错误中断屏蔽1:屏蔽 0：不屏蔽
        UINT32    radm_correctable_err_mask  : 1   ; // [2] 可修正错误中断屏蔽1:屏蔽 0：不屏蔽
        UINT32    radm_nonfatal_err_mask  : 1   ; // [3] 非致命错误中断屏蔽1:屏蔽 0：不屏蔽
        UINT32    radm_fatal_err_mask   : 1   ; // [4] 致命错误中断屏蔽1:屏蔽 0：不屏蔽
        UINT32    radm_pm_pme_mask      : 1   ; // [5] PME消息中断屏蔽1:屏蔽 0：不屏蔽
        UINT32    radm_pm_to_ack_mask   : 1   ; // [6] PM ack消息中断屏蔽1:屏蔽 0：不屏蔽
        UINT32    ven_msi_int_mask      : 1   ; // [7] VDM中断屏蔽1:屏蔽 0：不屏蔽
        UINT32    radm_cpl_timeout_mask  : 1   ; // [8] cpl_timeout错误中断屏蔽1:屏蔽 0：不屏蔽
        UINT32    radm_msg_unlock_mask  : 1   ; // [9] radm message unlock 中断屏蔽1:屏蔽 0：不屏蔽
        UINT32    cfg_pme_msi_mask      : 1   ; // [10] PME消息中断屏蔽，1:屏蔽 0：不屏蔽
        UINT32    bridge_flush_not_mask  : 1   ; // [11] bridge_flush_not错误中断屏蔽，1:屏蔽 0：不屏蔽
        UINT32    link_req_rst_not_mask  : 1   ; // [12] Link_down自动复位中断屏蔽，1:屏蔽 0：不屏蔽
        UINT32    pcie_p2_exit_int_mask  : 1   ; // [13] 退出P2状态使能：1为退出;
        UINT32    pcie_rx_lane_flip_en_tmp  : 1   ; // [14] rx lane的lane reversal enale信号
        UINT32    pcie_tx_lane_flip_en_tmp  : 1   ; // [15] tx lane的lane reversal enale信号
        UINT32    radm_pm_turnoff_mask  : 1   ; // [16] PM退出中断屏蔽，1:屏蔽 0：不屏蔽
        UINT32    Reserved_11           : 15  ; // [31..17] reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_CTRL_10_U;

// Define the union PCIE_CTRL_11_U
// PCIE系统控制寄存器11
// 0x124
typedef union tagPcieCtrl11
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_aer_rc_err_msi_clr  : 1   ; // [0] AER错误中断状态清除，写1清除
        UINT32    cfg_sys_err_rc_clr    : 1   ; // [1] 系统错误中断状态清除，写1清除
        UINT32    radm_correctable_err_clr  : 1   ; // [2] 可修正中断状态清除，写1清除
        UINT32    radm_nonfatal_err_clr  : 1   ; // [3] 非致命错误中断状态清除，写1清除
        UINT32    radm_fatal_err_clr    : 1   ; // [4] 致命错误中断状态清除，写1清除
        UINT32    radm_pm_pme_clr       : 1   ; // [5] PME中断状态清除，写1清除
        UINT32    radm_pm_to_ack_clr    : 1   ; // [6] 中断状态清除，写1清除
        UINT32    ven_msi_int_clr       : 1   ; // [7] VDM中断状态清除，写1清除
        UINT32    radm_cpl_timeout_clr  : 1   ; // [8] cpl_timeout中断状态清除，写1清除
        UINT32    radm_msg_unlock_clr   : 1   ; // [9] radm unclock中断状态清除，写1清除
        UINT32    cfg_pme_msi_clr       : 1   ; // [10] PME消息中断状态清除，写1清除
        UINT32    bridge_flush_not_clr  : 1   ; // [11] bridge_flush_not中断状态清除，写1清除
        UINT32    link_req_rst_not_clr  : 1   ; // [12] link_req_rst 中断状态清除，写1清除
        UINT32    pcie_p2_exit_int_clr  : 1   ; // [13] P2退出中断清除使能
        UINT32    pcie_slv_err_int_clr  : 1   ; // [14] PCIe slave口错误中断清除使能
        UINT32    pcie_mstr_err_int_clr  : 1   ; // [15] 清除PCIe master口因收到总线的SLVERR和DECERR响应而产生的中断使能信号
        UINT32    radm_pm_turnoff_clr   : 1   ; // [16] 
        UINT32    cfg_ntb_mode          : 1   ; // [17] 配置控制器工作在NTB模式下
        UINT32    Reserved_13           : 14  ; // [31..18] 
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_CTRL_11_U;

// Define the union PCIE_SYS_CTRL12_U
// PCIE的系统控制器12
// 
typedef union tagPcieSysCtrl12
{
    // Define the struct Bits
    struct
    {
        UINT32    slv_awmisc_info_func_num  : 1   ; // [0] AXI slave写操作的物理功能号
        UINT32    slv_awmisc_info_vfunc_active  : 1   ; // [1] AXI slave写操作的虚拟功能号有效指示信号
        UINT32    slv_awmisc_info_vfunc_num  : 1   ; // [2] AXI slave写操作的虚拟功能号
        UINT32    Reserved_17           : 1   ; // [3] 保留
        UINT32    slv_armisc_info_func_num  : 1   ; // [4] AXI slave读操作的物理功能号
        UINT32    slv_armisc_info_vfunc_active  : 1   ; // [5] AXI slave读操作的虚拟功能号有效指示信号
        UINT32    slv_armisc_info_vfunc_num  : 1   ; // [6] AXI slave读操作的虚拟功能号
        UINT32    Reserved_16           : 1   ; // [7] 保留
        UINT32    slv_awmisc_info_nw    : 1   ; // [8] AXI slave写操作请求的AT No Write域
        UINT32    slv_awmisc_info_ats   : 2   ; // [10..9] AXI slave写操作请求的AT域
        UINT32    slv_armisc_info_nw    : 1   ; // [11] AXI slave读操作请求的AT No Write域
        UINT32    slv_armisc_info_ats   : 2   ; // [13..12] AXI slave读操作请求的AT域
        UINT32    mstr_bmisc_info_ats   : 2   ; // [15..14] 保留
        UINT32    mstr_rmisc_info_ats   : 2   ; // [17..16] 保留
        UINT32    pcie_rfs_ctrl         : 6   ; // [23..18] PCIE的单口RAM时序控制：bit[23:21]:EMA;
        UINT32    pcie_rft_ctrl         : 7   ; // [30..24] PCIE的双口RAM时序控制：bit[30:28]:EMAA;
        UINT32    Reserved_15           : 1   ; // [31] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_CTRL12_U;

// Define the union PCIE_SYS_CTRL16_U
// PCIE的系统控制器16
// 0x10
typedef union tagPcieSysCtrl16
{
    // Define the struct Bits
    struct
    {
        UINT32    app_flr_pf_done       : 1   ; // [0] 指示物理功能的FLR已经完成
        UINT32    app_flr_vf_done       : 2   ; // [2..1] 指示虚拟功能的FLR已经完成
        UINT32    Reserved_23           : 5   ; // [7..3] 保留
        UINT32    ven_msi_vfunc_active  : 1   ; // [8] 指示来自虚拟功能的MSI请求
        UINT32    ven_msi_vfunc_num     : 1   ; // [9] 指示正在发出MSI请求的虚拟功能
        UINT32    ven_msg_vfunc_active  : 1   ; // [10] 指示虚拟功能正在访问VMI
        UINT32    ven_msg_vfunc_num     : 1   ; // [11] 访问VMI接口的虚拟功能的数量
        UINT32    Reserved_22           : 20  ; // [31..12] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_CTRL16_U;

// Define the union PCIE_SYS_CTRL20_U
// PCIE的系统控制器20
// 0x20
typedef union tagPcieSysCtrl20
{
    // Define the struct Bits
    struct
    {
        UINT32    ro_sel                : 1   ; // [0] 通过DBI访问协议的只读寄存器指示信号
        UINT32    dbi_func_num          : 1   ; // [1] 正在通过DBI访问的物理功能号
        UINT32    dbi_vfunc_num         : 1   ; // [2] 正在通过DBI访问的虚拟功能号
        UINT32    dbi_vfunc_active      : 1   ; // [3] 通过DBI访问一个虚拟功能的指示信号
        UINT32    dbi_addr_h20          : 20  ; // [23..4] dbi访问的高20bit地址信息
        UINT32    dbi_bar_num           : 3   ; // [26..24] The BAR number of the current DBI access to the ELBI
        UINT32    dbi_rom_access        : 1   ; // [27] Indicates that the current DBI access to the ELBI is forexpansion ROM.
        UINT32    dbi_io_access         : 1   ; // [28] Indicates that the current DBI access to the ELBI is anI/O access.
        UINT32    memicg_bypass         : 1   ; // [29] mem_wrap中的替换了的memory对应的控制信号
        UINT32    Reserved_28           : 2   ; // [31..30] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_CTRL20_U;

// Define the union PCIE_SYS_CTRL21_U
// PCIE的系统控制器21
// 0x24
typedef union tagPcieSysCtrl21
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie_sys_pre_det_state  : 1   ; // [0] 热插拔相关信号
        UINT32    pcie_sys_atten_button_pressed  : 1   ; // [1] 热插拔相关信号
        UINT32    Reserved_30           : 30  ; // [31..2] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_CTRL21_U;

// Define the union PCIE_SYS_CTRL23_U
// PCIE的系统控制器23
// 0x2C
typedef union tagPcieSysCtrl23
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_35           : 2   ; // [1..0] 
        UINT32    Reserved_34           : 30  ; // [31..2] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_CTRL23_U;

// Define the union PCIE_SYS_STATE5_U
// PCIE的系统状态寄存器5
// 0x30
typedef union tagPcieSysState5
{
    // Define the struct Bits
    struct
    {
        UINT32    mstr_awmisc_info_func_num  : 1   ; // [0] AXI master写请求的物理功能号
        UINT32    mstr_awmisc_info_vfunc_active  : 1   ; // [1] AXI master写请求的虚拟功能号有效指示信号
        UINT32    mstr_awmisc_info_vfunc_num  : 1   ; // [2] AXI master写请求的虚拟功能号
        UINT32    Reserved_39           : 1   ; // [3] 保留
        UINT32    mstr_armisc_info_func_num  : 1   ; // [4] AXI master读请求的物理功能号
        UINT32    mstr_armisc_info_vfunc_active  : 1   ; // [5] AXI master读请求的虚拟功能号有效指示信号
        UINT32    mstr_armisc_info_vfunc_num  : 1   ; // [6] AXI master读请求的虚拟功能号
        UINT32    Reserved_38           : 1   ; // [7] 保留
        UINT32    mstr_awmisc_info_nw   : 1   ; // [8] AXI master写请求的ATS No Write域
        UINT32    mstr_awmisc_info_ats  : 2   ; // [10..9] AXI master写请求的ATS域
        UINT32    mstr_armisc_info_nw   : 1   ; // [11] AXI master读请求的ATS No Write域
        UINT32    mstr_armisc_info_ats  : 2   ; // [13..12] AXI master读请求的ATS域
        UINT32    slv_bmisc_info_ats    : 2   ; // [15..14] AXI slave写请求响应的AT域
        UINT32    slv_rmisc_info_ats    : 2   ; // [17..16] AXI slave读请求响应的AT域
        UINT32    Reserved_37           : 14  ; // [31..18] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE5_U;

// Define the union PCIE_SYS_STATE6_U
// PCIE的系统状态寄存器6
// 0x34
typedef union tagPcieSysState6
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_flr_pf_active     : 1   ; // [0] 当软件写物理功能的初始化FLR寄存器字段时，该bit置位
        UINT32    cfg_flr_vf_active     : 2   ; // [2..1] 当软件写虚拟功能的初始化FLR寄存器字段时，该bit置位
        UINT32    Reserved_41           : 29  ; // [31..3] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE6_U;

// Define the union PCIE_SYS_STATE7_U
// PCIE的系统状态寄存器7
// 0x38
typedef union tagPcieSysState7
{
    // Define the struct Bits
    struct
    {
        UINT32    radm_timeout_vfunc_active  : 1   ; // [0] 虚拟功能的CPL超时有效信号
        UINT32    radm_timeout_vfunc_num  : 1   ; // [1] 指示虚拟功能有一个CPL超时
        UINT32    trgt_timeout_cpl_vfunc_active  : 1   ; // [2] 超时的虚拟功能号指示有效信号
        UINT32    trgt_timeout_cpl_vfunc_num  : 1   ; // [3] 指示超时的虚拟功能号
        UINT32    Reserved_43           : 28  ; // [31..4] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE7_U;

// Define the union PCIE_SYS_STATE11_U
// PCIE的系统状态寄存器11
// 0x48
typedef union tagPcieSysState11
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_msi_64            : 1   ; // [0] 物理功能的MSI能力结构体的64bit地址域指示信号，1个功能1bit
        UINT32    cfg_vf_msi_en         : 2   ; // [2..1] 虚拟功能的MSI能力结构体被使能标志位
        UINT32    cfg_vf_msi_64         : 2   ; // [4..3] 虚拟功能的MSI能力结构体的64bit地址域指示信号，1个虚拟功能1bit
        UINT32    cfg_multi_msi_en      : 3   ; // [7..5] MSI能力结构体的多消息使能域
        UINT32    cfg_vf_multi_msi_en   : 6   ; // [13..8] 虚拟功能的MSI能力结构体的多消息使能域
        UINT32    Reserved_48           : 2   ; // [15..14] 保留
        UINT32    cfg_msi_data          : 16  ; // [31..16] MSI能力结构体的数据寄存器的值
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE11_U;

// Define the union PCIE_SYS_STATE12_U
// PCIE的系统状态寄存器12
// 0x4C
typedef union tagPcieSysState12
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_vf_en             : 1   ; // [0] 指示使能了虚拟功能的物理功能
        UINT32    cfg_ari_fwd_en        : 1   ; // [1] ARI 功能使能标志位。
        UINT32    cfg_vf_bme            : 2   ; // [3..2] 虚拟功能的PCI头里面的控制寄存器的总线master使能域
        UINT32    Reserved_51           : 4   ; // [7..4] 保留
        UINT32    cfg_num_vf            : 16  ; // [23..8] 每一个物理功能的虚拟功能的数量
        UINT32    Reserved_50           : 8   ; // [31..24] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE12_U;

// Define the union PCIE_SYS_STATE20_U
// PCIE的系统状态寄存器20
// 0x6C
typedef union tagPcieSysState20
{
    // Define the struct Bits
    struct
    {
        UINT32    slv_bmisc_info        : 11  ; // [10..0] AXI slave写传输的响应携带的其他的信息，可选字段
        UINT32    slv_rmisc_info        : 11  ; // [21..11] AXI slave读传输的响应携带的其他的信息，可选字段
        UINT32    rtlh_rfc_upd          : 1   ; // [22] 指示控制器收到一个流控更新的DLLP，便于外部的应用软件实现流控
        UINT32    Reserved_60           : 9   ; // [31..23] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE20_U;

// Define the union PCIE_SYS_STATE21_U
// PCIE的系统状态寄存器21
// 0x70
typedef union tagPcieSysState21
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_msix_en           : 1   ; // [0] 物理功能的MSIX能力寄存器的MSIX使能字段
        UINT32    cfg_msix_func_mask    : 1   ; // [1] 物理功能的MSIX能力寄存器的功能掩码字段
        UINT32    cfg_vf_msix_func_mask  : 2   ; // [3..2] 虚拟功能的MSIX能力寄存器的功能掩码字段，bit5和4分别对应VF1和VF0
        UINT32    cfg_vf_msix_en        : 2   ; // [5..4] 虚拟功能的MSIX能力寄存器的MSIX使能字段，bit5和4分别对应VF1和VF0
        UINT32    Reserved_62           : 26  ; // [31..6] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE21_U;

// Define the union PCIE_SYS_STATE22_U
// PCIE的系统状态寄存器22
// 0x74
typedef union tagPcieSysState22
{
    // Define the struct Bits
    struct
    {
        UINT32    lbc_ext_vfunc_active  : 1   ; // [0] 控制器内部的目标虚拟功能号指示有效信号
        UINT32    lbc_ext_vfunc_num     : 1   ; // [1] 指示控制器内部的目标虚拟功能号
        UINT32    lbc_dbi_ack           : 1   ; // [2] 对配置寄存器的读写操作完成指示信号
        UINT32    pcie_mstr_awmisc_info  : 24  ; // [26..3] pcie_mstr_awmisc_info的比特[47:24]：[39:24]: TLP’s requester ID■ [47:40]: TLP’s TAG
        UINT32    Reserved_64           : 5   ; // [31..27] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE22_U;

// Define the union PCIE_SYS_STATE27_U
// PCIE的系统状态寄存器27
// 0x88
typedef union tagPcieSysState27
{
    // Define the struct Bits
    struct
    {
        UINT32    trgt_cpl_timeout      : 1   ; // [0] CPL超时指示信号
        UINT32    trgt_timeout_cpl_func_num  : 1   ; // [1] 超时的CPL的物理功能号
        UINT32    trgt_timeout_cpl_tc   : 3   ; // [4..2] 超时的CPL的TC
        UINT32    trgt_timeout_cpl_attr  : 2   ; // [6..5] 超时的CPL的属性
        UINT32    trgt_timeout_cpl_len  : 12  ; // [18..7] 超时的CPL的长度
        UINT32    trgt_lookup_empty     : 1   ; // [19] 目标CPL的查找表非满指示信号
        UINT32    Reserved_70           : 12  ; // [31..20] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE27_U;

// Define the union PCIE_SYS_STATE28_U
// PCIE的系统状态寄存器28
// 0x8C
typedef union tagPcieSysState28
{
    // Define the struct Bits
    struct
    {
        UINT32    trgt_timeout_lookup_id  : 8   ; // [7..0] 超时的CPL的目标CPL查找表ID
        UINT32    trgt_lookup_id        : 8   ; // [15..8] 接收方向请求TLP的目标CPL查找表ID
        UINT32    radm_timeout_cpl_tag  : 8   ; // [23..16] 超时的CPL的tag域
        UINT32    Reserved_72           : 8   ; // [31..24] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE28_U;

// Define the union PCIE_SYS_STATE29_U
// PCIE的系统状态寄存器29
// 0x90
typedef union tagPcieSysState29
{
    // Define the struct Bits
    struct
    {
        UINT32    trgt_cpl_timeout      : 1   ; // [0] 与系统控制器28的bit0的值重复
        UINT32    radm_timeout_func_num  : 1   ; // [1] 超时的物理功能号
        UINT32    radm_timeout_cpl_tc   : 3   ; // [4..2] 超时的CPL的TC字段
        UINT32    radm_timeout_cpl_attr  : 2   ; // [6..5] 超时的CPL的标志字段
        UINT32    radm_timeout_cpl_len  : 12  ; // [18..7] 超时的CPL的长度（单位为byte）
        UINT32    radm_pm_turnoff       : 1   ; // [19] 控制器收到了一个PME关闭消息的脉冲指示信号
        UINT32    Reserved_74           : 12  ; // [31..20] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE29_U;

// Define the union PCIE_SYS_STATE30_U
// PCIE的系统状态寄存器30
// 0x94
typedef union tagPcieSysState30
{
    // Define the struct Bits
    struct
    {
        UINT32    cfg_pbus_num          : 8   ; // [7..0] 功能的总线号
        UINT32    cfg_pbus_dev_num      : 5   ; // [12..8] 功能的设备号
        UINT32    cfg_link_auto_bw_int  : 1   ; // [13] 当链路状态寄存器的bit15更新且链路控制寄存器的bit11被使能时，该寄存器拉高
        UINT32    cfg_bw_mgt_int        : 1   ; // [14] 当链路状态寄存器的bit14更新且链路控制寄存器的bit10被使能时，该寄存器拉高
        UINT32    Reserved_76           : 17  ; // [31..15] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE30_U;

// Define the union PCIE_SYS_STATE32_U
// PCIE的系统状态寄存器32
// 0x9C
typedef union tagPcieSysState32
{
    // Define the struct Bits
    struct
    {
        UINT32    mstr_awmisc_info_dma  : 6   ; // [5..0] AXI 写Master传输的DMA bit
        UINT32    mstr_armisc_info_dma  : 6   ; // [11..6] AXI 读Master传输的DMA bit
        UINT32    cfg_hw_auto_sp_dis    : 1   ; // [12] 自动速率禁止
        UINT32    link_timeout_flush_not  : 1   ; // [13] slave接口正在排空发送请求的指示位
        UINT32    mac_phy_clk_req_n     : 1   ; // [14] 时钟请求信号
        UINT32    wake_ref_rst_n        : 1   ; // [15] 指示wake的译码/编码的复位
        UINT32    pcie_wake             : 1   ; // [16] 控制器wake指示信号
        UINT32    Reserved_79           : 15  ; // [31..17] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE32_U;

// Define the union PCIE_SYS_STATE39_U
// PCIE的系统状态寄存器39
// 0xB8
typedef union tagPcieSysState39
{
    // Define the struct Bits
    struct
    {
        UINT32    radm_msg_unlock_reqid  : 16  ; // [15..0] 用于记录radm_msg_unlock_reqid
        UINT32    radm_nonfatal_err_reqid  : 16  ; // [31..16] 用于记录radm_nonfatal_err_reqid
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE39_U;

// Define the union PCIE_SYS_STATE44_U
// PCIE的系统状态寄存器44
// 0xCC
typedef union tagPcieSysState44
{
    // Define the struct Bits
    struct
    {
        UINT32    radm_unlock_reqid     : 16  ; // [15..0] 用于记录radm_unlock_reqid
        UINT32    radm_nonfatal_err_reqid  : 16  ; // [31..16] 用于记录radm_nonfatal_err_reqid
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE44_U;

// Define the union PCIE_SYS_STATE49_U
// PCIE的系统状态寄存器49
// 0xE0
typedef union tagPcieSysState49
{
    // Define the struct Bits
    struct
    {
        UINT32    radm_pm_pme_reqid     : 16  ; // [15..0] 用于记录radm_pm_pme_reqid
        UINT32    radm_pm_ack_to_reqid  : 16  ; // [31..16] 用于记录radm_pm_ack_to_reqid
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_SYS_STATE49_U;

// Define the union PCIE_STAT_0_U
// PCIE状态寄存器0
// 由sub_sys_state分配地址
typedef union tagPcieStat0
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie2_gm_cmposer_lookup_err  : 1   ; // [0] pcie2（X1）控制器。
        UINT32    pcie2_radmx_cmposer_lookup_err  : 1   ; // [1] pcie2（X1）控制器。
        UINT32    pcie2_cfg_pwr_ind     : 2   ; // [3..2] pcie2（X1）控制器。
        UINT32    pcie2_cfg_atten_ind   : 2   ; // [5..4] pcie2（X1）控制器。
        UINT32    pcie2_cfg_pwr_ctrler_ctrl  : 1   ; // [6] pcie2（X1）控制器。
        UINT32    pcie2_pm_xtlh_block_tlp  : 1   ; // [7] pcie2（X1）控制器。
        UINT32    pcie2_cfg_mem_space_en  : 1   ; // [8] pcie2（X1）控制器。
        UINT32    pcie2_cfg_rcb         : 1   ; // [9] pcie2（X1）控制器。
        UINT32    pcie2_rdlh_link_up    : 1   ; // [10] pcie2（X1）控制器。
        UINT32    pcie2_pm_curnt_state  : 3   ; // [13..11] pcie2（X1）控制器。
        UINT32    pcie2_cfg_aer_rc_err_int  : 1   ; // [14] pcie2（X1）控制器当一个错误产生，导致Root Error Status寄存器中的某一bit置位，并且对应的Root Error Command寄存器中的使能bit有效，那么就有效这个信号;0：有效;1：无效。
        UINT32    Reserved_106          : 1   ; // [15] 保留
        UINT32    pcie2_cfg_aer_int_msg_num  : 5   ; // [20..16] pcie2（X1）控制器当MSI或者MSI-X使能的时候才有效，来自于Root Error Status的[31：27]bit。
        UINT32    Reserved_105          : 1   ; // [21] 保留
        UINT32    pcie2_xmlh_link_up    : 1   ; // [22] pcie2（X1）控制器。
        UINT32    pcie2_wake            : 1   ; // [23] pcie2（X1）控制器。
        UINT32    pcie2_cfg_eml_control  : 1   ; // [24] pcie2（X1）控制器。
        UINT32    pcie2_hp_pme          : 1   ; // [25] pcie2（X1）控制器。
        UINT32    pcie2_hp_int          : 1   ; // [26] pcie2（X1）控制器。
        UINT32    pcie2_hp_msi          : 1   ; // [27] pcie2（X1）控制器。
        UINT32    pcie2_pm_status       : 1   ; // [28] PCIE（X2）控制器。
        UINT32    pcie2_ref_clk_req_n   : 1   ; // [29] PCIE（X2）控制器。
        UINT32    Reserved_104          : 2   ; // [31..30] 保留。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_STAT_0_U;

// Define the union PCIE_STAT_1_U
// PCIE状态寄存器1
// 由sub_sys_state分配地址
typedef union tagPcieStat1
{
    // Define the struct Bits
    struct
    {
        UINT32    axi_parity_errs_reg   : 4   ; // [3..0] 指示当前PCIe控制器的AXI bridge的地址总线上检测到一个奇偶错误[3]：在client1_addr通道上检测到一个奇偶错误[2]：在radmx_addr通道上检测到一个奇偶错误[1]：在slv_req_addr通道上检测到一个奇偶错误[0]：在mstr_req_addr通道上检测到一个奇偶错误
        UINT32    app_parity_errs_reg   : 3   ; // [6..4] 指示当前PCIe控制器内部检测到一个奇偶错误[6]：在XTLH通道上检测到一个奇偶错误[5]：在XADM通道上检测到一个奇偶错误[4]：在RADM通道上检测到一个奇偶错误
        UINT32    pm_linkst_in_l1       : 1   ; // [7] 指示当前处于电源L1状态
        UINT32    pm_linkst_in_l2       : 1   ; // [8] 指示当前处于电源L2状态
        UINT32    pm_linkst_l2_exit     : 1   ; // [9] 指示电源正在退出L2状态
        UINT32    mac_phy_power_down    : 2   ; // [11..10] 指示PCIe控制器当前控制PHY的PM状态00：P0（L0，正常状态，全功耗状态）01：P0s（L0s，节电状态，恢复到正常状态时间短）10：P1（L1，更低节电状态，恢复到正常状态时间长）11：P2（L2，最低节电状态）
        UINT32    radm_correctabl_err_reg  : 1   ; // [12] 指示PCIe控制器当前收到一个ERR_COR消息
        UINT32    radm_nonfatal_err_reg  : 1   ; // [13] 指示PCIe控制器当前收到一个ERR_NONFATAL消息
        UINT32    radm_fatal_err_reg    : 1   ; // [14] 指示PCIe控制器当前收到一个ERR_FATAL消息
        UINT32    radm_pm_to_pme_reg    : 1   ; // [15] 指示PCIe控制器当前收到一个PME_PM消息
        UINT32    radm_pm_to_ack_reg    : 1   ; // [16] 指示PCIe控制器当前收到一个PME_TO_ACK消息
        UINT32    radm_cpl_timeout_reg  : 1   ; // [17] 指示PCIe控制器当前检测到cpl_timeout
        UINT32    radm_msg_unlock_reg   : 1   ; // [18] 指示PCIe控制器当前收到一个MSG_UNLOCK消息
        UINT32    cfg_pme_msi_reg       : 1   ; // [19] 当下面条件成立：MSI/MSI-X有效Root Control寄存器相应PME Enable bit有效Root Status寄存器相应PME bit有效
        UINT32    bridge_flush_not_reg  : 1   ; // [20] 指示PCIe控制器的处于graceful复位状态
        UINT32    link_req_rst_not_reg  : 1   ; // [21] 指示PCIe控制器检测到链路异常后，进入link down，申请自动复位状态
        UINT32    pcie2_cfg_aer_rc_err_msi  : 1   ; // [22] pcie2（X1）控制器当下面的条件都满足的时候，有效这个信号一个时钟cycleMSI or MSI-X is enabled.A reported error condition causes a bit to be set in theRoot Error Status register.The associated error message reporting enable bit isset in the Root Error Command register.
        UINT32    pcie2_cfg_sys_err_rc  : 1   ; // [23] pcie2（X1）控制器。
        UINT32    Reserved_107          : 8   ; // [31..24] 保留。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_STAT_1_U;

// Define the union PCIE_STAT_3_U
// PCIE状态寄存器3
// 由sub_sys_state分配地址
typedef union tagPcieStat3
{
    // Define the struct Bits
    struct
    {
        UINT32    radm_msg_req_id       : 16  ; // [15..0] Message的req_id
        UINT32    Reserved_108          : 16  ; // [31..16] 保留。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_STAT_3_U;

// Define the union PCIE_STAT_4_U
// PCIE状态寄存器4
// 由sub_sys_state分配地址
typedef union tagPcieStat4
{
    // Define the struct Bits
    struct
    {
        UINT32    ltssm_state           : 6   ; // [5..0] PCIE链路状态机
        UINT32    mac_phy_rate          : 2   ; // [7..6] 链路协商速率00:2.5Gbps01:5Gbps10:8Gbps
        UINT32    pcie_slv_err_int_state  : 1   ; // [8] slave err的中断状态
        UINT32    retry_sram_addr       : 10  ; // [18..9] Retrybuffer的地址
        UINT32    pcie_mstr_rresp_int_state  : 1   ; // [19] slave rresp err中断
        UINT32    pcie_mstr_bresp_int_state  : 1   ; // [20] master bresp err中断
        UINT32    pcie_radm_inta_int_state  : 1   ; // [21] INTd中断状态
        UINT32    pcie_radm_intb_int_state  : 1   ; // [22] INTc中断状态
        UINT32    pcie_radm_intc_int_state  : 1   ; // [23] INTb中断状态
        UINT32    pcie_radm_intd_int_state  : 1   ; // [24] INTa中断状态
        UINT32    pme_int_state         : 1   ; // [25] PME消息中断状态
        UINT32    radm_vendr_msg_int_state  : 1   ; // [26] VDM中断状态
        UINT32    Reserved_109          : 5   ; // [31..27] 保留。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_STAT_4_U;

/* PCIE_MCAST_CFG_REG 模块寄存器基地址 */
#define PCIE_MUL_BASE                             (0x1000)

/******************************************************************************/
/*                      PhosphorV660 PCIE_MCAST_CFG_REG 寄存器定义            */
/******************************************************************************/
#define PCIE_MUL_MC_CTRL_REG                      (PCIE_MUL_BASE + 0x0)           /* 多播控制寄存器 */
#define PCIE_MUL_CFG_WIN0_BAR_LOWER_REG           (PCIE_MUL_BASE + 0x4)           /* 窗口0基地址低32位 */
#define PCIE_MUL_CFG_WIN0_BAR_UPPER_REG           (PCIE_MUL_BASE + 0x8)           /* 窗口0基地址高32位 */
#define PCIE_MUL_CFG_WIN1_BAR_LOWER_REG           (PCIE_MUL_BASE + 0xC)           /* 窗口1基地址低32位 */
#define PCIE_MUL_CFG_WIN1_BAR_UPPER_REG           (PCIE_MUL_BASE + 0x10)          /* 窗口1基地址高32位 */
#define PCIE_MUL_CFG_WIN2_BAR_LOWER_REG           (PCIE_MUL_BASE + 0x14)          /* 窗口2基地址低32位 */
#define PCIE_MUL_CFG_WIN2_BAR_UPPER_REG           (PCIE_MUL_BASE + 0x18)          /* 窗口2基地址高32位 */
#define PCIE_MUL_CFG_WIN3_BAR_LOWER_REG           (PCIE_MUL_BASE + 0x1C)          /* 窗口3基地址低32位 */
#define PCIE_MUL_CFG_WIN3_BAR_UPPER_REG           (PCIE_MUL_BASE + 0x20)          /* 窗口3基地址高32位 */
#define PCIE_MUL_CFG_WIN4_BAR_LOWER_REG           (PCIE_MUL_BASE + 0x24)          /* 窗口4基地址低32位 */
#define PCIE_MUL_CFG_WIN4_BAR_UPPER_REG           (PCIE_MUL_BASE + 0x28)          /* 窗口4基地址高32位 */
#define PCIE_MUL_CFG_WIN5_BAR_LOWER_REG           (PCIE_MUL_BASE + 0x2C)          /* 窗口5基地址低32位 */
#define PCIE_MUL_CFG_WIN5_BAR_UPPER_REG           (PCIE_MUL_BASE + 0x30)          /* 窗口5基地址高32位 */
#define PCIE_MUL_CFG_WIN6_BAR_LOWER_REG           (PCIE_MUL_BASE + 0x34)          /* 窗口6基地址低32位 */
#define PCIE_MUL_CFG_WIN6_BAR_UPPER_REG           (PCIE_MUL_BASE + 0x38)          /* 窗口6基地址高32位 */
#define PCIE_MUL_CFG_WIN7_BAR_LOWER_REG           (PCIE_MUL_BASE + 0x3C)          /* 窗口7基地址低32位 */
#define PCIE_MUL_CFG_WIN7_BAR_UPPER_REG           (PCIE_MUL_BASE + 0x40)          /* 窗口7基地址高32位 */
#define PCIE_MUL_CFG_WIN8_BAR_LOWER_REG           (PCIE_MUL_BASE + 0x44)          /* 窗口8基地址低32位 */
#define PCIE_MUL_CFG_WIN8_BAR_UPPER_REG           (PCIE_MUL_BASE + 0x48)          /* 窗口8基地址高32位 */
#define PCIE_MUL_CFG_WIN9_BAR_LOWER_REG           (PCIE_MUL_BASE + 0x4C)          /* 窗口9基地址低32位 */
#define PCIE_MUL_CFG_WIN9_BAR_UPPER_REG           (PCIE_MUL_BASE + 0x50)          /* 窗口9基地址高32位 */
#define PCIE_MUL_CFG_WIN10_BAR_LOWER_REG          (PCIE_MUL_BASE + 0x54)          /* 窗口10基地址低32位 */
#define PCIE_MUL_CFG_WIN10_BAR_UPPER_REG          (PCIE_MUL_BASE + 0x58)          /* 窗口10基地址高32位 */
#define PCIE_MUL_CFG_WIN11_BAR_LOWER_REG          (PCIE_MUL_BASE + 0x5C)          /* 窗口11基地址低32位 */
#define PCIE_MUL_CFG_WIN11_BAR_UPPER_REG          (PCIE_MUL_BASE + 0x60)          /* 窗口11基地址高32位 */
#define PCIE_MUL_CFG_WIN12_BAR_LOWER_REG          (PCIE_MUL_BASE + 0x64)          /* 窗口12基地址低32位 */
#define PCIE_MUL_CFG_WIN12_BAR_UPPER_REG          (PCIE_MUL_BASE + 0x68)          /* 窗口12基地址高32位 */
#define PCIE_MUL_CFG_WIN13_BAR_LOWER_REG          (PCIE_MUL_BASE + 0x6C)          /* 窗口13基地址低32位 */
#define PCIE_MUL_CFG_WIN13_BAR_UPPER_REG          (PCIE_MUL_BASE + 0x70)          /* 窗口13基地址高32位 */
#define PCIE_MUL_CFG_WIN14_BAR_LOWER_REG          (PCIE_MUL_BASE + 0x74)          /* 窗口14基地址低32位 */
#define PCIE_MUL_CFG_WIN14_BAR_UPPER_REG          (PCIE_MUL_BASE + 0x78)          /* 窗口14基地址高32位 */
#define PCIE_MUL_CFG_WIN15_BAR_LOWER_REG          (PCIE_MUL_BASE + 0x7C)          /* 窗口15基地址低32位 */
#define PCIE_MUL_CFG_WIN15_BAR_UPPER_REG          (PCIE_MUL_BASE + 0x80)          /* 窗口15基地址高32位 */
#define PCIE_MUL_CFG_WIN0_SIZE_REG                (PCIE_MUL_BASE + 0x84)          /* 窗口0的大小 */
#define PCIE_MUL_CFG_WIN1_SIZE_REG                (PCIE_MUL_BASE + 0x88)          /* 窗口1的大小 */
#define PCIE_MUL_CFG_WIN2_SIZE_REG                (PCIE_MUL_BASE + 0x8C)          /* 窗口2的大小 */
#define PCIE_MUL_CFG_WIN3_SIZE_REG                (PCIE_MUL_BASE + 0x90)          /* 窗口3的大小 */
#define PCIE_MUL_CFG_WIN4_SIZE_REG                (PCIE_MUL_BASE + 0x94)          /* 窗口4的大小 */
#define PCIE_MUL_CFG_WIN5_SIZE_REG                (PCIE_MUL_BASE + 0x98)          /* 窗口5的大小 */
#define PCIE_MUL_CFG_WIN6_SIZE_REG                (PCIE_MUL_BASE + 0x9C)          /* 窗口6的大小 */
#define PCIE_MUL_CFG_WIN7_SIZE_REG                (PCIE_MUL_BASE + 0xA0)          /* 窗口7的大小 */
#define PCIE_MUL_CFG_WIN8_SIZE_REG                (PCIE_MUL_BASE + 0xA4)          /* 窗口8的大小 */
#define PCIE_MUL_CFG_WIN9_SIZE_REG                (PCIE_MUL_BASE + 0xA8)          /* 窗口9的大小 */
#define PCIE_MUL_CFG_WIN10_SIZE_REG               (PCIE_MUL_BASE + 0xAC)          /* 窗口10的大小 */
#define PCIE_MUL_CFG_WIN11_SIZE_REG               (PCIE_MUL_BASE + 0xB0)          /* 窗口11的大小 */
#define PCIE_MUL_CFG_WIN12_SIZE_REG               (PCIE_MUL_BASE + 0xB4)          /* 窗口12的大小 */
#define PCIE_MUL_CFG_WIN13_SIZE_REG               (PCIE_MUL_BASE + 0xB8)          /* 窗口13的大小 */
#define PCIE_MUL_CFG_WIN14_SIZE_REG               (PCIE_MUL_BASE + 0xBC)          /* 窗口14的大小 */
#define PCIE_MUL_CFG_WIN15_SIZE_REG               (PCIE_MUL_BASE + 0xC0)          /* 窗口15的大小 */
#define PCIE_MUL_CFG_WIN0_XLAT_BASE_LOWER_REG     (PCIE_MUL_BASE + 0xC4)          /* 窗口0转换地址低32位 */
#define PCIE_MUL_CFG_WIN0_XLAT_BASE_UPPER_REG     (PCIE_MUL_BASE + 0xC8)          /* 窗口0转换地址高32位 */
#define PCIE_MUL_CFG_WIN1_XLAT_BASE_LOWER_REG     (PCIE_MUL_BASE + 0xCC)          /* 窗口1转换地址低32位 */
#define PCIE_MUL_CFG_WIN1_XLAT_BASE_UPPER_REG     (PCIE_MUL_BASE + 0xD0)          /* 窗口1转换地址高32位 */
#define PCIE_MUL_CFG_WIN2_XLAT_BASE_LOWER_REG     (PCIE_MUL_BASE + 0xD4)          /* 窗口2转换地址低32位 */
#define PCIE_MUL_CFG_WIN2_XLAT_BASE_UPPER_REG     (PCIE_MUL_BASE + 0xD8)          /* 窗口2转换地址高32位 */
#define PCIE_MUL_CFG_WIN3_XLAT_BASE_LOWER_REG     (PCIE_MUL_BASE + 0xDC)          /* 窗口3转换地址低32位 */
#define PCIE_MUL_CFG_WIN3_XLAT_BASE_UPPER_REG     (PCIE_MUL_BASE + 0xE0)          /* 窗口3转换地址高32位 */
#define PCIE_MUL_CFG_WIN4_XLAT_BASE_LOWER_REG     (PCIE_MUL_BASE + 0xE4)          /* 窗口4转换地址低32位 */
#define PCIE_MUL_CFG_WIN4_XLAT_BASE_UPPER_REG     (PCIE_MUL_BASE + 0xE8)          /* 窗口3转换地址高32位 */
#define PCIE_MUL_CFG_WIN5_XLAT_BASE_LOWER_REG     (PCIE_MUL_BASE + 0xEC)          /* 窗口5转换地址低32位 */
#define PCIE_MUL_CFG_WIN5_XLAT_BASE_UPPER_REG     (PCIE_MUL_BASE + 0xF0)          /* 窗口5转换地址高32位 */
#define PCIE_MUL_CFG_WIN6_XLAT_BASE_LOWER_REG     (PCIE_MUL_BASE + 0xF4)          /* 窗口6转换地址低32位 */
#define PCIE_MUL_CFG_WIN6_XLAT_BASE_UPPER_REG     (PCIE_MUL_BASE + 0xF8)          /* 窗口6转换地址高32位 */
#define PCIE_MUL_CFG_WIN7_XLAT_LOWER_REG          (PCIE_MUL_BASE + 0xFC)          /* 窗口7转换地址低32位 */
#define PCIE_MUL_CFG_WIN7_XLAT_UPPER_REG          (PCIE_MUL_BASE + 0x100)         /* 窗口7转换地址高32位 */
#define PCIE_MUL_CFG_WIN8_XLAT_LOWER_REG          (PCIE_MUL_BASE + 0x104)         /* 窗口8转换地址低32位 */
#define PCIE_MUL_CFG_WIN8_XLAT_UPPER_REG          (PCIE_MUL_BASE + 0x108)         /* 窗口8转换地址高32位 */
#define PCIE_MUL_CFG_WIN9_XLAT_LOWER_REG          (PCIE_MUL_BASE + 0x10C)         /* 窗口9转换地址低32位 */
#define PCIE_MUL_CFG_WIN9_XLAT_UPPER_REG          (PCIE_MUL_BASE + 0x110)         /* 窗口9转换地址高32位 */
#define PCIE_MUL_CFG_WIN10_XLAT_LOWER_REG         (PCIE_MUL_BASE + 0x114)         /* 窗口10转换地址低32位 */
#define PCIE_MUL_CFG_WIN10_XLAT_UPPER_REG         (PCIE_MUL_BASE + 0x118)         /* 窗口10转换地址高32位 */
#define PCIE_MUL_CFG_WIN11_XLAT_LOWER_REG         (PCIE_MUL_BASE + 0x11C)         /* 窗口11转换地址低32位 */
#define PCIE_MUL_CFG_WIN11_XLAT_UPPER_REG         (PCIE_MUL_BASE + 0x120)         /* 窗口11转换地址高32位 */
#define PCIE_MUL_CFG_WIN12_XLAT_LOWER_REG         (PCIE_MUL_BASE + 0x124)         /* 窗口12转换地址低32位 */
#define PCIE_MUL_CFG_WIN12_XLAT_UPPER_REG         (PCIE_MUL_BASE + 0x128)         /* 窗口12转换地址高32位 */
#define PCIE_MUL_CFG_WIN13_XLAT_LOWER_REG         (PCIE_MUL_BASE + 0x12C)         /* 窗口13转换地址低32位 */
#define PCIE_MUL_CFG_WIN13_XLAT_UPPER_REG         (PCIE_MUL_BASE + 0x130)         /* 窗口13转换地址高32位 */
#define PCIE_MUL_CFG_WIN14_XLAT_LOWER_REG         (PCIE_MUL_BASE + 0x134)         /* 窗口14转换地址低32位 */
#define PCIE_MUL_CFG_WIN14_XLAT_UPPER_REG         (PCIE_MUL_BASE + 0x138)         /* 窗口14转换地址高32位 */
#define PCIE_MUL_CFG_WIN15_XLAT_LOWER_REG         (PCIE_MUL_BASE + 0x13C)         /* 窗口15转换地址低32位 */
#define PCIE_MUL_CFG_WIN15_XLAT_UPPER_REG         (PCIE_MUL_BASE + 0x140)         /* 窗口15转换地址高32位 */
#define PCIE_MUL_CFG_WIN_XLAT_EN_REG              (PCIE_MUL_BASE + 0x144)         /* 窗口地址转换使能 */
#define PCIE_MUL_CFG_MCAST_CMD_TIMEOUT_REG        (PCIE_MUL_BASE + 0x148)         /* 多播命令超时计数器 */
#define PCIE_MUL_CFG_INT_STATUS_REG               (PCIE_MUL_BASE + 0x14C)         /* 中断状态寄存器 */
#define PCIE_MUL_CFG_INJECT_ECC_ERR_REG           (PCIE_MUL_BASE + 0x150)         /* ECC错误注入使能 */

/* Define the union pcie_mul_mc_ctrl_u */
/* 多播控制寄存器 */
/* 0x0 */
typedef union tagMcCtrl
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_mcast_en          : 1   ; /* [0] Multicast使能。 */
        UINT32    cfg_win0_mcast_en     : 1   ; /* [1] 窗口0多播功能使能 */
        UINT32    cfg_win1_mcast_en     : 1   ; /* [2] 窗口1多播功能使能 */
        UINT32    cfg_win2_mcast_en     : 1   ; /* [3] 窗口2多播功能使能 */
        UINT32    cfg_win3_mcast_en     : 1   ; /* [4] 窗口3多播功能使能 */
        UINT32    cfg_win4_mcast_en     : 1   ; /* [5] 窗口4多播功能使能 */
        UINT32    cfg_win5_mcast_en     : 1   ; /* [6] 窗口5多播功能使能 */
        UINT32    cfg_win6_mcast_en     : 1   ; /* [7] 窗口6多播功能使能 */
        UINT32    cfg_win7_mcast_en     : 1   ; /* [8] 窗口7多播功能使能 */
        UINT32    cfg_win8_mcast_en     : 1   ; /* [9] 窗口8多播功能使能 */
        UINT32    cfg_win9_mcast_en     : 1   ; /* [10] 窗口9多播功能使能 */
        UINT32    cfg_win10_mcast_en    : 1   ; /* [11] 窗口10多播功能使能 */
        UINT32    cfg_win11_mcast_en    : 1   ; /* [12] 窗口11多播功能使能 */
        UINT32    cfg_win12_mcast_en    : 1   ; /* [13] 窗口12多播功能使能 */
        UINT32    cfg_win13_mcast_en    : 1   ; /* [14] 窗口13多播功能使能 */
        UINT32    cfg_win14_mcast_en    : 1   ; /* [15] 窗口14多播功能使能 */
        UINT32    cfg_win15_mcast_en    : 1   ; /* [16] 窗口15多播功能使能 */
        UINT32    Reserved_0            : 15  ; /* [31..17] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_mc_ctrl_u;

/* Define the union pcie_mul_cfg_win0_size_u */
/* 窗口0的大小 */
/* 0x84 */
typedef union tagCfgWin0Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win0_size         : 6   ; /* [5..0] 窗口0的大小。 */
        UINT32    Reserved_1            : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win0_size_u;

/* Define the union pcie_mul_cfg_win1_size_u */
/* 窗口1的大小 */
/* 0x88 */
typedef union tagCfgWin1Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win1_size         : 6   ; /* [5..0] 窗口1的大小。 */
        UINT32    Reserved_2            : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win1_size_u;

/* Define the union pcie_mul_cfg_win2_size_u */
/* 窗口2的大小 */
/* 0x8C */
typedef union tagCfgWin2Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win2_size         : 6   ; /* [5..0] 窗口2的大小。 */
        UINT32    Reserved_3            : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win2_size_u;

/* Define the union pcie_mul_cfg_win3_size_u */
/* 窗口3的大小 */
/* 0x90 */
typedef union tagCfgWin3Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win3_size         : 6   ; /* [5..0] 窗口3的大小。 */
        UINT32    Reserved_4            : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win3_size_u;

/* Define the union pcie_mul_cfg_win4_size_u */
/* 窗口4的大小 */
/* 0x94 */
typedef union tagCfgWin4Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win4_size         : 6   ; /* [5..0] 窗口4的大小。 */
        UINT32    Reserved_5            : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win4_size_u;

/* Define the union pcie_mul_cfg_win5_size_u */
/* 窗口5的大小 */
/* 0x98 */
typedef union tagCfgWin5Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win5_size         : 6   ; /* [5..0] 窗口5的大小。 */
        UINT32    Reserved_6            : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win5_size_u;

/* Define the union pcie_mul_cfg_win6_size_u */
/* 窗口6的大小 */
/* 0x9C */
typedef union tagCfgWin6Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win6_size         : 6   ; /* [5..0] 窗口6的大小。 */
        UINT32    Reserved_7            : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win6_size_u;

/* Define the union pcie_mul_cfg_win7_size_u */
/* 窗口7的大小 */
/* 0xA0 */
typedef union tagCfgWin7Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win7_size         : 6   ; /* [5..0] 窗口7的大小。 */
        UINT32    Reserved_8            : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win7_size_u;

/* Define the union pcie_mul_cfg_win8_size_u */
/* 窗口8的大小 */
/* 0xA4 */
typedef union tagCfgWin8Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win8_size         : 6   ; /* [5..0] 窗口8的大小。 */
        UINT32    Reserved_9            : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win8_size_u;

/* Define the union pcie_mul_cfg_win9_size_u */
/* 窗口9的大小 */
/* 0xA8 */
typedef union tagCfgWin9Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win9_size         : 6   ; /* [5..0] 窗口9的大小。 */
        UINT32    Reserved_10           : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win9_size_u;

/* Define the union pcie_mul_cfg_win10_size_u */
/* 窗口10的大小 */
/* 0xAC */
typedef union tagCfgWin10Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win10_size        : 6   ; /* [5..0] 窗口10的大小。 */
        UINT32    Reserved_11           : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win10_size_u;

/* Define the union pcie_mul_cfg_win11_size_u */
/* 窗口11的大小 */
/* 0xB0 */
typedef union tagCfgWin11Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win11_size        : 6   ; /* [5..0] 窗口11的大小。 */
        UINT32    Reserved_12           : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win11_size_u;

/* Define the union pcie_mul_cfg_win12_size_u */
/* 窗口12的大小 */
/* 0xB4 */
typedef union tagCfgWin12Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win12_size        : 6   ; /* [5..0] 窗口12的大小。 */
        UINT32    Reserved_13           : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win12_size_u;

/* Define the union pcie_mul_cfg_win13_size_u */
/* 窗口13的大小 */
/* 0xB8 */
typedef union tagCfgWin13Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win13_size        : 6   ; /* [5..0] 窗口13的大小。 */
        UINT32    Reserved_14           : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win13_size_u;

/* Define the union pcie_mul_cfg_win14_size_u */
/* 窗口14的大小 */
/* 0xBC */
typedef union tagCfgWin14Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win14_size        : 6   ; /* [5..0] 窗口14的大小。 */
        UINT32    Reserved_15           : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win14_size_u;

/* Define the union pcie_mul_cfg_win15_size_u */
/* 窗口15的大小 */
/* 0xC0 */
typedef union tagCfgWin15Size
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win15_size        : 6   ; /* [5..0] 窗口15的大小。 */
        UINT32    Reserved_16           : 26  ; /* [31..6] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win15_size_u;

/* Define the union pcie_mul_cfg_win_xlat_en_u */
/* 窗口地址转换使能 */
/* 0x144 */
typedef union tagCfgWinXlatEn
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_win0_xlat_en      : 1   ; /* [0] 窗口0地址转换使能 */
        UINT32    cfg_win1_xlat_en      : 1   ; /* [1] 窗口1地址转换使能 */
        UINT32    cfg_win2_xlat_en      : 1   ; /* [2] 窗口2地址转换使能 */
        UINT32    cfg_win3_xlat_en      : 1   ; /* [3] 窗口3地址转换使能 */
        UINT32    cfg_win4_xlat_en      : 1   ; /* [4] 窗口4地址转换使能 */
        UINT32    cfg_win5_xlat_en      : 1   ; /* [5] 窗口5地址转换使能 */
        UINT32    cfg_win6_xlat_en      : 1   ; /* [6] 窗口6地址转换使能 */
        UINT32    cfg_win7_xlat_en      : 1   ; /* [7] 窗口7地址转换使能 */
        UINT32    cfg_win8_xlat_en      : 1   ; /* [8] 窗口8地址转换使能 */
        UINT32    cfg_win9_xlat_en      : 1   ; /* [9] 窗口9地址转换使能 */
        UINT32    cfg_win10_xlat_en     : 1   ; /* [10] 窗口10地址转换使能 */
        UINT32    cfg_win11_xlat_en     : 1   ; /* [11] 窗口11地址转换使能 */
        UINT32    cfg_win12_xlat_en     : 1   ; /* [12] 窗口12地址转换使能 */
        UINT32    cfg_win13_xlat_en     : 1   ; /* [13] 窗口13地址转换使能 */
        UINT32    cfg_win14_xlat_en     : 1   ; /* [14] 窗口14地址转换使能 */
        UINT32    cfg_win15_xlat_en     : 1   ; /* [15] 窗口15地址转换使能 */
        UINT32    Reserved_17           : 16  ; /* [31..16] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_win_xlat_en_u;

/* Define the union pcie_mul_cfg_mcast_cmd_timeout_u */
/* 多播命令超时计数器 */
/* 0x148 */
typedef union tagCfgMcastCmdTimeout
{
    /* Define the struct Bits */
    struct
    {
        UINT32    cfg_mcast_cmd_timeout  : 10  ; /* [9..0] 发出multicast命令，但是没有得到回应的超时时间设置。 */
        UINT32    Reserved_18           : 22  ; /* [31..10] 保留位 */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_mcast_cmd_timeout_u;

/* Define the union pcie_mul_cfg_int_status_u */
/* 中断状态寄存器 */
/* 0x14C */
typedef union tagCfgIntStatus
{
    /* Define the struct Bits */
    struct
    {
        UINT32    timeout_int           : 1   ; /* [0] 命令超时中断寄存器 */
        UINT32    ecc_err1_int          : 1   ; /* [1] ECC 1bit错误中断寄存器 */
        UINT32    ecc_err2_int          : 1   ; /* [2] ECC 2bit错误中断寄存器 */
        UINT32    Reserved_19           : 29  ; /* [31..3]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_int_status_u;

/* Define the union pcie_mul_cfg_inject_ecc_err_u */
/* ECC错误注入使能 */
/* 0x150 */
typedef union tagCfgInjectEccErr
{
    /* Define the struct Bits */
    struct
    {
        UINT32    ecc_err_inject_en     : 1   ; /* [0] ECC错误注入使能 */
        UINT32    Reserved_20           : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} pcie_mul_cfg_inject_ecc_err_u;

/* PCIE_EP 模块寄存器基地址 */
#define PCIE_EP_BASE                              (0x00000000)

/******************************************************************************/
/*                      PhosphorV660 PCIE_EP 寄存器定义                       */
/******************************************************************************/
#define PCIE_EP_PCI_CFG_HDR0_REG                  (PCIE_EP_BASE + 0x0)            /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR1_REG                  (PCIE_EP_BASE + 0x4)            /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR2_REG                  (PCIE_EP_BASE + 0x8)            /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR3_REG                  (PCIE_EP_BASE + 0xC)            /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR4_REG                  (PCIE_EP_BASE + 0x10)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR5_REG                  (PCIE_EP_BASE + 0x14)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR6_REG                  (PCIE_EP_BASE + 0x18)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR7_REG                  (PCIE_EP_BASE + 0x1C)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR8_REG                  (PCIE_EP_BASE + 0x20)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR9_REG                  (PCIE_EP_BASE + 0x24)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR10_REG                 (PCIE_EP_BASE + 0x28)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR11_REG                 (PCIE_EP_BASE + 0x2C)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR12_REG                 (PCIE_EP_BASE + 0x30)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR13_REG                 (PCIE_EP_BASE + 0x34)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR14_REG                 (PCIE_EP_BASE + 0x38)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_CFG_HDR15_REG                 (PCIE_EP_BASE + 0x3C)           /* PCI兼容配置头空间寄存器 */
#define PCIE_EP_PCI_PM_CAP0_REG                   (PCIE_EP_BASE + 0x40)           /* PCI电源管理功能寄存器 */
#define PCIE_EP_PCI_PM_CAP1_REG                   (PCIE_EP_BASE + 0x44)           /* PCI电源管理功能寄存器 */
#define PCIE_EP_PCI_MSI_CAP0_REG                  (PCIE_EP_BASE + 0x50)           /* PCI MSI功能寄存器 */
#define PCIE_EP_PCI_MSI_CAP1_REG                  (PCIE_EP_BASE + 0x54)           /* PCI MSI功能寄存器 */
#define PCIE_EP_PCI_MSI_CAP2_REG                  (PCIE_EP_BASE + 0x58)           /* PCI MSI功能寄存器 */
#define PCIE_EP_PCI_MSI_CAP3_REG                  (PCIE_EP_BASE + 0x5C)           /* PCI MSI功能寄存器 */
#define PCIE_EP_PCIE_CAP0_REG                     (PCIE_EP_BASE + 0x70)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP1_REG                     (PCIE_EP_BASE + 0x74)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP2_REG                     (PCIE_EP_BASE + 0x78)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP3_REG                     (PCIE_EP_BASE + 0x7C)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP4_REG                     (PCIE_EP_BASE + 0x80)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP5_REG                     (PCIE_EP_BASE + 0x84)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP6_REG                     (PCIE_EP_BASE + 0x88)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP7_REG                     (PCIE_EP_BASE + 0x8C)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP8_REG                     (PCIE_EP_BASE + 0x90)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP9_REG                     (PCIE_EP_BASE + 0x94)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP10_REG                    (PCIE_EP_BASE + 0x98)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP11_REG                    (PCIE_EP_BASE + 0x9C)           /* PCI Express功能寄存器 */
#define PCIE_EP_PCIE_CAP12_REG                    (PCIE_EP_BASE + 0xA0)           /* PCI Express功能寄存器 */
#define PCIE_EP_SLOT_CAP_REG                      (PCIE_EP_BASE + 0xC0)           /* Slot Numbering功能寄存器 */
#define PCIE_EP_AER_CAP0_REG                      (PCIE_EP_BASE + 0x100)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP1_REG                      (PCIE_EP_BASE + 0x104)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP2_REG                      (PCIE_EP_BASE + 0x108)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP3_REG                      (PCIE_EP_BASE + 0x10C)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP4_REG                      (PCIE_EP_BASE + 0x110)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP5_REG                      (PCIE_EP_BASE + 0x114)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP6_REG                      (PCIE_EP_BASE + 0x118)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP7_REG                      (PCIE_EP_BASE + 0x11C)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP8_REG                      (PCIE_EP_BASE + 0x120)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP9_REG                      (PCIE_EP_BASE + 0x124)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP10_REG                     (PCIE_EP_BASE + 0x128)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP11_REG                     (PCIE_EP_BASE + 0x12C)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP12_REG                     (PCIE_EP_BASE + 0x130)          /* 高级错误报告寄存器 */
#define PCIE_EP_AER_CAP13_REG                     (PCIE_EP_BASE + 0x134)          /* 高级错误报告寄存器 */
#define PCIE_EP_VC_CAP0_REG                       (PCIE_EP_BASE + 0x140)          /* 虚拟通道功能寄存器 */
#define PCIE_EP_VC_CAP1_REG                       (PCIE_EP_BASE + 0x144)          /* 虚拟通道功能寄存器 */
#define PCIE_EP_VC_CAP2_REG                       (PCIE_EP_BASE + 0x148)          /* 虚拟通道功能寄存器 */
#define PCIE_EP_VC_CAP3_REG                       (PCIE_EP_BASE + 0x14C)          /* 虚拟通道功能寄存器 */
#define PCIE_EP_VC_CAP4_REG                       (PCIE_EP_BASE + 0x150)          /* 虚拟通道功能寄存器 */
#define PCIE_EP_VC_CAP5_REG                       (PCIE_EP_BASE + 0x154)          /* 虚拟通道功能寄存器 */
#define PCIE_EP_VC_CAP6_REG                       (PCIE_EP_BASE + 0x158)          /* 虚拟通道功能寄存器 */
#define PCIE_EP_VC_CAP7_REG                       (PCIE_EP_BASE + 0x15C)          /* 虚拟通道功能寄存器 */
#define PCIE_EP_VC_CAP8_REG                       (PCIE_EP_BASE + 0x160)          /* 虚拟通道功能寄存器 */
#define PCIE_EP_VC_CAP9_REG                       (PCIE_EP_BASE + 0x164)          /* 虚拟通道功能寄存器 */
#define PCIE_EP_PORT_LOGIC0_REG                   (PCIE_EP_BASE + 0x700)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC1_REG                   (PCIE_EP_BASE + 0x704)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC2_REG                   (PCIE_EP_BASE + 0x708)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC3_REG                   (PCIE_EP_BASE + 0x0)            /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC4_REG                   (PCIE_EP_BASE + 0x710)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC5_REG                   (PCIE_EP_BASE + 0x714)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC6_REG                   (PCIE_EP_BASE + 0x718)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC7_REG                   (PCIE_EP_BASE + 0x71C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC8_REG                   (PCIE_EP_BASE + 0x720)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC9_REG                   (PCIE_EP_BASE + 0x724)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC10_REG                  (PCIE_EP_BASE + 0x728)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC11_REG                  (PCIE_EP_BASE + 0x72C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC12_REG                  (PCIE_EP_BASE + 0x730)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC13_REG                  (PCIE_EP_BASE + 0x734)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC14_REG                  (PCIE_EP_BASE + 0x738)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC15_REG                  (PCIE_EP_BASE + 0x73C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC16_REG                  (PCIE_EP_BASE + 0x748)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC17_REG                  (PCIE_EP_BASE + 0x74C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC18_REG                  (PCIE_EP_BASE + 0x750)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC19_REG                  (PCIE_EP_BASE + 0x7A8)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC20_REG                  (PCIE_EP_BASE + 0x7AC)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC21_REG                  (PCIE_EP_BASE + 0x7B0)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORT_LOGIC22_REG                  (PCIE_EP_BASE + 0x80C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC23_REG                   (PCIE_EP_BASE + 0x810)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC24_REG                   (PCIE_EP_BASE + 0x814)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC25_REG                   (PCIE_EP_BASE + 0x818)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC26_REG                   (PCIE_EP_BASE + 0x81C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC27_REG                   (PCIE_EP_BASE + 0x820)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC28_REG                   (PCIE_EP_BASE + 0x824)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC29_REG                   (PCIE_EP_BASE + 0x828)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC30_REG                   (PCIE_EP_BASE + 0x82C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC31_REG                   (PCIE_EP_BASE + 0x830)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC32_REG                   (PCIE_EP_BASE + 0x834)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC33_REG                   (PCIE_EP_BASE + 0x838)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC34_REG                   (PCIE_EP_BASE + 0x83C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC35_REG                   (PCIE_EP_BASE + 0x840)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC36_REG                   (PCIE_EP_BASE + 0x844)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC37_REG                   (PCIE_EP_BASE + 0x848)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC38_REG                   (PCIE_EP_BASE + 0x84C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC39_REG                   (PCIE_EP_BASE + 0x850)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC40_REG                   (PCIE_EP_BASE + 0x854)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC41_REG                   (PCIE_EP_BASE + 0x858)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC42_REG                   (PCIE_EP_BASE + 0x85C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC43_REG                   (PCIE_EP_BASE + 0x860)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC44_REG                   (PCIE_EP_BASE + 0x864)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC45_REG                   (PCIE_EP_BASE + 0x868)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC46_REG                   (PCIE_EP_BASE + 0x86C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC47_REG                   (PCIE_EP_BASE + 0x870)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC48_REG                   (PCIE_EP_BASE + 0x874)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC49_REG                   (PCIE_EP_BASE + 0x878)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC50_REG                   (PCIE_EP_BASE + 0x87C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC51_REG                   (PCIE_EP_BASE + 0x880)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC52_REG                   (PCIE_EP_BASE + 0x884)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC53_REG                   (PCIE_EP_BASE + 0x888)          /* 端口逻辑寄存器 */
#define PCIE_EP_LINK_TIMEOUT_OFF_REG              (PCIE_EP_BASE + 0x8d4)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC54_REG                   (PCIE_EP_BASE + 0x900)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC55_REG                   (PCIE_EP_BASE + 0x904)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC56_REG                   (PCIE_EP_BASE + 0x908)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC57_REG                   (PCIE_EP_BASE + 0x90C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC58_REG                   (PCIE_EP_BASE + 0x910)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC59_REG                   (PCIE_EP_BASE + 0x914)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC60_REG                   (PCIE_EP_BASE + 0x918)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC61_REG                   (PCIE_EP_BASE + 0x91C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC62_REG                   (PCIE_EP_BASE + 0x97C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC63_REG                   (PCIE_EP_BASE + 0x980)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC64_REG                   (PCIE_EP_BASE + 0x99C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC65_REG                   (PCIE_EP_BASE + 0x9A0)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC66_REG                   (PCIE_EP_BASE + 0x9BC)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC67_REG                   (PCIE_EP_BASE + 0x9C4)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC68_REG                   (PCIE_EP_BASE + 0x9C8)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC69_REG                   (PCIE_EP_BASE + 0x9CC)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC70_REG                   (PCIE_EP_BASE + 0x9D0)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC71_REG                   (PCIE_EP_BASE + 0x9D4)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC72_REG                   (PCIE_EP_BASE + 0x9D8)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC73_REG                   (PCIE_EP_BASE + 0x9DC)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC74_REG                   (PCIE_EP_BASE + 0x9E0)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC75_REG                   (PCIE_EP_BASE + 0xA00)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC76_REG                   (PCIE_EP_BASE + 0xA10)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC77_REG                   (PCIE_EP_BASE + 0xA18)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC78_REG                   (PCIE_EP_BASE + 0xA1C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC79_REG                   (PCIE_EP_BASE + 0xA24)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC80_REG                   (PCIE_EP_BASE + 0xA28)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC81_REG                   (PCIE_EP_BASE + 0xA34)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC82_REG                   (PCIE_EP_BASE + 0xA3C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC83_REG                   (PCIE_EP_BASE + 0xA40)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC84_REG                   (PCIE_EP_BASE + 0xA44)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC85_REG                   (PCIE_EP_BASE + 0xA48)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC86_REG                   (PCIE_EP_BASE + 0xA6C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC87_REG                   (PCIE_EP_BASE + 0xA70)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC88_REG                   (PCIE_EP_BASE + 0xA78)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC89_REG                   (PCIE_EP_BASE + 0xA7C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC90_REG                   (PCIE_EP_BASE + 0xA80)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC91_REG                   (PCIE_EP_BASE + 0xA84)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC92_REG                   (PCIE_EP_BASE + 0xA88)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC93_REG                   (PCIE_EP_BASE + 0xA8C)          /* 端口逻辑寄存器 */
#define PCIE_EP_PORTLOGIC94_REG                   (PCIE_EP_BASE + 0xA90)          /* 端口逻辑寄存器 */
// Define the union PCIE_EP_PCI_CFG_HDR0_U
// PCI兼容配置头空间寄存器
// 0x0
typedef union tagPciCfgHdr0
{
    // Define the struct Bits
    struct
    {
        UINT32    vendor_id             : 16  ; // [15..0] 厂商ID号
        UINT32    device_id             : 16  ; // [31..16] 设备ID号
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_CFG_HDR0_U;

// Define the union PCIE_EP_PCI_CFG_HDR1_U
// PCI兼容配置头空间寄存器
// 0x4
typedef union tagPciCfgHdr1
{
    // Define the struct Bits
    struct
    {
        UINT32    io_space_enable       : 1   ; // [0] I/O Sapace Enable0：该设备不能响应I/O请求;1：该设备能够响应I/O请求。
        UINT32    memory_space_enable   : 1   ; // [1] Memory Space Enable0：该设备不能响应存储器请求;1：该设备能够响应存储器请求。
        UINT32    bus_master_enable     : 1   ; // [2] Bus Master Enable0：该设备不能作为主设备;1：该设备能够作为主设备。
        UINT32    specialcycleenable    : 1   ; // [3] Special Cycle Enalbe不适用于PCIe，硬连线为0
        UINT32    memory_write_and_invalidate  : 1   ; // [4] Memory Write and Invalidata不适用于PCIe，硬连线为0
        UINT32    vga_palette_snoop_enable  : 1   ; // [5] VGA Palette Snoop不适用于PCIe，硬连线为0
        UINT32    parity_error_response  : 1   ; // [6] Parity Error Response0：对奇偶校验错误不作出响应;1：对奇偶校验错误作出响应。
        UINT32    idsel_stepping_waitcycle_control  : 1   ; // [7] IDSEL Stepping/Wait Cycle Control不适用于PCIe，硬连线为0
        UINT32    serr_enable           : 1   ; // [8] SERR#信号使能0：可以使用SERR#信号;
        UINT32    fastback_to_backenable  : 1   ; // [9] Faster Back-to-Back Enaable不适用于PCIe，硬连线为0
        UINT32    interrupt_disable     : 1   ; // [10] INTx Assertion Disable0：允许使用INTx方式提交中断;1：禁用INTx方式提交中断。
        UINT32    Reserved_2            : 5   ; // [15..11] Reserved
        UINT32    Reserved_1            : 3   ; // [18..16] Reserved
        UINT32    intx_status           : 1   ; // [19] INTx Status0：设备未使用INTx方式向处理器提交了中断请求;1：设备使用INTx方式向处理器提交了中断请求。
        UINT32    capabilitieslist      : 1   ; // [20] Capabilities List指示Capability Pointer寄存器中的值有效，硬连线为1
        UINT32    pcibus66mhzcapable    : 1   ; // [21] 66MHz Capable不适用于PCIe，硬连线为0
        UINT32    Reserved_0            : 1   ; // [22] Reserved
        UINT32    fastback_to_back      : 1   ; // [23] Faster Back-to-Back Capable不适用于PCIe，硬连线为0
        UINT32    masterdataparityerror  : 1   ; // [24] Master Data Parity Error0：除置一条件满足之外的其他情况;1：PERR#信号有效，或者总线出现数据传输错误时，或者Command寄存器的Parity Error Response位为1时。
        UINT32    devsel_timing         : 2   ; // [26..25] DEVSEL Timing不适用于PCIe，硬连线为0
        UINT32    signaled_target_abort  : 1   ; // [27] Signaled Target Abort由PCI目标设备设置0：未发生目标设备夭折时序;1：发生目标设备夭折时序。
        UINT32    received_target_abort  : 1   ; // [28] Received Target Abort由PCI主设备设置0：未发生目标设备夭折时序;1：发生目标设备夭折时序。
        UINT32    received_master_abort  : 1   ; // [29] Received Master Abort由PCI主设备设置0：未发生主设备夭折时序;1：发生主设备夭折时序。
        UINT32    signaled_system_error  : 1   ; // [30] Signaled System Error0：SERR#信号无效;1：SERR#信号有效。
        UINT32    detected_parity_error  : 1   ; // [31] Detected Parity Error0：未检测到奇偶校验错误;1：检测到奇偶校验错误。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_CFG_HDR1_U;

// Define the union PCIE_EP_PCI_CFG_HDR2_U
// PCI兼容配置头空间寄存器
// 0x8
typedef union tagPciCfgHdr2
{
    // Define the struct Bits
    struct
    {
        UINT32    revision_identification  : 8   ; // [7..0] Revision IDPCIe设备的版本号
        UINT32    Reserved_3            : 8   ; // [15..8] Programming Interface
        UINT32    sub_class             : 8   ; // [23..16] Subclass Code
        UINT32    baseclass             : 8   ; // [31..24] Base Class Code
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_CFG_HDR2_U;

// Define the union PCIE_EP_PCI_CFG_HDR3_U
// PCI兼容配置头空间寄存器
// 0xC
typedef union tagPciCfgHdr3
{
    // Define the struct Bits
    struct
    {
        UINT32    cache_line_size       : 8   ; // [7..0] Cache Line Size不适用于PCIe设备，对此寄存器执行写操作不会影响PCIe core的功能
        UINT32    mstr_lat_tmr          : 8   ; // [15..8] Master Latency Timer不适用于PCIe设备，硬连线为0
        UINT32    multi_function_device  : 7   ; // [22..16] Configuration Header Format0：Type0配置头空间;1：Type1配置头空间。
        UINT32    hdr_type              : 1   ; // [23] Multi Function Device0：单功能设备;1：多功能设备。
        UINT32    bist                  : 8   ; // [31..24] BIST Register该版本IP不支持该功能，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_CFG_HDR3_U;

// Define the union PCIE_EP_PCI_CFG_HDR4_U
// PCI兼容配置头空间寄存器
// 0x10
typedef union tagPciCfgHdr4
{
    // Define the struct Bits
    struct
    {
        UINT32    sbar01_space_inicator  : 1   ; // [0] 指示BAR类型0：Memory BAR;1：I/O BAR。
        UINT32    sbar01_type           : 2   ; // [2..1] 指示Memory BAR类型00：32-bit BAR;10：64-bit BAR;01：保留;11：保留。
        UINT32    sbar01_prefetchable   : 1   ; // [3] 指示Memory BAR是否可预取0：不可预取;1：可预取。
        UINT32    sbar01_lower          : 28  ; // [31..4] 64位BAR0地址的[31:4]位若dbi_cs2有效，则为BAR0_MASK的[31:4]位。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_CFG_HDR4_U;

// Define the union PCIE_EP_PCI_CFG_HDR6_U
// PCI兼容配置头空间寄存器
// 0x18
typedef union tagPciCfgHdr6
{
    // Define the struct Bits
    struct
    {
        UINT32    sbar23_space_inicator  : 1   ; // [0] 0 =BAR23 is a memory BAR1 =BAR23 is an I/O BARNTB只支持Memory空间，不支持IO空间
        UINT32    sbar23_type           : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    sbar23_prefetchable   : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_4            : 8   ; // [11..4] 保留位
        UINT32    sbar23_lower          : 20  ; // [31..12] 64位BAR23地址的[31:12]位若dbi_cs2有效，则为BAR23_MASK的[31:12]位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_CFG_HDR6_U;

typedef union tagPciLinkTimeOut
{
    // Define the struct Bits
    struct
    {
        UINT32    link_timeout_prepriod_default   : 8   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    link_timeout_enable_default  : 1   ; // [8] 保留位
        UINT32    Reserved_4          : 23  ; // [31..9] 64位BAR23地址的[31:12]位若dbi_cs2有效，则为BAR23_MASK的[31:12]位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_LINK_TIMEOUT_OFF_U;


// Define the union PCIE_EP_PCI_CFG_HDR8_U
// PCI兼容配置头空间寄存器
// 0x20
typedef union tagPciCfgHdr8
{
    // Define the struct Bits
    struct
    {
        UINT32    sbar45_space_inicator  : 1   ; // [0] 0 =BAR01 is a memory BAR1 =BAR01 is an I/O BARNTB只支持Memory空间，不支持IO空间
        UINT32    sbar45_type           : 2   ; // [2..1] 00 =32-bit BAR10 =64-bit BAR
        UINT32    sbar45_prefetchable   : 1   ; // [3] 是否可预取0 =Non-prefetchable          1 =Prefetchable
        UINT32    Reserved_5            : 8   ; // [11..4] 保留位
        UINT32    sbar45_lower          : 20  ; // [31..12] BAR01基地址低位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_CFG_HDR8_U;

// Define the union PCIE_EP_PCI_CFG_HDR11_U
// PCI兼容配置头空间寄存器
// 0x2C
typedef union tagPciCfgHdr11
{
    // Define the struct Bits
    struct
    {
        UINT32    subsystem_vendor_id   : 16  ; // [15..0] 子系统厂商ID
        UINT32    subsystemid           : 16  ; // [31..16] 子系统ID
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_CFG_HDR11_U;

// Define the union PCIE_EP_PCI_CFG_HDR13_U
// PCI兼容配置头空间寄存器
// 0x34
typedef union tagPciCfgHdr13
{
    // Define the struct Bits
    struct
    {
        UINT32    capptr                : 8   ; // [7..0] 功能指针
        UINT32    Reserved_6            : 24  ; // [31..8] 保留
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_CFG_HDR13_U;

// Define the union PCIE_EP_PCI_CFG_HDR15_U
// PCI兼容配置头空间寄存器
// 0x3C
typedef union tagPciCfgHdr15
{
    // Define the struct Bits
    struct
    {
        UINT32    int_line              : 8   ; // [7..0] Interrupt Line
        UINT32    int_pin               : 8   ; // [15..8] Interrupt Pin00：不使用INTx类型上报中断;01：使用INTA;02：使用INTB;03：使用INTC;04：使用INTD。
        UINT32    Min_Grant             : 8   ; // [23..16] 不适用于PCIe，硬连线为0
        UINT32    Max_Latency           : 8   ; // [31..24] 不适用于PCIe，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_CFG_HDR15_U;

// Define the union PCIE_EP_PCI_MSI_CAP0_U
// PCI MSI功能寄存器
// 0x50
typedef union tagPciMsiCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_cap_id            : 8   ; // [7..0] MSI Capability ID
        UINT32    next_capability_pointer  : 8   ; // [15..8] Next Capability Pointer
        UINT32    msi_enabled           : 1   ; // [16] MSI Enabled0：禁用MSI;1：使能MSI。
        UINT32    multiple_message_capable  : 3   ; // [19..17] Multiple Message Capable000：PCIe设备可以使用1个中断向量;001：PCIe设备可以使用2个中断向量;010：PCIe设备可以使用4个中断向量;011：PCIe设备可以使用8个中断向量;100：PCIe设备可以使用16个中断向量;101：PCIe设备可以使用32个中断向量;110：保留;111：保留。
        UINT32    multiple_message_enabled  : 3   ; // [22..20] Multiple Message Enabled表示分配给当前PCIe设备的中断向量数目000：PCIe设备被分配给1个中断向量;001：PCIe设备被分配给2个中断向量;010：PCIe设备被分配给4个中断向量;011：PCIe设备被分配给8个中断向量;100：PCIe设备被分配给16个中断向量;101：PCIe设备被分配给32个中断向量;110：保留;111：保留。
        UINT32    msi_64_en             : 1   ; // [23] 支持64位地址功能
        UINT32    pvm_en                : 1   ; // [24] 设备是否支持Per Vector Masking功能1'b0: 不支持1'b1: 支持
        UINT32    message_control_register  : 7   ; // [31..25] MSI Per Vector Masking (PVM) supported0：不支持MSI PVM;1：支持MSI PVM。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_MSI_CAP0_U;

// Define the union PCIE_EP_PCI_MSI_CAP1_U
// PCI MSI功能寄存器
// 0x54
typedef union tagPciMsiCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_11           : 2   ; // [1..0] Reserved
        UINT32    msi_addr_low          : 30  ; // [31..2] MSI的低32bit地址的[31:2]位
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_MSI_CAP1_U;

// Define the union PCIE_EP_PCI_MSI_CAP3_U
// PCI MSI功能寄存器
// 0x5C
typedef union tagPciMsiCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    msi_data              : 16  ; // [15..0] MSI数据
        UINT32    Reserved_12           : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCI_MSI_CAP3_U;

// Define the union PCIE_EP_PCIE_CAP0_U
// PCI Express功能寄存器
// 0x70
typedef union tagPcieCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pcie_cap_id           : 8   ; // [7..0] PCI Express Capability ID
        UINT32    pcie_next_ptr         : 8   ; // [15..8] Next Capability Pointer
        UINT32    pcie_capability_version  : 4   ; // [19..16] PCI Express Capability Version
        UINT32    device_port_type      : 4   ; // [23..20] Device/Port Type0100：PCIe RC;
        UINT32    slot_implemented      : 1   ; // [24] Slot Implemented
        UINT32    interrupt_message_number  : 5   ; // [29..25] Interrupt Message Number
        UINT32    Reserved_13           : 2   ; // [31..30] RsvdP
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP0_U;

// Define the union PCIE_EP_PCIE_CAP1_U
// PCI Express功能寄存器
// 0x74
typedef union tagPcieCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    max_payload_size_supported  : 3   ; // [2..0] 支持最大payload 为512Byte
        UINT32    phantom_function_supported  : 2   ; // [4..3] 仿真器功能支持，硬连线0
        UINT32    extended_tagfield_supported  : 1   ; // [5] 拓展标记字段支持，支持最大outstanding的深度为32
        UINT32    endpoint_l0sacceptable_latency  : 3   ; // [8..6] 端点L0可接受的延时，不支持，硬连线为0
        UINT32    endpoint_l1acceptable_latency  : 3   ; // [11..9] 端点L1可接受的延时，不支持，硬连线为0
        UINT32    undefined             : 3   ; // [14..12] 保留
        UINT32    Reserved_16           : 3   ; // [17..15] 保留
        UINT32    captured_slot_power_limit_value  : 8   ; // [25..18] 捕获的插槽功率极限值，硬连线0x0，只读
        UINT32    captured_slot_power_limit_scale  : 2   ; // [27..26] 捕获的插槽功率极限因子，硬连线0x0，只读
        UINT32    function_level_reset  : 1   ; // [28] Function级的复位，NTB不支持该功能
        UINT32    Reserved_15           : 3   ; // [31..29] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP1_U;

// Define the union PCIE_EP_PCIE_CAP2_U
// PCI Express功能寄存器
// 0x78
typedef union tagPcieCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    correctable_error_reporting_enable  : 1   ; // [0] Correctable Error Reporting Enable0：不支持发送“可纠正错误”消息;1：支持发送“可纠正错误”消息。
        UINT32    non_fatal_error_reporting_enable  : 1   ; // [1] Non-Fatal Error Reporting Enable0：不支持发送“非致命错误”消息;1：支持发送“非致命错误”消息。
        UINT32    fatal_error_reporting_enable  : 1   ; // [2] Fatal Error Reporting Enable0：不支持发送“致命错误”消息;1：支持发送“致命错误”消息。
        UINT32    urenable              : 1   ; // [3] Unsupported Request Reporting Enable0：不支持发送“不被支持请求”消息;1：支持发送“不被支持请求”消息。
        UINT32    enable_relaxed_ordering  : 1   ; // [4] Enable Relaxed Ordering0：不支持灵活事务顺序;1：支持灵活事务顺序。
        UINT32    max_payload_size      : 3   ; // [7..5] Max_Payload_Size000：128Byte;001：256Byte;010：512Byte;011：1024Byte;100：2048Byte;101：4096Byte;110：保留;111：保留。
        UINT32    extended_tagfieldenable  : 1   ; // [8] Extended Tag Field Enable0：禁用扩展Tag字段;1：使能扩展Tag字段。
        UINT32    phantom_function_enable  : 1   ; // [9] Phantom Function Enable0：禁用Phantom Function;1：使能Phantom Function。
        UINT32    auxpowerpmenable      : 1   ; // [10] AUX Power PM Enable0：禁用附加电源;1：使能附加电源。
        UINT32    enablenosnoop         : 1   ; // [11] Enable No Snoop0：禁用No Snoop特性;1：使能No Snoop特性。
        UINT32    max_read_request_size  : 3   ; // [14..12] Max_Read_Request_Size000：128Byte;001：256Byte;010：512Byte;011：1024Byte;100：2048Byte;101：4096Byte;110：保留;111：保留。
        UINT32    Reserved_18           : 1   ; // [15] reserved
        UINT32    correctableerrordetected  : 1   ; // [16] Correctable Error Detected0：没有检测到可纠正错误;1：检测到可纠正错误。
        UINT32    non_fatalerrordetected  : 1   ; // [17] Non-Fatal Error detected0：没有检测到非致命错误;1：检测到非致命错误。
        UINT32    fatalerrordetected    : 1   ; // [18] Fatal Error Detected0：没有检测到致命错误;1：检测到致命错误。
        UINT32    unsupportedrequestdetected  : 1   ; // [19] Unsupported Request Detected0：没有收到不被支持的请求;1：收到不被支持的请求。
        UINT32    auxpowerdetected      : 1   ; // [20] Aux Power Detected0：没有检测到辅助电源;1：检测到辅助电源。
        UINT32    transactionpending    : 1   ; // [21] Transaction Pending硬连线为0
        UINT32    Reserved_17           : 10  ; // [31..22] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP2_U;

// Define the union PCIE_EP_PCIE_CAP3_U
// PCI Express功能寄存器
// 0x7C
typedef union tagPcieCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    max_link_speed        : 4   ; // [3..0] Max Link Speeds0001：2.5GT/s;0010：5.0GT/s;0100：8.0GT/s;其他值：不支持。
        UINT32    max_link_width        : 6   ; // [9..4] Maximum Link Width000001：x1通道;000010：x2通道;000100：x4通道;001000：x8通道;010000：x16通道;其他值：保留。
        UINT32    active_state_power_management  : 2   ; // [11..10] Active State Link PM Support0：不支持ASPM;1：支持ASPM。
        UINT32    l0s_exitlatency       : 3   ; // [14..12] L0s Exit Latency000：小于64ns;
        UINT32    l1_exit_latency       : 3   ; // [17..15] L1 Exit Latency000：小于1us;
        UINT32    clock_power_management  : 1   ; // [18] Clock Power Management0：不支持Clock Power Management;1：支持Clock Power Management。
        UINT32    surprise_down_error_report_cap  : 1   ; // [19] Surprise Down Error Reporting Capable，该版本IP不支持，硬连线为0
        UINT32    data_link_layer_active_report_cap  : 1   ; // [20] Data Link Layer Active Reporting Capable，对于RC硬连线为10：不支持Data Link Layer Active Reporting;1：支持Data Link Layer Active Reporting。
        UINT32    link_bandwidth_noti_cap  : 1   ; // [21] Link Bandwidth Notification Capability，对于RC硬连线为10：不支持Link Bandwidth Notification Capability;1：支持Link Bandwidth Notification Capability。
        UINT32    aspm_option_compliance  : 1   ; // [22] ASPM Optionality Compliance0：不支持ASPM Optionality Compliance;1：支持ASPM Optionality Compliance。
        UINT32    Reserved_19           : 1   ; // [23] Reserved
        UINT32    port_number           : 8   ; // [31..24] Port Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP3_U;

// Define the union PCIE_EP_PCIE_CAP4_U
// PCI Express功能寄存器
// 0x80
typedef union tagPcieCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    active_state_power_management  : 2   ; // [1..0] NTB模式下不支持，硬连线到0
        UINT32    Reserved_22           : 1   ; // [2] 保留
        UINT32    rcb                   : 1   ; // [3] 0表示能返回64B边界的完成报文
        UINT32    link_disable          : 1   ; // [4] NTB模式下不支持，硬连线到0
        UINT32    retrain_link          : 1   ; // [5] NTB模式下不支持，硬连线到0
        UINT32    common_clock_config   : 1   ; // [6] NTB模式下不支持，硬连线到0
        UINT32    extended_sync         : 1   ; // [7] NTB模式下不支持，硬连线到0
        UINT32    enable_clock_pwr_management  : 1   ; // [8] NTB模式下不支持，硬连线到0
        UINT32    hw_auto_width_disable  : 1   ; // [9] NTB模式下不支持，硬连线到0
        UINT32    link_bandwidth_management_int_en  : 1   ; // [10] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_int_en  : 1   ; // [11] NTB模式下不支持，硬连线到0
        UINT32    Reserved_21           : 4   ; // [15..12] 保留
        UINT32    current_link_speed    : 4   ; // [19..16] 4'b0001 : 2.5Gbps4'b0010 : 5Gbps4'b0011 : 8Gbps其它值:保留当链路没有建立的时候，该无意义
        UINT32    negotiated_link_width  : 6   ; // [25..20] 协商的链路宽度，可能值为x1/x2/x4/x8
        UINT32    Reserved_20           : 1   ; // [26] 保留位
        UINT32    link_training         : 1   ; // [27] 链路协商正在进行的状态
        UINT32    slot_clock_configration  : 1   ; // [28] 表示设备是否使用连接器上提供的参考物理时钟
        UINT32    data_link_layer_active  : 1   ; // [29] 链路层的活动状态
        UINT32    link_bandwidth_management_status  : 1   ; // [30] NTB模式下不支持，硬连线到0
        UINT32    link_auto_bandwidth_status  : 1   ; // [31] NTB模式下不支持，硬连线到0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP4_U;

// Define the union PCIE_EP_PCIE_CAP5_U
// PCI Express功能寄存器
// 0x84
typedef union tagPcieCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    attentioonbuttonpresent  : 1   ; // [0] Attention Indicator Present0：没有Attention Indicator;1：有Attention Indicator。
        UINT32    powercontrollerpresent  : 1   ; // [1] Power Controller Present0：没有Power Controller;1：有Power Controller。
        UINT32    mrlsensorpresent      : 1   ; // [2] MRL Sensor Present0：没有MRL Sensor;1：有MRL Sensor。
        UINT32    attentionindicatorpresent  : 1   ; // [3] Attention Indicator Present0：没有Attention Indicator;1：有Attention Indicator。
        UINT32    powerindicatorpresent  : 1   ; // [4] Power Indicator Present0：没有Power Indicator;1：有Power Indicator。
        UINT32    hot_plugsurprise      : 1   ; // [5] Hot-Plug Surprise0：不支持Hot-Plug Surprise;1：支持Hot-Plug Surprise。
        UINT32    hot_plugcapable       : 1   ; // [6] Hot-Plug Capable0：不支持热插拔;1：支持热插拔。
        UINT32    slotpowerlimitvalue   : 8   ; // [14..7] Slot Power Limit Value
        UINT32    slotpowerlimitscale   : 2   ; // [16..15] Slot Power Limit Scale
        UINT32    electromechanicalinterlockpresen  : 1   ; // [17] Electromechanical Interlock Present0：没有Electromechanical Interlock ;1：有Electromechanical Interlock 。
        UINT32    no_cmd_complete_support  : 1   ; // [18] No Command Complete Support0：支持Command Complete;1：不支持No Command Complete。
        UINT32    phy_slot_number       : 13  ; // [31..19] Physical Slot Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP5_U;

// Define the union PCIE_EP_PCIE_CAP6_U
// PCI Express功能寄存器
// 0x88
typedef union tagPcieCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    attentionbuttonpressedenable  : 1   ; // [0] Attention Button Pressed Enable0：禁用Attention Button Pressed;1：使能Attention Button Pressed。
        UINT32    powerfaultdetectedenable  : 1   ; // [1] Power Fault Detected Enable0：禁用Power Fault Detected;1：使能Power Fault Detected。
        UINT32    mrlsensorchangedenable  : 1   ; // [2] MRL Sensor Changed Enable0：禁用MRL Sensor Changed;1：使能MRL Sensor Changed。
        UINT32    presencedetectchangedenable  : 1   ; // [3] Presence Detect Changed Enable0：禁用Presence Detect Changed;1：使能Presence Detect Changed。
        UINT32    commandcompletedinterruptenable  : 1   ; // [4] Command Completed Interrupt Enable0：禁用Command Completed Interrupt;1：使能Command Completed Interrupt。
        UINT32    hot_pluginterruptenable  : 1   ; // [5] Hot-Plug Interrupt Enable0：禁用Hot-Plug Interrupt;1：使能Hot-Plug Interrupt。
        UINT32    attentionindicatorcontrol  : 2   ; // [7..6] Attention Indicator Control00：保留;01：On;10：Blink;11：Off。
        UINT32    powerindicatorcontrol  : 2   ; // [9..8] Power Indicator Control00：保留;01：On;10：Blink;11：Off。
        UINT32    powercontrollercontrol  : 1   ; // [10] Power Controller Control0：禁用Power Controller Control;1：使能Power Controller Control。
        UINT32    electromechanicalinterlockcontrol  : 1   ; // [11] Electromechanical Interlock Control0：禁用Electromechanical Interlock Control;1：使能AElectromechanical Interlock Control。
        UINT32    datalinklayerstatechangedenable  : 1   ; // [12] Data Link Layer State Changed Enable0：禁用Data Link Layer State Changed;1：使能Data Link Layer State Changed Enable。
        UINT32    Reserved_23           : 3   ; // [15..13] Reserved
        UINT32    attentionbuttonpressed  : 1   ; // [16] Attention Button Pressed0：Attention Button Not Pressed;1：Attention Button Pressed。
        UINT32    powerfaultdetected    : 1   ; // [17] Power Fault Detected0：Power Fault Not Detected;1：Power Fault Detected。
        UINT32    mrlsensorchanged      : 1   ; // [18] MRL Sensor Changed0：MRL Sensor Not Changed;1：MRL Sensor Changed。
        UINT32    presencedetectchanged  : 1   ; // [19] Presence Detect Changed0：Presence Detect Not Changed;1：Presence Detect Changed。
        UINT32    commandcompleted      : 1   ; // [20] Command Completed0：Command Not Completed;1：Command Completed。
        UINT32    mrlsensorstate        : 1   ; // [21] MRL Sensor State0：不处于MRL Sensor State;1：处于MRL Sensor State。
        UINT32    presencedetectstate   : 1   ; // [22] Presence Detect State0：不处于Presence Detect State;1：处于Presence Detect State。
        UINT32    electromechanicalinterlockstatus  : 1   ; // [23] Electromechanical Interlock Status0：不处于Electromechanical Interlock Status;1：处于Electromechanical Interlock Status。
        UINT32    datalinklayerstatechanged  : 1   ; // [24] Data Link Layer State Changed0：Data Link Layer State Not Changed;1：Data Link Layer State Changed。
        UINT32    slot_ctrl_status      : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP6_U;

// Define the union PCIE_EP_PCIE_CAP7_U
// PCI Express功能寄存器
// 0x8C
typedef union tagPcieCap7
{
    // Define the struct Bits
    struct
    {
        UINT32    systemerroroncorrectableerrorenable  : 1   ; // [0] System Error on Correctable Error Enable0：禁用System Error on Correctable Error;1：使能System Error on Correctable Error。
        UINT32    systemerroronnon_fatalerrorenable  : 1   ; // [1] System Error on Non-fatal Error Enable0：禁用System Error on Non-fatal Error ;1：使能System Error on Non-fatal Error 。
        UINT32    systemerroronfatalerrorenable  : 1   ; // [2] System Error on Fatal Error Enable0：禁用System Error on Fatal Error ;1：使能System Error on Fatal Error 。
        UINT32    pmeinterruptenable    : 1   ; // [3] PME Interrupt Enable0：禁用PME Interrupt;1：使能PME Interrupt。
        UINT32    crssoftwarevisibilityenable  : 1   ; // [4] CRS Software Visibility Enable，该版本IP不支持，硬连线为0
        UINT32    Reserved_24           : 11  ; // [15..5] Reserved
        UINT32    crssoftwarevisibility  : 1   ; // [16] CRS Software Visibility，该版本IP不支持，硬连线为0
        UINT32    root_cap              : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP7_U;

// Define the union PCIE_EP_PCIE_CAP8_U
// PCI Express功能寄存器
// 0x90
typedef union tagPcieCap8
{
    // Define the struct Bits
    struct
    {
        UINT32    pmerequesterid        : 16  ; // [15..0] PME Requester ID
        UINT32    pmestatus             : 1   ; // [16] PME Status0：不指示PME Status;1：指示PME Status。
        UINT32    pmepending            : 1   ; // [17] PME Pending0：指示无PME Pending;1：指示PME Pending。
        UINT32    root_status           : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP8_U;

// Define the union PCIE_EP_PCIE_CAP9_U
// PCI Express功能寄存器
// 0x94
typedef union tagPcieCap9
{
    // Define the struct Bits
    struct
    {
        UINT32    completiontimeoutrangessupported  : 4   ; // [3..0] Completion Timeout Ranges SupportedRange A: 50us to 10ms;Range B: 10ms to 250ms;Range C: 250ms to 4s;Range D: 4s to 64s。
        UINT32    completiontimeoutdisablesupported  : 1   ; // [4] Completion Timeout Disable Supported0：不支持禁用Completion Timeout;1：支持禁用Completion Timeout。
        UINT32    ariforwardingsupported  : 1   ; // [5] ARI Forwarding Supported0：不支持ARI Forwarding;1：支持ARI Forwarding。
        UINT32    atomicoproutingsupported  : 1   ; // [6] AtomicOp Routing Supported，不适用于Endpoint。
        UINT32    _2_bitatomicopcompletersupported  : 1   ; // [7] 32-bit AtomicOp Completer Supported0：不支持32-bit AtomicOp Completer ;1：支持32-bit AtomicOp Completer 。
        UINT32    _4_bitatomicopcompletersupported  : 1   ; // [8] 64-bit AtomicOp Completer Supported0：不支持64-bit AtomicOp Completer;1：支持64-bit AtomicOp Completer。
        UINT32    _28_bitcascompletersupported  : 1   ; // [9] 128-bit CAS Completer Supported0：不支持128-bit CAS Completer;1：支持128-bit CAS Completer。
        UINT32    noro_enabledpr_prpassing  : 1   ; // [10] No RO-enabled PR-PR Passing0：No RO-enabled PR-PR Passing;1：RO-enabled PR-PR Passing。
        UINT32    Reserved_25           : 1   ; // [11] Reserved
        UINT32    tphcompletersupported  : 2   ; // [13..12] TPH Completer Supported00：接收端不支持TPH和扩展TPH报文;01：接收端仅支持TPH报文;10：保留;11：接收端支持TPH和扩展TPH报文。
        UINT32    dev_cap2              : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP9_U;

// Define the union PCIE_EP_PCIE_CAP10_U
// PCI Express功能寄存器
// 0x98
typedef union tagPcieCap10
{
    // Define the struct Bits
    struct
    {
        UINT32    completiontimeoutvalue  : 4   ; // [3..0] Completion Timeout Value0000b：Default range: 50us to 50ms;0001b：50us to 100us;0010b：1ms to 10ms;0101b：16ms to 55ms;0110b：65ms to 210ms;1001b：260ms to 900ms;1010b：1s to 3.5s;1101b：4s to 13s;1110b：17s to 64s;其他值：保留。
        UINT32    completiontimeoutdisable  : 1   ; // [4] Completion Timeout Disable0：不禁用Completion Timeout;1：禁用Completion Timeout。
        UINT32    ariforwardingsupported  : 1   ; // [5] ARI Forwarding Supported0：不支持ARI Forwarding;1：支持ARI Forwarding。
        UINT32    atomicoprequesterenable  : 1   ; // [6] AtomicOp Requester Enable0：禁用AtomicOp Requester;1：使能AtomicOp Requester。
        UINT32    atomicopegressblocking  : 1   ; // [7] AtomicOp Egress Blocking对于Endpoint不使用，reserved
        UINT32    idorequestenable      : 1   ; // [8] IDO Request Enable0：禁用IDO Request Enable;1：使能IDO Request Enable。
        UINT32    idocompletionenable   : 1   ; // [9] IDO Completion Enable0：禁用IDO Completion Enable;1：使能IDO Completion Enable。
        UINT32    dev_ctrl2             : 22  ; // [31..10] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP10_U;

// Define the union PCIE_EP_PCIE_CAP11_U
// PCI Express功能寄存器
// 0x9C
typedef union tagPcieCap11
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_27           : 1   ; // [0] Reserved
        UINT32    gen1_suport           : 1   ; // [1] Gen1链路速度支持0：不支持2.5GT/s;1：支持2.5GT/s。
        UINT32    gen2_suport           : 1   ; // [2] Gen2链路速度支持0：不支持5.0GT/s;1：支持5.0GT/s。
        UINT32    gen3_suport           : 1   ; // [3] Gen3链路速度支持0：不支持8.0GT/s;1：支持8.0GT/s。
        UINT32    Reserved_26           : 4   ; // [7..4] Reserved
        UINT32    crosslink_supported   : 1   ; // [8] Crosslink Supported
        UINT32    link_cap2             : 23  ; // [31..9] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP11_U;

// Define the union PCIE_EP_PCIE_CAP12_U
// PCI Express功能寄存器
// 0xA0
typedef union tagPcieCap12
{
    // Define the struct Bits
    struct
    {
        UINT32    targetlinkspeed       : 4   ; // [3..0] Target Link Speed
        UINT32    entercompliance       : 1   ; // [4] Enter Compliance0：不令链路进入Compliance模式;1：令链路进入Compliance模式。
        UINT32    hardwareautonomousspeeddisa  : 1   ; // [5] Hardware Autonomous Speed Disable0：不禁用Hardware Autonomous Speed;1：禁用Hardware Autonomous Speed。
        UINT32    selectablede_empha    : 1   ; // [6] Selectable De-emphasis0：-6dB;1：-3.5dB。
        UINT32    transmitmargin        : 3   ; // [9..7] Transmit Margin
        UINT32    _entermodifiedcompliance  : 1   ; // [10] Enter Modified Compliance0：如果LTSSM进入Polling.Compliance状态，不发送modified compliance pattern;1：如果LTSSM进入Polling.Compliance状态，发送一个modified compliance pattern。
        UINT32    compliancesos         : 1   ; // [11] Compliance SOS0：在发送Compliance Pattern或Modified Pattern时不在中间插入SKP有序集;1：在发送Compliance Pattern或Modified Pattern时在中间插入SKP有序集。
        UINT32    de_emphasislevel      : 4   ; // [15..12] De-emphasis Level0001：-3.5dB;0000：-6dB其他值：保留。
        UINT32    currentde_emphasislevel  : 1   ; // [16] Current De-emphasis Level0：-6dB;1：-3.5dB。
        UINT32    equalizationcomplete  : 1   ; // [17] Equalization Complete0：Equalization未完成;1：Equalization完成。
        UINT32    equalizationphase1successful  : 1   ; // [18] Equalization Phase 1 Successful0：Equalization Phase 1不成功;1：Equalization Phase 1成功。
        UINT32    equalizationphase2successful  : 1   ; // [19] Equalization Phase 2 Successful0：Equalization Phase 2不成功;1：Equalization Phase 2成功。
        UINT32    equalizationphase3successful  : 1   ; // [20] Equalization Phase 3 Successful0：Equalization Phase 3不成功;1：Equalization Phase 3成功。
        UINT32    linkequalizationrequest  : 1   ; // [21] Link Equalization Request0：没有请求Link Equalization;1：请求Link Equalization 。
        UINT32    link_ctrl2_status2    : 10  ; // [31..22] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PCIE_CAP12_U;

// Define the union PCIE_EP_SLOT_CAP_U
// Slot Numbering功能寄存器
// 0xC0
typedef union tagSlotCap
{
    // Define the struct Bits
    struct
    {
        UINT32    slotnumberingcapabilitiesid  : 8   ; // [7..0] Slot Numbering Capabilities ID
        UINT32    nextcapabilitypointer  : 8   ; // [15..8] Next Capability Pointer
        UINT32    add_incardslotsprovided  : 5   ; // [20..16] Add-in Card Slots Provided
        UINT32    firstinchassis        : 1   ; // [21] First in Chassis
        UINT32    Reserved_28           : 2   ; // [23..22] Reserved
        UINT32    slot_cap              : 8   ; // [31..24] Chassis Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_SLOT_CAP_U;

// Define the union PCIE_EP_AER_CAP0_U
// 高级错误报告寄存器
// 0x100
typedef union tagAerCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pciexpressextendedcapabilityid  : 16  ; // [15..0] PCI Express Extended Capability ID
        UINT32    capabilityversion     : 4   ; // [19..16] Capability Version
        UINT32    aer_cap_hdr           : 12  ; // [31..20] Next Capability Offset
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_AER_CAP0_U;

// Define the union PCIE_EP_AER_CAP1_U
// 高级错误报告寄存器
// 0x104
typedef union tagAerCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_34           : 1   ; // [0] 未定义
        UINT32    Reserved_33           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrorsta  : 1   ; // [4] Data Link Protocol Error Status0：未检测到Data Link Protocol Error;1：检测到Data Link Protocol Error。
        UINT32    surprisedownerrorstatus  : 1   ; // [5] Surprise Down Error Status，该版本IP不支持。
        UINT32    Reserved_32           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpstatu      : 1   ; // [12] Poisoned TLP Status0：未检测到Poisoned TLP;1：检测到Poisoned TLP。
        UINT32    flowcontrolprotocolerrorst  : 1   ; // [13] Flow Control Protocol Error Status0：未检测到Flow Control Protocol Error;1：检测到Flow Control Protocol Error。
        UINT32    completiontimeouts    : 1   ; // [14] Completion Timeout Status0：未检测到Completion Timeout;
        UINT32    completerabortstatus  : 1   ; // [15] Completer Abort Status0：未检测到Completer Abort;1：检测到Completer Abort。
        UINT32    receiveroverflowstatus  : 1   ; // [16] Unexpected Completion Status0：未检测到Unexpected Completion;1：检测到Unexpected Completion。
        UINT32    malformedtlpstatus    : 1   ; // [17] Receiver Overflow Status0：未检测到Receiver Overflow;1：检测到Receiver Overflow。
        UINT32    ecrcerrorstatus       : 1   ; // [18] Malformed TLP Status0：未检测到Malformed TLP;1：检测到Malformed TLP。
        UINT32    ecrcerrorstat         : 1   ; // [19] ECRC Error Status0：未检测到ECRC Error;1：检测到ECRC Error。
        UINT32    unsupportedrequesterrorstatus  : 1   ; // [20] Unsupported Request Error Status0：未检测到Unsupported Request Error;1：检测到Unsupported Request Error;。
        UINT32    Reserved_31           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedstatus  : 1   ; // [24] AtomicOp Egress Blocked Status0：AtomicOp Egress is not Blocked;1：AtomicOp Egress is Blocked。
        UINT32    uncorr_err_status     : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_AER_CAP1_U;

// Define the union PCIE_EP_AER_CAP2_U
// 高级错误报告寄存器
// 0x108
typedef union tagAerCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_38           : 1   ; // [0] 未定义
        UINT32    Reserved_37           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrormask  : 1   ; // [4] Data Link Protocol Error Mask0：Data Link Protocol Error is not Masked;1：Data Link Protocol Error is Masked。
        UINT32    surprisedownerrormask  : 1   ; // [5] Surprise Down Error Mask，该版本IP不支持。
        UINT32    Reserved_36           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpmask       : 1   ; // [12] Poisoned TLP Mask0：Poisoned TLP is not Masked;1：Poisoned TLP is Masked。
        UINT32    flowcontrolprotocolerrormask  : 1   ; // [13] Flow Control Protocol Error Mask0：Flow Control Protocol Error is not Masked;1：Flow Control Protocol Error is Masked。
        UINT32    completiontimeoutmask  : 1   ; // [14] Completion Timeout Mask0：Completion Timeout is not Masked;1：Completion Timeout is Masked。
        UINT32    completerabortmask    : 1   ; // [15] Completer Abort Mask0：Completer Abort is not Masked;1：Completer Abort is Masked。
        UINT32    unexpectedcompletionmask  : 1   ; // [16] Unexpected Completion Mask0：Unexpected Completion is not Masked;1：Unexpected Completion is Masked。
        UINT32    receiveroverflowmask  : 1   ; // [17] Receiver Overflow Mask0：Receiver Overflow is not Masked;1：Receiver Overflow is Masked。
        UINT32    malformedtlpmask      : 1   ; // [18] Malformed TLP Mask0：Malformed TLP is not Masked;1：Malformed TLP is Masked。
        UINT32    ecrcerrormask         : 1   ; // [19] ECRC Error Mask0：ECRC Error is not Masked;1：ECRC Error is Masked。
        UINT32    unsupportedrequesterrormask  : 1   ; // [20] Unsupported Request Error Mask0：Unsupported Request Error is not Masked;1：Unsupported Request Error is Masked。
        UINT32    Reserved_35           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedmask  : 1   ; // [24] AtomicOp Egress Blocked Mask0：AtomicOp Egress Blocked is not Masked;1：AtomicOp Egress Blocked is Masked。
        UINT32    uncorr_err_mask       : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_AER_CAP2_U;

// Define the union PCIE_EP_AER_CAP3_U
// 高级错误报告寄存器
// 0x10C
typedef union tagAerCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_42           : 1   ; // [0] 未定义
        UINT32    Reserved_41           : 3   ; // [3..1] Reserved
        UINT32    datalinkprotocolerrorsever  : 1   ; // [4] Data Link Protocol Error Severity0：Non-fatal;1：Fatal。
        UINT32    surprisedownerrorseverity  : 1   ; // [5] Surprise Down Error Severity，该版本IP不支持
        UINT32    Reserved_40           : 6   ; // [11..6] Reserved
        UINT32    poisonedtlpseverity   : 1   ; // [12] Poisoned TLP Severity0：Non-fatal;1：Fatal。
        UINT32    flowcontrolprotocolerrorseveri  : 1   ; // [13] Flow Control Protocol Error Severity0：Non-fatal;1：Fatal。
        UINT32    completiontimeoutseverity  : 1   ; // [14] Completion Timeout Severity0：Non-fatal;1：Fatal。
        UINT32    completerabortseverity  : 1   ; // [15] Completer Abort Severity0：Non-fatal;1：Fatal。
        UINT32    unexpectedcompletionseverity  : 1   ; // [16] Unexpected Completion Severity0：Non-fatal;1：Fatal。
        UINT32    receiveroverflowseverity  : 1   ; // [17] Receiver Overflow Severity0：Non-fatal;1：Fatal。
        UINT32    malformedtlpseverity  : 1   ; // [18] Malformed TLP Severity0：Non-fatal;1：Fatal。
        UINT32    ecrcerrorseverity     : 1   ; // [19] ECRC Error Severity0：Non-fatal;1：Fatal。
        UINT32    unsupportedrequesterrorseverity  : 1   ; // [20] Unsupported Request Error Severity0：Non-fatal;1：Fatal。
        UINT32    Reserved_39           : 3   ; // [23..21] Reserved
        UINT32    atomicopegressblockedseverity  : 1   ; // [24] AtomicOp Egress Blocked Severity0：Non-fatal;1：Fatal。
        UINT32    uncorr_err_ser        : 7   ; // [31..25] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_AER_CAP3_U;

// Define the union PCIE_EP_AER_CAP4_U
// 高级错误报告寄存器
// 0x110
typedef union tagAerCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    receivererrorstatus   : 1   ; // [0] Receiver Error Status0：未检测到Receiver Error;1：检测到Receiver Error。
        UINT32    Reserved_44           : 5   ; // [5..1] Reserved
        UINT32    badtlpstatus          : 1   ; // [6] Bad TLP Status0：未检测到Bad TLP;1：检测到Bad TLP。
        UINT32    baddllpstatus         : 1   ; // [7] Bad DLLP Status0：未检测到Bad DLLP;1：检测到Bad DLLP。
        UINT32    replay_numrolloverstatus  : 1   ; // [8] REPLAY_NUM Rollover Status0：未检测到REPLAY_NUM Rollover;1：检测到REPLAY_NUM Rollover。
        UINT32    Reserved_43           : 3   ; // [11..9] Reserved
        UINT32    replytimertimeoutstatus  : 1   ; // [12] Reply Timer Timeout Status0：未检测到Reply Timer Timeout;1：检测到Reply Timer Timeout。
        UINT32    advisorynon_fatalerrorstatus  : 1   ; // [13] Advisory Non-Fatal Error Status0：未检测到Advisory Non-Fatal Error;1：检测到Advisory Non-Fatal Error。
        UINT32    corr_err_status       : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_AER_CAP4_U;

// Define the union PCIE_EP_AER_CAP5_U
// 高级错误报告寄存器
// 0x114
typedef union tagAerCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    receivererrormask     : 1   ; // [0] Receiver Error Mask0：Receiver Error is not Masked;1：Receiver Error is Masked。
        UINT32    Reserved_46           : 5   ; // [5..1] Reserved
        UINT32    badtlpmask            : 1   ; // [6] Bad TLP Mask0：Bad TLP is not Masked;1：Bad TLP is Masked。
        UINT32    baddllpmask           : 1   ; // [7] Bad DLLP Mask0：Bad DLLP is not Masked;1：Bad DLLP is Masked。
        UINT32    replay_numrollovermask  : 1   ; // [8] REPLAY_NUM Rollover Mask0：REPLAY_NUM Rollover is not Masked;1：REPLAY_NUM Rollover is Masked。
        UINT32    Reserved_45           : 3   ; // [11..9] Reserved
        UINT32    replytimertimeoutmask  : 1   ; // [12] Reply Timer Timeout Mask0：Reply Timer Timeout is not Masked;1：Reply Timer Timeout is Masked。
        UINT32    advisorynon_fatalerrormask  : 1   ; // [13] Advisory Non-Fatal Error Mask0：Advisory Non-Fatal Error is not Maskd;1：Advisory Non-Fatal Error is Masked。
        UINT32    corr_err_mask         : 18  ; // [31..14] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_AER_CAP5_U;

// Define the union PCIE_EP_AER_CAP6_U
// 高级错误报告寄存器
// 0x118
typedef union tagAerCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    firsterrorpointer     : 5   ; // [4..0] First Error Pointer
        UINT32    ecrcgenerationcapability  : 1   ; // [5] ECRC Generation Capability0：no capability;1：has capability。
        UINT32    ecrcgenerationenable  : 1   ; // [6] ECRC Generation Enable0：disable;1：enable。
        UINT32    ecrccheckcapable      : 1   ; // [7] ECRC Check Capable0：no capability;1：has capability。
        UINT32    ecrccheckenable       : 1   ; // [8] ECRC Check Enable0：diable;1：enable。
        UINT32    adv_cap_ctrl          : 23  ; // [31..9] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_AER_CAP6_U;

// Define the union PCIE_EP_AER_CAP11_U
// 高级错误报告寄存器
// 0x12C
typedef union tagAerCap11
{
    // Define the struct Bits
    struct
    {
        UINT32    correctableerrorreportingenable  : 1   ; // [0] Correctable Error Reporting Enable0：disable;1：enable。
        UINT32    non_fatalerrorreportingenable  : 1   ; // [1] Non-Fatal Error Reporting Enable0：disable;1：enable。
        UINT32    fatalerrorreportingenable  : 1   ; // [2] Fatal Error Reporting Enable0：disable;1：enable。
        UINT32    root_err_cmd          : 29  ; // [31..3] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_AER_CAP11_U;

// Define the union PCIE_EP_AER_CAP12_U
// 高级错误报告寄存器
// 0x130
typedef union tagAerCap12
{
    // Define the struct Bits
    struct
    {
        UINT32    err_correceived       : 1   ; // [0] ERR_COR Received0：未收到ERR_COR;1：收到ERR_COR。
        UINT32    multipleerr_correceived  : 1   ; // [1] Multiple ERR_COR Received0：未收到多个ERR_COR;1：收到多个ERR_COR。
        UINT32    err_fatal_nonfatalreceived  : 1   ; // [2] ERR_FATAL/NONFATAL Received0：未收到ERR_FATAL/NONFATAL;1：收到ERR_FATAL/NONFATAL。
        UINT32    multipleerr_fatal_nonfatalreceived  : 1   ; // [3] Multiple ERR_FATAL/NONFATAL Received0：未收到多个ERR_FATAL/NONFATAL;1：收到多个ERR_FATAL/NONFATAL。
        UINT32    firstuncorrectablefatal  : 1   ; // [4] First Uncorrectable Fatal0：指示没有收到第一个Uncorrectable Fatal;1：指示收到第一个Uncorrectable Fatal。
        UINT32    non_fatalerrormessagesreceived  : 1   ; // [5] Non-Fatal Error Messages Received0：未收到Non-Fatal Error Messages;1：收到Non-Fatal Error Messages。
        UINT32    fatalerrormessagesreceived  : 1   ; // [6] Fatal Error Messages Received0：未收到Fatal Error Messages;1：收到Fatal Error Messages。
        UINT32    Reserved_47           : 20  ; // [26..7] Reserved
        UINT32    root_err_status       : 5   ; // [31..27] Advanced Error Interrupt Message Number
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_AER_CAP12_U;

// Define the union PCIE_EP_AER_CAP13_U
// 高级错误报告寄存器
// 0x134
typedef union tagAerCap13
{
    // Define the struct Bits
    struct
    {
        UINT32    err_corsourceidentification  : 16  ; // [15..0] ERR_COR Source Identification
        UINT32    err_src_id            : 16  ; // [31..16] ERR_FATAL/NONFATAL Source Identification
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_AER_CAP13_U;

// Define the union PCIE_EP_VC_CAP0_U
// 虚拟通道功能寄存器
// 0x140
typedef union tagVcCap0
{
    // Define the struct Bits
    struct
    {
        UINT32    pciexpressextendedcapabilityid  : 16  ; // [15..0] PCI Express Extended Capability ID
        UINT32    capabilityversion     : 4   ; // [19..16] Capability Version
        UINT32    vc_cap_hdr            : 12  ; // [31..20] Next Capability Offset
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_VC_CAP0_U;

// Define the union PCIE_EP_VC_CAP1_U
// 虚拟通道功能寄存器
// 0x144
typedef union tagVcCap1
{
    // Define the struct Bits
    struct
    {
        UINT32    extendedvccount       : 3   ; // [2..0] Extended VC Count
        UINT32    Reserved_50           : 1   ; // [3] Reserved
        UINT32    lowpriorityextendedvccount  : 3   ; // [6..4] Low Priority Extended VC Count
        UINT32    Reserved_49           : 1   ; // [7] Reserved
        UINT32    referenceclock        : 2   ; // [9..8] Reference Clock，不适用于Endpoint，硬连线为0
        UINT32    portarbitrationtableentrysize  : 2   ; // [11..10] Port Arbitration Table Entry Size，不适用于Endpoint，硬连线为0
        UINT32    vc_cap1               : 20  ; // [31..12] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_VC_CAP1_U;

// Define the union PCIE_EP_VC_CAP2_U
// 虚拟通道功能寄存器
// 0x148
typedef union tagVcCap2
{
    // Define the struct Bits
    struct
    {
        UINT32    vcarbitrationcapability  : 8   ; // [7..0] VC Arbitration Capability
        UINT32    Reserved_51           : 16  ; // [23..8] Reserved
        UINT32    vc_cap2               : 8   ; // [31..24] VC Arbitration Table Offset，该版本IP不支持
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_VC_CAP2_U;

// Define the union PCIE_EP_VC_CAP3_U
// 虚拟通道功能寄存器
// 0x14C
typedef union tagVcCap3
{
    // Define the struct Bits
    struct
    {
        UINT32    loadvcarbitrationtable  : 1   ; // [0] Load VC Arbitration Table
        UINT32    vcarbitrationselect   : 3   ; // [3..1] VC Arbitration Select
        UINT32    Reserved_53           : 12  ; // [15..4] Reserved
        UINT32    arbitrationtablestatus  : 1   ; // [16] Arbitration Table Status
        UINT32    Reserved_52           : 15  ; // [31..17] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_VC_CAP3_U;

// Define the union PCIE_EP_VC_CAP4_U
// 虚拟通道功能寄存器
// 0x150
typedef union tagVcCap4
{
    // Define the struct Bits
    struct
    {
        UINT32    portarbitrationcapability  : 8   ; // [7..0] Port Arbitration Capability
        UINT32    Reserved_56           : 6   ; // [13..8] Reserved
        UINT32    Reserved_55           : 1   ; // [14] 未定义
        UINT32    rejectsnooptransactions  : 1   ; // [15] Reject Snoop Transactions，不适用于Endpoint，硬连线为0
        UINT32    maximumtimeslots      : 7   ; // [22..16] Maximum Time Slots，不适用于Endpoint
        UINT32    Reserved_54           : 1   ; // [23] Reserved
        UINT32    vc_res_cap            : 8   ; // [31..24] Port Arbitration Table Offset，不适用于Endpoint，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_VC_CAP4_U;

// Define the union PCIE_EP_VC_CAP5_U
// 虚拟通道功能寄存器
// 0x154
typedef union tagVcCap5
{
    // Define the struct Bits
    struct
    {
        UINT32    tc_vcmap              : 8   ; // [7..0] TC/VC Map
        UINT32    Reserved_59           : 8   ; // [15..8] Reserved
        UINT32    loadportarbitrationtable  : 1   ; // [16] Load Port Arbitration Table，不适用于Endpoint
        UINT32    portarbitrationselec  : 3   ; // [19..17] Port Arbitration Select，对于Endpoint硬连线为0
        UINT32    Reserved_58           : 4   ; // [23..20] Reserved
        UINT32    vcid                  : 3   ; // [26..24] VC ID，硬连线为0
        UINT32    Reserved_57           : 4   ; // [30..27] Reserved
        UINT32    vc_res_ctrl           : 1   ; // [31] VC Enable，硬连线为1
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_VC_CAP5_U;

// Define the union PCIE_EP_VC_CAP6_U
// 虚拟通道功能寄存器
// 0x158
typedef union tagVcCap6
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_60           : 16  ; // [15..0] Reserved
        UINT32    portarbitrationtablestatus  : 1   ; // [16] Port Arbitration Table Status
        UINT32    vcnegotiationpending  : 1   ; // [17] VC Negotiation Pending
        UINT32    vc_res_status         : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_VC_CAP6_U;

// Define the union PCIE_EP_VC_CAP7_U
// 虚拟通道功能寄存器
// 0x15C
typedef union tagVcCap7
{
    // Define the struct Bits
    struct
    {
        UINT32    portarbitrationcapability  : 8   ; // [7..0] Port Arbitration Capability，硬连线为1
        UINT32    Reserved_63           : 6   ; // [13..8] Reserved
        UINT32    Reserved_62           : 1   ; // [14] 未定义
        UINT32    rejectsnooptransactions  : 1   ; // [15] Reject Snoop Transactions
        UINT32    maximumtimeslots      : 7   ; // [22..16] Maximum Time Slots
        UINT32    Reserved_61           : 1   ; // [23] Reserved
        UINT32    vc_res_cap0           : 8   ; // [31..24] Port Arbitration Table Offset，不适用于Endpoint，硬连线为0
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_VC_CAP7_U;

// Define the union PCIE_EP_VC_CAP8_U
// 虚拟通道功能寄存器
// 0x160
typedef union tagVcCap8
{
    // Define the struct Bits
    struct
    {
        UINT32    tc_vcmap              : 8   ; // [7..0] TC/VC Map
        UINT32    Reserved_66           : 8   ; // [15..8] Reserved
        UINT32    loadportarbitrationtable  : 1   ; // [16] Load Port Arbitration Table
        UINT32    portarbitrationselect  : 3   ; // [19..17] Port Arbitration Select，对于Endpoint硬连线为0
        UINT32    Reserved_65           : 4   ; // [23..20] Reserved
        UINT32    vcid                  : 3   ; // [26..24] VC ID
        UINT32    Reserved_64           : 4   ; // [30..27] Reserved
        UINT32    vc_res_ctrl0          : 1   ; // [31] VC Enable0：VC禁用;1：VC使能。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_VC_CAP8_U;

// Define the union PCIE_EP_VC_CAP9_U
// 虚拟通道功能寄存器
// 0x164
typedef union tagVcCap9
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_67           : 16  ; // [15..0] Reserved
        UINT32    arbitrationtablestatus  : 1   ; // [16] Arbitration Table Status
        UINT32    vcnegotiationpending  : 1   ; // [17] VC Negotiation Pending
        UINT32    vc_res_status0        : 14  ; // [31..18] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_VC_CAP9_U;

// Define the union PCIE_EP_PORT_LOGIC0_U
// 端口逻辑寄存器
// 0x700
typedef union tagPortLogic0
{
    // Define the struct Bits
    struct
    {
        UINT32    ack_lat_timer         : 16  ; // [15..0] Round Trip Latency Time Limit
        UINT32    replay_timer          : 16  ; // [31..16] Replay Time Limit
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC0_U;

// Define the union PCIE_EP_PORT_LOGIC2_U
// 端口逻辑寄存器
// 0x708
typedef union tagPortLogic2
{
    // Define the struct Bits
    struct
    {
        UINT32    linknumber            : 8   ; // [7..0] Link Number，不适用于Endpoint
        UINT32    Reserved_70           : 7   ; // [14..8] Reserved
        UINT32    forcelink             : 1   ; // [15] Force Link
        UINT32    linkstate             : 6   ; // [21..16] Link State
        UINT32    Reserved_69           : 2   ; // [23..22] Reserved
        UINT32    port_force_link       : 8   ; // [31..24] Low Power Entrance Count
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC2_U;

// Define the union PCIE_EP_PORT_LOGIC3_U
// 端口逻辑寄存器
// 0x07OC
typedef union tagPortLogic3
{
    // Define the struct Bits
    struct
    {
        UINT32    ackfrequency          : 8   ; // [7..0] Ack Frequency
        UINT32    n_fts                 : 8   ; // [15..8] N_FTS
        UINT32    commonclockn_fts      : 8   ; // [23..16] Common Clock N_FTS
        UINT32    l0sentrancelatency    : 3   ; // [26..24] L0s Entrance Latency000：1us;001：2us;010：3us;011：4us;100：5us;101：6us;110：7us;111：7us。
        UINT32    l1entrancelatency     : 3   ; // [29..27] L1 Entrance Latency000：1us;001：2us;010：4us;011：8us;100：16us;101：32us;110：64us;111：64us。
        UINT32    enteraspml1withoutreceiveinl0s  : 1   ; // [30] Enter ASPM L1 without receive in L0s0：发送接收端都处于L0s一段空闲时间后，core才能进入L1状态;
        UINT32    ack_aspm              : 1   ; // [31] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC3_U;

// Define the union PCIE_EP_PORT_LOGIC4_U
// 端口逻辑寄存器
// 0x710
typedef union tagPortLogic4
{
    // Define the struct Bits
    struct
    {
        UINT32    vendorspecificdllprequest  : 1   ; // [0] Vendor Specific DLLP Request0：不发送Vendor Specific DLLP Register定义的DLLP;1：发送Vendor Specific DLLP Register定义的DLLP。
        UINT32    scrambledisable       : 1   ; // [1] Scramble Disable0：禁用加扰;1：使能加扰。
        UINT32    loopbackenable        : 1   ; // [2] Loopback Enable0：禁用loopback;1：使能loopback。
        UINT32    resetassert           : 1   ; // [3] Reset Assert，不适用于EP0：不触发recovery状态;
        UINT32    Reserved_73           : 1   ; // [4] Reserved
        UINT32    dlllinkenable         : 1   ; // [5] DLL Link Enable0：禁用initFC DLLP发送以及建立链路;1：使能initFC DLLP发送以及建立链路。
        UINT32    Reserved_72           : 1   ; // [6] Reserved
        UINT32    fastlinkmode          : 1   ; // [7] Fast Link Mode0：禁用Fast Link Mode;1：使能Fast Link Mode。
        UINT32    Reserved_71           : 8   ; // [15..8] Reserved
        UINT32    linkmodeenable        : 6   ; // [21..16] Link Mode Enable000001：x1;
        UINT32    crosslinkenable       : 1   ; // [22] Crosslink Enable0：禁用crosslink;1：使能crosslink。
        UINT32    crosslinkactive       : 1   ; // [23] Crosslink Active0：未发生crosslink;1：发生crosslink。
        UINT32    port_link_ctrl        : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC4_U;

// Define the union PCIE_EP_PORT_LOGIC5_U
// 端口逻辑寄存器
// 0x714
typedef union tagPortLogic5
{
    // Define the struct Bits
    struct
    {
        UINT32    insertlaneskewfortransmit  : 24  ; // [23..0] Insert Lane Skew for Transmit
        UINT32    flowcontroldisable    : 1   ; // [24] Flow Control Disable0：不禁用core发送FC DLLP;1：禁用core发送FC DLLP。
        UINT32    ack_nakdisable        : 1   ; // [25] Ack/Nak Disable0：不禁用core发送Ack/Nak DLLP;1：禁用core发送Ack/Nak DLLP。
        UINT32    Reserved_75           : 5   ; // [30..26] reserved
        UINT32    lane_skew             : 1   ; // [31] Disable Lane-to-Lane Deskew0：不禁用Lane-to-Lane Deskew;1：禁用Lane-to-Lane Deskew。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC5_U;

// Define the union PCIE_EP_PORT_LOGIC6_U
// 端口逻辑寄存器
// 0x718
typedef union tagPortLogic6
{
    // Define the struct Bits
    struct
    {
        UINT32    numberoftssymbols     : 4   ; // [3..0] Number of TS Symbols
        UINT32    Reserved_77           : 4   ; // [7..4] Reserved
        UINT32    numberofskpsymbols    : 3   ; // [10..8] Number of SKP Symbols
        UINT32    Reserved_76           : 3   ; // [13..11] Reserved
        UINT32    timermodifierforreplaytimer  : 5   ; // [18..14] Timer Modifier for Replay Timer
        UINT32    timermodifierforack_naklatencytimer  : 5   ; // [23..19] Timer Modifier for Ack/Nak Latency Timer
        UINT32    timermodifierforflowcontrolwatchdogtimer  : 5   ; // [28..24] Timer Modifier for Flow Control Watchdog Timer
        UINT32    sym_num               : 3   ; // [31..29] Configuration Requests targeted at function numbers above this value will be returned with UR (unsupported request).
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC6_U;

// Define the union PCIE_EP_PORT_LOGIC7_U
// 端口逻辑寄存器
// 0x71C
typedef union tagPortLogic7
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0posteddataqueuedepth  : 11  ; // [10..0] SKP Interval Value
        UINT32    Reserved_78           : 4   ; // [14..11] Reserved
        UINT32    sym_timer             : 1   ; // [15] Disable FC Watchdog Timer0：不禁用FC Watchdog Timer;1：禁用FC Watchdog Timer。
        UINT32    maskfunctionmismatchfilteringfo  : 1   ; // [16] Mask function mismatch filtering for incoming Requests0：不使用Mask;1：使用Mask。
        UINT32    maskpoisonedtlpfiltering  : 1   ; // [17] Mask poisoned TLP filtering0：不使用Mask;1：使用Mask。
        UINT32    maskbarmatchfiltering  : 1   ; // [18] Mask BAR match filtering0：不使用Mask;1：使用Mask。
        UINT32    masktype1configurationrequestfiltering  : 1   ; // [19] Mask Type 1 Configuration Request filtering0：不使用Mask;1：使用Mask。
        UINT32    masklockedrequestfiltering  : 1   ; // [20] Mask Locked Request filtering0：不使用Mask;1：使用Mask。
        UINT32    masktagerrorrulesforreceivedcompletions  : 1   ; // [21] Mask Tag error rules for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maskrequesteridmismatcherrorforreceivedcompletions  : 1   ; // [22] Mask Requester ID mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maskfunctionmismatcherrorforreceivedcompletions  : 1   ; // [23] Mask function mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_traffic_classmis_match_error_forreceived_completions  : 1   ; // [24] Mask Traffic Class mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_attributesmismatcherrorforreceivedcompletions  : 1   ; // [25] Mask Attributes mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    mask_length_mismatch_error_forreceive_dcompletions  : 1   ; // [26] Mask Length mismatch error for received Completions0：不使用Mask;1：使用Mask。
        UINT32    maske_crcerror_filtering  : 1   ; // [27] Mask ECRC error filtering0：不使用Mask;1：使用Mask。
        UINT32    maske_crcerror_filtering_forcompletions  : 1   ; // [28] Mask ECRC error filtering for Completions0：不使用Mask;1：使用Mask。
        UINT32    message_control       : 1   ; // [29] 0：send decoded Message on the SII,then drop the Message TLPs;
        UINT32    maskfilteringofreceived  : 1   ; // [30] Mask filtering of received I/O Requests (RC mode only)0：不使用Mask;1：使用Mask。
        UINT32    flt_mask1             : 1   ; // [31] Mask filtering of received Configuration Requests (RC mode only)0：不使用Mask;1：使用Mask。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC7_U;

// Define the union PCIE_EP_PORT_LOGIC8_U
// 端口逻辑寄存器
// 0x720
typedef union tagPortLogic8
{
    // Define the struct Bits
    struct
    {
        UINT32    cx_flt_mask_venmsg0_drop  : 1   ; // [0] CX_FLT_MASK_VENMSG0_DROP0：丢弃Vendor MSG Type 0并报告UR错误;1：不丢弃Vendor MSG Type 0。
        UINT32    cx_flt_mask_venmsg1_drop  : 1   ; // [1] CX_FLT_MASK_VENMSG1_DROP0：丢弃Vendor MSG Type 1;1：不丢弃Vendor MSG Type 1。
        UINT32    cx_flt_mask_dabort_4ucpl  : 1   ; // [2] CX_FLT_MASK_DABORT_4UCPL0：对于unexpected CPL使能DLLP abort;1：对于unexpected CPL禁用DLLP abort。
        UINT32    cx_flt_mask_handle_flush  : 1   ; // [3] CX_FLT_MASK_HANDLE_FLUSH0：禁用core filter处理flush请求;1：使能core filter处理flush请求。
        UINT32    flt_mask2             : 28  ; // [31..4] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC8_U;

// Define the union PCIE_EP_PORT_LOGIC9_U
// 端口逻辑寄存器
// 0x724
typedef union tagPortLogic9
{
    // Define the struct Bits
    struct
    {
        UINT32    amba_multi_outbound_decomp_np  : 1   ; // [0] Enable AMBA Multiple Outbound Decomposed NP Sub-Request0：禁用;1：使能。
        UINT32    amba_obnp_ctrl        : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC9_U;

// Define the union PCIE_EP_PORT_LOGIC12_U
// 端口逻辑寄存器
// 0x730
typedef union tagPortLogic12
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitposteddatafccredits  : 12  ; // [11..0] Transmit Posted Data FC Credits
        UINT32    transmitpostedheaderfccredits  : 8   ; // [19..12] Transmit Posted Header FC Credits
        UINT32    tx_pfc_status         : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC12_U;

// Define the union PCIE_EP_PORT_LOGIC13_U
// 端口逻辑寄存器
// 0x734
typedef union tagPortLogic13
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitnon_posteddatafccredits  : 12  ; // [11..0] Transmit Non-Posted Data FC Credits
        UINT32    transmitnon_postedheaderfccredits  : 8   ; // [19..12] Transmit Non-Posted Header FC Credits
        UINT32    tx_npfc_status        : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC13_U;

// Define the union PCIE_EP_PORT_LOGIC14_U
// 端口逻辑寄存器
// 0x738
typedef union tagPortLogic14
{
    // Define the struct Bits
    struct
    {
        UINT32    transmitcompletiondatafccredits  : 12  ; // [11..0] Transmit Completion Data FC Credits
        UINT32    transmitcompletionheaderfccredits  : 8   ; // [19..12] Transmit Completion Header FC Credits
        UINT32    tx_cplfc_status       : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC14_U;

// Define the union PCIE_EP_PORT_LOGIC15_U
// 端口逻辑寄存器
// 0x73C
typedef union tagPortLogic15
{
    // Define the struct Bits
    struct
    {
        UINT32    rx_tlp_fc_credit_not_retured  : 1   ; // [0] Received TLP FC Credits Not ReturnedIndicates that the core has sent a TLP but has not yet received anUpdateFC DLLP indicating that the credits for that TLP have been restoredby the receiver at the other end of the link
        UINT32    tx_retry_buf_not_empty  : 1   ; // [1] Transmit Retry Buffer Not EmptyIndicates that there is data in the transmit retry buffer.
        UINT32    rx_queue_not_empty    : 1   ; // [2] Received Queue Not EmptyIndicates there is data in one or more of the receive buffers
        UINT32    Reserved_80           : 13  ; // [15..3] Reserved
        UINT32    fc_latency_timer_override_value  : 13  ; // [28..16] FC Latency Timer Override Value
        UINT32    Reserved_79           : 2   ; // [30..29] Reserved
        UINT32    fc_latency_timer_override_en  : 1   ; // [31] FC Latency Timer Override Enable
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC15_U;

// Define the union PCIE_EP_PORT_LOGIC16_U
// 端口逻辑寄存器
// 0x748
typedef union tagPortLogic16
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0posteddatacredits  : 12  ; // [11..0] VC0 Posted Data Credits
        UINT32    vc0postedheadercredits  : 8   ; // [19..12] VC0 Posted Header Credits
        UINT32    Reserved_82           : 1   ; // [20] Reserved
        UINT32    vc0_postedtlpqueuemode  : 1   ; // [21] VC0 Posted TLP Queue Mode0：未选择store-and-forword;1：选择store-and-forword。
        UINT32    vc0postedtlpqueuemode  : 1   ; // [22] VC0 Posted TLP Queue Mode0：未选择cut_through;1：选择cut_through。
        UINT32    vc0postedtlpqueuemo   : 1   ; // [23] VC0 Posted TLP Queue Mode0：未选择Bypass;1：选择Bypass。
        UINT32    Reserved_81           : 6   ; // [29..24] Reserved
        UINT32    tlptypeorderingforvc0  : 1   ; // [30] TLP Type Ordering for VC00：Strict ordering;1：Ordering follows the rules in PCIe 3.0。
        UINT32    rx_pque_ctrl          : 1   ; // [31] VC Ordering for Receive Queues0：round robin;
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC16_U;

// Define the union PCIE_EP_PORT_LOGIC17_U
// 端口逻辑寄存器
// 0x74C
typedef union tagPortLogic17
{
    // Define the struct Bits
    struct
    {
        UINT32    vc0non_posteddatacredits  : 12  ; // [11..0] VC0 Non-Posted data Credits
        UINT32    vc0non_postedheadercredits  : 8   ; // [19..12] VC0 Non-Posted Header Credits
        UINT32    rx_npque_ctrl         : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC17_U;

// Define the union PCIE_EP_PORT_LOGIC18_U
// 端口逻辑寄存器
// 0x750
typedef union tagPortLogic18
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_comp_data_credits  : 12  ; // [11..0] VC0 Completion Data Credits
        UINT32    vc0_cpl_header_credt  : 8   ; // [19..12] VC0 Completion header credits
        UINT32    Reserved_84           : 12  ; // [31..20] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC18_U;

// Define the union PCIE_EP_PORT_LOGIC19_U
// 端口逻辑寄存器
// 0x7A8
typedef union tagPortLogic19
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_posted_data_que_path  : 14  ; // [13..0] VC0 Posted Data Queue Depth
        UINT32    Reserved_85           : 2   ; // [15..14] Reserved
        UINT32    vco_posted_head_queue_depth  : 10  ; // [25..16] VC0 Posted Header Queue Depth
        UINT32    vc_pbuf_ctrl          : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC19_U;

// Define the union PCIE_EP_PORT_LOGIC20_U
// 端口逻辑寄存器
// 0x7AC
typedef union tagPortLogic20
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_np_data_que_depth  : 14  ; // [13..0] VC0 Non-Posted Data Queue Depth
        UINT32    Reserved_87           : 2   ; // [15..14] Reserved
        UINT32    vco_np_header_que_depth  : 10  ; // [25..16] VC0 Non-Posted Header Queue Depth
        UINT32    vc_npbuf_ctrl         : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC20_U;

// Define the union PCIE_EP_PORT_LOGIC21_U
// 端口逻辑寄存器
// 0x7B0
typedef union tagPortLogic21
{
    // Define the struct Bits
    struct
    {
        UINT32    vco_comp_data_queue_depth  : 14  ; // [13..0] VC0 Completion Data Queue Depth
        UINT32    Reserved_89           : 2   ; // [15..14] Reserved
        UINT32    vco_posted_head_queue_depth  : 10  ; // [25..16] VC0 Posted Header Queue Depth
        UINT32    Reserved_88           : 6   ; // [31..26] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC21_U;

// Define the union PCIE_EP_PORT_LOGIC22_U
// 端口逻辑寄存器
// 0x80C
typedef union tagPortLogic22
{
    // Define the struct Bits
    struct
    {
        UINT32    n_fts                 : 8   ; // [7..0] Sets the Number of Fast Training Sequences (N_FTS) that the core advertises as its N_FTS during Gen2 or Gen3 Link training
        UINT32    pre_determ_num_of_lane  : 9   ; // [16..8] Predetermined Number of Lanes1：1 lane;2：2 lanes;其他值：保留。
        UINT32    det_sp_change         : 1   ; // [17] Directed Speed Change0：指示LTSSM在链路初始化完成后不改变到GEN2速率;1：指示LTSSM在链路初始化完成后改变到GEN2速率。
        UINT32    config_phy_tx_sw      : 1   ; // [18] Config PHY Tx Swing0：Low Swing;1：Full Swing。
        UINT32    config_tx_comp_rcv_bit  : 1   ; // [19] Config Tx Compliance Receive Bit0：不指示LTSSM发送含有声明compliance接受比特的TS有序集;1：指示LTSSM发送含有声明compliance接受比特的TS有序集。
        UINT32    set_emp_level         : 1   ; // [20] Used to set the de-emphasis level for Upstream Ports0：-6dB;1：-3.5dB。
        UINT32    Reserved_90           : 11  ; // [31..21] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORT_LOGIC22_U;

// Define the union PCIE_EP_PORTLOGIC25_U
// 端口逻辑寄存器
// 0x818
typedef union tagPortlogic25
{
    // Define the struct Bits
    struct
    {
        UINT32    remote_rd_req_size    : 3   ; // [2..0] Remote Read Request Size000：128;001：256;010：512;011：1024;100：2048;101：4096;110：保留;111：保留。
        UINT32    Reserved_93           : 5   ; // [7..3] Reserved
        UINT32    remote_max_brd_tag    : 8   ; // [15..8] Remote Max Bridge Tag
        UINT32    Reserved_92           : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC25_U;

// Define the union PCIE_EP_PORTLOGIC26_U
// 端口逻辑寄存器
// 0x81C
typedef union tagPortlogic26
{
    // Define the struct Bits
    struct
    {
        UINT32    resize_master_resp_compser  : 1   ; // [0] Resize Master Response Composer0：不改变AXI Master Response Composer Contro Register 0的值;1：改变AXI Master Response Composer Contro Register 0的值。
        UINT32    axi_ctrl1             : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC26_U;

// Define the union PCIE_EP_PORTLOGIC54_U
// 端口逻辑寄存器
// 0x900
typedef union tagPortlogic54
{
    // Define the struct Bits
    struct
    {
        UINT32    region_index          : 4   ; // [3..0] Region Index
        UINT32    Reserved_94           : 27  ; // [30..4] Reserved
        UINT32    iatu_view             : 1   ; // [31] Region Direction0：Outbound;1：Inbound。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC54_U;

// Define the union PCIE_EP_PORTLOGIC55_U
// 端口逻辑寄存器
// 0x904
typedef union tagPortlogic55
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu1_type            : 5   ; // [4..0] 出站TLP的地址在该区域内则该TLP的TYPE字段用该值替换;入站TLP的TYPE字段如果等于该值则执行地址转换。
        UINT32    iatu1_tc              : 3   ; // [7..5] 出站TLP的地址在该区域内则该TLP的TC字段用该值替换;入站TLP的TC字段如果等于该值则执行地址转换。
        UINT32    iatu1_td              : 1   ; // [8] 出站TLP的地址在该区域内则该TLP的TD字段用该值替换;入站TLP的TD字段如果等于该值则执行地址转换。
        UINT32    iatu1_attr            : 2   ; // [10..9] 出站TLP的地址在该区域内则该TLP的ATTR字段用该值替换;入站TLP的ATTR字段如果等于该值则执行地址转换。
        UINT32    Reserved_98           : 5   ; // [15..11] Reserved
        UINT32    iatu1_at              : 2   ; // [17..16] 出站TLP的地址在该区域内则该TLP的AT字段用该值替换;入站TLP的AT字段如果等于该值则执行地址转换。
        UINT32    Reserved_97           : 2   ; // [19..18] Reserved
        UINT32    iatu1_id              : 3   ; // [22..20] 出站TLP的地址在该区域内则该TLP的Requester ID的功能号字段用该值替换;对于入站MEM/IO，如果与该功能号的BAR匹配，则执行地址转换;对于入站CFG，如果功能号字段等于该值则执行地址转换。
        UINT32    Reserved_96           : 9   ; // [31..23] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC55_U;

// Define the union PCIE_EP_PORTLOGIC56_U
// 端口逻辑寄存器
// 0x908
typedef union tagPortlogic56
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu2_type            : 8   ; // [7..0] 出站TLP的地址在该区域内，并且转换的TLP的TYPE字段为消息，那么该TLP的Message Code字段用该值替换;
        UINT32    iatu2_bar_num         : 3   ; // [10..8] BAR Number对于Outbound不适用。
        UINT32    Reserved_102          : 3   ; // [13..11] Reserved
        UINT32    iatu2_tc_match_en     : 1   ; // [14] TC Match Enable对于Outbound不适用。
        UINT32    iatu2_td_match_en     : 1   ; // [15] TD Match Enable对于Outbound不适用。
        UINT32    iatu2_attr_match_en   : 1   ; // [16] ATTR Match Enable对于Outbound不适用。
        UINT32    Reserved_101          : 1   ; // [17] Reserved
        UINT32    iatu2_at_match_en     : 1   ; // [18] AT Match Enable对于Outbound不适用。
        UINT32    iatu2_func_num_match_en  : 1   ; // [19] Function Number Match Enable对于Outbound不适用。
        UINT32    iatu2_virtual_func_num_match_en  : 1   ; // [20] Virtual Function Number Match Enable对于Outbound不适用。
        UINT32    message_code_match_en  : 1   ; // [21] Message Code Match Enable对于Outbound不适用。
        UINT32    Reserved_100          : 2   ; // [23..22] Reserved
        UINT32    iatu2_response_code   : 2   ; // [25..24] Response Code对于Outbound不适用。
        UINT32    Reserved_99           : 1   ; // [26] Reserved
        UINT32    iatu2_fuzzy_type_match_mode  : 1   ; // [27] Fuzzy Type Match Mode对于Outbound不适用。
        UINT32    iatu2_cfg_shift_mode  : 1   ; // [28] CFG Shift Mode0：不使用CFG Shift Mode;1：使用CFG Shift Mode。
        UINT32    iatu2_ivert_mode      : 1   ; // [29] Invert Mode0：不使用Invert Mode;1：使用Invert Mode。
        UINT32    iatu2_match_mode      : 1   ; // [30] Match Mode对于Outbound不适用。
        UINT32    iatu2_region_en       : 1   ; // [31] Region Enable0：禁用该区域地址转换;1：使能该区域地址转换。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC56_U;

// Define the union PCIE_EP_PORTLOGIC57_U
// 端口逻辑寄存器
// 0x90C
typedef union tagPortlogic57
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu_start_low        : 12  ; // [11..0] Forms Bits [11:0] of the start address of the address region to be translated.
        UINT32    iatu_start_high       : 20  ; // [31..12] Forms Bits [31:12] of the start address of the address region to be translated.
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC57_U;

// Define the union PCIE_EP_PORTLOGIC59_U
// 端口逻辑寄存器
// 0x914
typedef union tagPortlogic59
{
    // Define the struct Bits
    struct
    {
        UINT32    iatu_limit_low        : 12  ; // [11..0] Forms Bits [11:0] of the end address of the address region to be translated
        UINT32    iatu_limit_high       : 20  ; // [31..12] Forms Bits [31:12] of the end address of the address region to be translated
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC59_U;

// Define the union PCIE_EP_PORTLOGIC60_U
// 端口逻辑寄存器
// 0x918
typedef union tagPortlogic60
{
    // Define the struct Bits
    struct
    {
        UINT32    xlated_addr_high      : 12  ; // [11..0] Forms Bits [11:0] of the start address of the new address of the translated region
        UINT32    xlated_addr_low       : 20  ; // [31..12] Forms Bits [31:12] of the of the new address of the translated region
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC60_U;

// Define the union PCIE_EP_PORTLOGIC62_U
// 端口逻辑寄存器
// 0x97C
typedef union tagPortlogic62
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_wr_eng_en         : 1   ; // [0] DMA Write Engine Enable0：禁用DMA Write Engine;1：使能DMA Write Engine。
        UINT32    dma_wr_ena            : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC62_U;

// Define the union PCIE_EP_PORTLOGIC63_U
// 端口逻辑寄存器
// 0x980
typedef union tagPortlogic63
{
    // Define the struct Bits
    struct
    {
        UINT32    wr_doorbell_num       : 3   ; // [2..0] Doorbell Number必须写入0x0来启动DMA写操作，目前仅支持单通道。
        UINT32    Reserved_104          : 28  ; // [30..3] Reserved
        UINT32    dma_wr_dbell_stop     : 1   ; // [31] Stop0：不停止产生请求;1：停止产生请求。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC63_U;

// Define the union PCIE_EP_PORTLOGIC64_U
// 端口逻辑寄存器
// 0x99C
typedef union tagPortlogic64
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_read_eng_en       : 1   ; // [0] DMA Read Engine Enable0：禁用DMA Read Engine;1：使能DMA Read Engine。
        UINT32    Reserved_105          : 31  ; // [31..1] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC64_U;

// Define the union PCIE_EP_PORTLOGIC65_U
// 端口逻辑寄存器
// 0x9A0
typedef union tagPortlogic65
{
    // Define the struct Bits
    struct
    {
        UINT32    rd_doorbell_num       : 3   ; // [2..0] Doorbell Number必须写入0x0来启动DMA读操作，目前仅支持单通道。
        UINT32    Reserved_107          : 28  ; // [30..3] Reserved
        UINT32    dma_rd_dbell_stop     : 1   ; // [31] Stop0：不停止产生请求;1：停止产生请求。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC65_U;

// Define the union PCIE_EP_PORTLOGIC66_U
// 端口逻辑寄存器
// 0x9BC
typedef union tagPortlogic66
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_status       : 8   ; // [7..0] Done Interrupt Status0：未产生完成中断;1：产生完成中断。
        UINT32    Reserved_109          : 8   ; // [15..8] Reserved
        UINT32    abort_int_status      : 8   ; // [23..16] Abort Interrupt Status0：未丢弃出错传输;1：丢弃出错传输。
        UINT32    Reserved_108          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC66_U;

// Define the union PCIE_EP_PORTLOGIC67_U
// 端口逻辑寄存器
// 0x9C4
typedef union tagPortlogic67
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_mask         : 8   ; // [7..0] Done Interrupt Mask0：不使用Done Interrupt Mask;1：使用Done Interrupt Mask。
        UINT32    Reserved_112          : 8   ; // [15..8] Reserved
        UINT32    abort_int_mask        : 8   ; // [23..16] Abort Interrupt Mask0：不使用Abort Interrupt Mask;
        UINT32    Reserved_111          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC67_U;

// Define the union PCIE_EP_PORTLOGIC68_U
// 端口逻辑寄存器
// 0x9C8
typedef union tagPortlogic68
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_clr          : 8   ; // [7..0] Done Interrupt Clear0：不清除Done Interrupt Status字段;1：清除Done Interrupt Status字段。
        UINT32    Reserved_115          : 8   ; // [15..8] Reserved
        UINT32    abort_int_clr         : 8   ; // [23..16] Abort Interrupt Clear0：不清除Abort Interrupt Status字段;1：清除Abort Interrupt Status字段。
        UINT32    Reserved_114          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC68_U;

// Define the union PCIE_EP_PORTLOGIC69_U
// 端口逻辑寄存器
// 0x9CC
typedef union tagPortlogic69
{
    // Define the struct Bits
    struct
    {
        UINT32    app_rd_err_det        : 8   ; // [7..0] Application Read Error Detected0：未检测到Application Read Error ;1：检测到Application Read Error。
        UINT32    Reserved_117          : 8   ; // [15..8] Reserved
        UINT32    ll_element_fetch_err_det  : 8   ; // [23..16] Linked List Element Fetch Error Detected0：未检测到Linked List Element Fetch Error;1：检测到Linked List Element Fetch Error。
        UINT32    Reserved_116          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC69_U;

// Define the union PCIE_EP_PORTLOGIC74_U
// 端口逻辑寄存器
// 0x9E0
typedef union tagPortlogic74
{
    // Define the struct Bits
    struct
    {
        UINT32    dma_wr_c0_imwr_data   : 16  ; // [15..0] The DMA uses this field to generate the data field for the Done or Abort IMWr TLPs it generates for write Channel 0
        UINT32    dma_wr_c1_imwr_data   : 16  ; // [31..16] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC74_U;

// Define the union PCIE_EP_PORTLOGIC75_U
// 端口逻辑寄存器
// 0xA00
typedef union tagPortlogic75
{
    // Define the struct Bits
    struct
    {
        UINT32    wr_ch_ll_remote_abort_int_en  : 8   ; // [7..0] Write Channel LL Remote Abort Interrupt Enable (LLRAIE)0：禁用Write Channel LL Remote Abort Interrupt;1：使能Write Channel LL Remote Abort Interrupt。
        UINT32    Reserved_119          : 8   ; // [15..8] Reserved
        UINT32    wr_ch_ll_local_abort_int_en  : 8   ; // [23..16] Write Channel LL Local Abort Interrupt Enable (LLLAIE)0：禁用Write Channel LL Local Abort Interrupt;1：使能Write Channel LL Local Abort Interrupt。
        UINT32    Reserved_118          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC75_U;

// Define the union PCIE_EP_PORTLOGIC76_U
// 端口逻辑寄存器
// 0xA10
typedef union tagPortlogic76
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_status       : 8   ; // [7..0] Done Interrupt Status0：未产生完成中断;1：产生完成中断。
        UINT32    Reserved_122          : 8   ; // [15..8] Reserved
        UINT32    abort_int_status      : 8   ; // [23..16] Abort Interrupt Status0：未丢弃出错传输;1：丢弃出错传输。
        UINT32    Reserved_121          : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC76_U;

// Define the union PCIE_EP_PORTLOGIC77_U
// 端口逻辑寄存器
// 0xA18
typedef union tagPortlogic77
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_mask         : 8   ; // [7..0] Done Interrupt Mask0：不使用Done Interrupt Mask;1：使用Done Interrupt Mask。
        UINT32    Reserved_124          : 8   ; // [15..8] Reserved
        UINT32    abort_int_mask        : 8   ; // [23..16] Abort Interrupt Mask0：不使用Abort Interrupt Mask;
        UINT32    dma_rd_int_mask       : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC77_U;

// Define the union PCIE_EP_PORTLOGIC78_U
// 端口逻辑寄存器
// 0xA1C
typedef union tagPortlogic78
{
    // Define the struct Bits
    struct
    {
        UINT32    done_int_clr          : 8   ; // [7..0] Done Interrupt Clear0：不清除Done Interrupt Status字段;1：清除Done Interrupt Status字段。
        UINT32    Reserved_126          : 8   ; // [15..8] Reserved
        UINT32    abort_int_clr         : 8   ; // [23..16] Abort Interrupt Clear0：不清除Abort Interrupt Status字段;1：清除Abort Interrupt Status字段。
        UINT32    dma_rd_int_clr        : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC78_U;

// Define the union PCIE_EP_PORTLOGIC79_U
// 端口逻辑寄存器
// 0xA24
typedef union tagPortlogic79
{
    // Define the struct Bits
    struct
    {
        UINT32    app_wr_err_det        : 8   ; // [7..0] Application Read Error Detected0：未检测到Application Read Error ;1：检测到Application Read Error。
        UINT32    Reserved_127          : 8   ; // [15..8] Reserved
        UINT32    link_list_fetch_err_det  : 8   ; // [23..16] Linked List Element Fetch Error Detected0：未检测到Linked List Element Fetch Error;1：检测到Linked List Element Fetch Error。
        UINT32    dma_rd_err_low        : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC79_U;

// Define the union PCIE_EP_PORTLOGIC80_U
// 端口逻辑寄存器
// 0xA28
typedef union tagPortlogic80
{
    // Define the struct Bits
    struct
    {
        UINT32    unspt_request         : 8   ; // [7..0] Unsupported Request0：未检测到Unsupported Request;1：检测到Unsupported Request。
        UINT32    completer_abort       : 8   ; // [15..8] Completer Abort0：未检测到Completer Abort;1：检测到Completer Abort。
        UINT32    cpl_time_out          : 8   ; // [23..16] Completion Time Out
        UINT32    data_poison           : 8   ; // [31..24] Data Poisoning0：未检测到Data Poisoning;1：检测到Data Poisoning。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC80_U;

// Define the union PCIE_EP_PORTLOGIC81_U
// 端口逻辑寄存器
// 0xA34
typedef union tagPortlogic81
{
    // Define the struct Bits
    struct
    {
        UINT32    remote_abort_int_en   : 8   ; // [7..0] Read Channel LL Remote Abort Interrupt Enable (LLRAIE)0：禁用Read Channel LL Remote Abort Interrupt;1：使能Read Channel LL Remote Abort Interrupt。
        UINT32    Reserved_129          : 8   ; // [15..8] Reserved
        UINT32    local_abort_int_en    : 8   ; // [23..16] Read Channel LL Local Abort Interrupt Enable (LLLAIE)0：禁用Read Channel LL Local Abort Interrupt;1：使能Read Channel LL Local Abort Interrupt。
        UINT32    dma_rd_ll_err_ena     : 8   ; // [31..24] Reserved
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC81_U;

// Define the union PCIE_EP_PORTLOGIC86_U
// 端口逻辑寄存器
// 0xA6C
typedef union tagPortlogic86
{
    // Define the struct Bits
    struct
    {
        UINT32    channel_dir           : 3   ; // [2..0] 
        UINT32    Reserved_132          : 28  ; // [30..3] Reserved
        UINT32    dma_ch_con_idx        : 1   ; // [31] Channel Direction0：写通道0;1：读通道0。
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC86_U;

// Define the union PCIE_EP_PORTLOGIC87_U
// 端口逻辑寄存器
// 0xA70
typedef union tagPortlogic87
{
    // Define the struct Bits
    struct
    {
        UINT32    cycle_bit             : 1   ; // [0] Cycle Bit (CB)
        UINT32    toggle_cycle_bit      : 1   ; // [1] Toggle Cycle Bit (TCB)
        UINT32    load_link_pointer     : 1   ; // [2] Load Link Pointer (LLP)
        UINT32    local_int_en          : 1   ; // [3] Local Interrupt Enable (LIE)0：禁用Local Interrupt;1：使能Local Interrupt。
        UINT32    remote_int_en         : 1   ; // [4] Remote Interrupt Enable (RIE)0：禁用Remote Interrupt;1：使能Remote Interrupt。
        UINT32    channel_status        : 2   ; // [6..5] Channel Status00：保留;01：Running;10：Halted;11：Stopped。
        UINT32    Reserved_136          : 1   ; // [7] Reserved
        UINT32    consumer_cycle_state  : 1   ; // [8] Consumer Cycle State (CCS)
        UINT32    linked_list_en        : 1   ; // [9] Linked List Enable (LLE)0：禁用Linked List;1：使能Linked List。
        UINT32    Reserved_135          : 2   ; // [11..10] Reserved
        UINT32    func_num_dma          : 5   ; // [16..12] Function Number (FN) for Generated MRd/MWr DMA TLPs
        UINT32    Reserved_134          : 7   ; // [23..17] Reserved
        UINT32    no_snoop              : 1   ; // [24] No Snoop TLP Header Bit (NS)
        UINT32    ro                    : 1   ; // [25] Relaxed Ordering TLP Header Bit (RO)
        UINT32    td                    : 1   ; // [26] Traffic Digest TLP Header Bit (TD)
        UINT32    tc                    : 3   ; // [29..27] Traffic Class TLP Header Bit (TC)
        UINT32    dma_ch_ctrl           : 2   ; // [31..30] Address Translation TLP Header Bit (AT)
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC87_U;

// Define the union PCIE_EP_PORTLOGIC93_U
// 端口逻辑寄存器
// 0xA8C
typedef union tagPortlogic93
{
    // Define the struct Bits
    struct
    {
        UINT32    Reserved_138          : 2   ; // [1..0] Reserved
        UINT32    dma_ll_ptr_low        : 30  ; // [31..2] Lower Bits of the address of the Linked List Transfer List in local memory
    } Bits;

    // Define an unsigned member
    UINT32    UInt32;

} PCIE_EP_PORTLOGIC93_U;

/* SAS1_PCIE_CFG Base address of Module's Register */
#define PCIE_SUBCTRL_BASE                       (0x0)

/******************************************************************************/
/*                      PHOSPHORV660 SAS1_PCIE_CFG Registers' Definitions                            */
/******************************************************************************/

#define PCIE_SUBCTRL_SC_PCIE0_CLK_EN_REG                   (PCIE_SUBCTRL_BASE + 0x300)  /* PCIE0时钟使能寄存器 */ 
#define PCIE_SUBCTRL_SC_PCIE0_2_CLK_EN_REG(port_id) \
	(PCIE_SUBCTRL_SC_PCIE0_CLK_EN_REG + (port_id << 3))
#define PCIE_SUBCTRL_SC_PCIE0_CLK_DIS_REG                  (PCIE_SUBCTRL_BASE + 0x304)  /* PCIE0时钟禁止寄存器 */
#define PCIE_SUBCTRL_SC_PCIE0_2_CLK_DIS_REG(port_id) \
	(PCIE_SUBCTRL_SC_PCIE0_CLK_DIS_REG + (port_id << 3))
#define PCIE_SUBCTRL_SC_PCIE1_CLK_EN_REG                   (PCIE_SUBCTRL_BASE + 0x308)  /* PCIE1时钟使能寄存器 */                         
#define PCIE_SUBCTRL_SC_PCIE1_CLK_DIS_REG                  (PCIE_SUBCTRL_BASE + 0x30C)  /* PCIE1时钟禁止寄存器 */                         
#define PCIE_SUBCTRL_SC_PCIE2_CLK_EN_REG                   (PCIE_SUBCTRL_BASE + 0x310)  /* PCIE2时钟使能寄存器 */                         
#define PCIE_SUBCTRL_SC_PCIE2_CLK_DIS_REG                  (PCIE_SUBCTRL_BASE + 0x314)  /* PCIE2时钟禁止寄存器 */                         
#define PCIE_SUBCTRL_SC_SAS_CLK_EN_REG                     (PCIE_SUBCTRL_BASE + 0x318)  /* SAS时钟门控信号 */                            
#define PCIE_SUBCTRL_SC_SAS_CLK_DIS_REG                    (PCIE_SUBCTRL_BASE + 0x31C)  /* SAS时钟门控信号 */                            
#define PCIE_SUBCTRL_SC_PCIE3_CLK_EN_REG                   (PCIE_SUBCTRL_BASE + 0x320)  /* PCIE3时钟使能寄存器 */                         
#define PCIE_SUBCTRL_SC_PCIE3_CLK_DIS_REG                  (PCIE_SUBCTRL_BASE + 0x324)  /* PCIE3时钟禁止寄存器 */                         
#define PCIE_SUBCTRL_SC_ITS_CLK_EN_REG                     (PCIE_SUBCTRL_BASE + 0x328)  /* ITS时钟使能寄存器 */                           
#define PCIE_SUBCTRL_SC_ITS_CLK_DIS_REG                    (PCIE_SUBCTRL_BASE + 0x32C)  /* ITS时钟禁止寄存器 */                           
#define PCIE_SUBCTRL_SC_SLLC_CLK_EN_REG                    (PCIE_SUBCTRL_BASE + 0x360)  /* SLLC0时钟使能寄存器 */                         
#define PCIE_SUBCTRL_SC_SLLC_CLK_DIS_REG                   (PCIE_SUBCTRL_BASE + 0x364)  /* SLLC0时钟禁止寄存器 */                         
#define PCIE_SUBCTRL_SC_PCIE0_RESET_REQ_REG                (PCIE_SUBCTRL_BASE + 0xA00)  /* PCIE0软复位请求控制寄存器 */                      
#define PCIE_SUBCTRL_SC_PCIE0_RESET_DREQ_REG               (PCIE_SUBCTRL_BASE + 0xA04)  /* PCIE0软复位去请求控制寄存器 */                     
#define PCIE_SUBCTRL_SC_PCIE1_RESET_REQ_REG                (PCIE_SUBCTRL_BASE + 0xA08)  /* PCIE1软复位请求控制寄存器 */                      
#define PCIE_SUBCTRL_SC_PCIE1_RESET_DREQ_REG               (PCIE_SUBCTRL_BASE + 0xA0C)  /* PCIE1软复位去请求控制寄存器 */                     
#define PCIE_SUBCTRL_SC_PCIE2_RESET_REQ_REG                (PCIE_SUBCTRL_BASE + 0xA10)  /* PCIE2软复位请求控制寄存器 */                      
#define PCIE_SUBCTRL_SC_PCIE2_RESET_DREQ_REG               (PCIE_SUBCTRL_BASE + 0xA14)  /* PCIE2软复位去请求控制寄存器 */                     
#define PCIE_SUBCTRL_SC_SAS_RESET_REQ_REG                  (PCIE_SUBCTRL_BASE + 0xA18)  /* SAS软复位请求控制寄存器 */                        
#define PCIE_SUBCTRL_SC_SAS_RESET_DREQ_REG                 (PCIE_SUBCTRL_BASE + 0xA1C)  /* SAS软复位去请求控制寄存器 */                       
#define PCIE_SUBCTRL_SC_MCTP0_RESET_REQ_REG                (PCIE_SUBCTRL_BASE + 0xA20)  /* MCTP0软复位请求控制寄存器（注意：本寄存器保留不用） */         
#define PCIE_SUBCTRL_SC_MCTP0_RESET_DREQ_REG               (PCIE_SUBCTRL_BASE + 0xA24)  /* MCTP0软复位去请求控制寄存器（注意：本寄存器保留不用） */        
#define PCIE_SUBCTRL_SC_MCTP1_RESET_REQ_REG                (PCIE_SUBCTRL_BASE + 0xA28)  /* MCTP1软复位请求控制寄存器（注意：本寄存器保留不用） */         
#define PCIE_SUBCTRL_SC_MCTP1_RESET_DREQ_REG               (PCIE_SUBCTRL_BASE + 0xA2C)  /* MCTP1软复位去请求控制寄存器（注意：本寄存器保留不用） */        
#define PCIE_SUBCTRL_SC_MCTP2_RESET_REQ_REG                (PCIE_SUBCTRL_BASE + 0xA30)  /* MCTP2软复位请求控制寄存器（注意：本寄存器保留不用） */         
#define PCIE_SUBCTRL_SC_MCTP2_RESET_DREQ_REG               (PCIE_SUBCTRL_BASE + 0xA34)  /* MCTP2软复位去请求控制寄存器（注意：本寄存器保留不用） */        
#define PCIE_SUBCTRL_SC_SLLC_TSVRX_RESET_REQ_REG           (PCIE_SUBCTRL_BASE + 0xA58)  /* SLLC TSVRX通道软复位请求控制寄存器 */               
#define PCIE_SUBCTRL_SC_SLLC_TSVRX_RESET_DREQ_REG          (PCIE_SUBCTRL_BASE + 0xA5C)  /* SLLC TSVRX通道软复位请求控制寄存器 */               
#define PCIE_SUBCTRL_SC_PCIE_HILINK_PCS_RESET_REQ_REG      (PCIE_SUBCTRL_BASE + 0xA60)  /* PCIE HILINK PCS软复位请求控制寄存器 */            
#define PCIE_SUBCTRL_SC_PCIE_HILINK_PCS_RESET_DREQ_REG     (PCIE_SUBCTRL_BASE + 0xA64)  /* PCIE HILINK PCS软复位去请求控制寄存器 */           
#define PCIE_SUBCTRL_SC_PCIE3_RESET_REQ_REG                (PCIE_SUBCTRL_BASE + 0xA68)  /* PCIE3软复位请求控制寄存器 */                      
#define PCIE_SUBCTRL_SC_PCIE3_RESET_DREQ_REG               (PCIE_SUBCTRL_BASE + 0xA6C)  /* PCIE3软复位去请求控制寄存器 */                     
#define PCIE_SUBCTRL_SC_MCTP3_RESET_REQ_REG                (PCIE_SUBCTRL_BASE + 0xA70)  /* MCTP3软复位请求控制寄存器 */                      
#define PCIE_SUBCTRL_SC_MCTP3_RESET_DREQ_REG               (PCIE_SUBCTRL_BASE + 0xA74)  /* MCTP3软复位去请求控制寄存器 */                     
#define PCIE_SUBCTRL_SC_ITS_RESET_REQ_REG                  (PCIE_SUBCTRL_BASE + 0xA80)  /* ITS软复位请求控制寄存器 */                        
#define PCIE_SUBCTRL_SC_ITS_RESET_DREQ_REG                 (PCIE_SUBCTRL_BASE + 0xA84)  /* ITS软复位去请求控制寄存器 */                       
#define PCIE_SUBCTRL_SC_SLLC_RESET_REQ_REG                 (PCIE_SUBCTRL_BASE + 0xAA0)  /* SLLC0软复位请求控制寄存器 */                      
#define PCIE_SUBCTRL_SC_SLLC_RESET_DREQ_REG                (PCIE_SUBCTRL_BASE + 0xAA4)  /* SLLC0软复位去请求控制寄存器 */                     
#define PCIE_SUBCTRL_SC_PCS_LOCAL_RESET_REQ_REG            (PCIE_SUBCTRL_BASE + 0xAC0)  /* PCS LOCAL软复位请求控制寄存器 */                  
#define PCIE_SUBCTRL_SC_PCS_LOCAL_RESET_DREQ_REG           (PCIE_SUBCTRL_BASE + 0xAC4)  /* PCS LOCAL软复位去请求控制寄存器 */                 
#define PCIE_SUBCTRL_SC_DISP_DAW_EN_REG                    (PCIE_SUBCTRL_BASE + 0x1000) /* dispatch daw en配置 */                    
#define PCIE_SUBCTRL_SC_DISPATCH_DAW_ARRAY0_REG            (PCIE_SUBCTRL_BASE + 0x1004) /* dispatch daw配置阵列0 */                    
#define PCIE_SUBCTRL_SC_DISPATCH_DAW_ARRAY1_REG            (PCIE_SUBCTRL_BASE + 0x1008) /* dispatch daw配置阵列1 */                    
#define PCIE_SUBCTRL_SC_DISPATCH_DAW_ARRAY2_REG            (PCIE_SUBCTRL_BASE + 0x100C) /* dispatch daw配置阵列2 */                    
#define PCIE_SUBCTRL_SC_DISPATCH_DAW_ARRAY3_REG            (PCIE_SUBCTRL_BASE + 0x1010) /* dispatch daw配置阵列3 */                    
#define PCIE_SUBCTRL_SC_DISPATCH_DAW_ARRAY4_REG            (PCIE_SUBCTRL_BASE + 0x1014) /* dispatch daw配置阵列4 */                    
#define PCIE_SUBCTRL_SC_DISPATCH_DAW_ARRAY5_REG            (PCIE_SUBCTRL_BASE + 0x1018) /* dispatch daw配置阵列5 */                    
#define PCIE_SUBCTRL_SC_DISPATCH_DAW_ARRAY6_REG            (PCIE_SUBCTRL_BASE + 0x101C) /* dispatch daw配置阵列6 */                    
#define PCIE_SUBCTRL_SC_DISPATCH_DAW_ARRAY7_REG            (PCIE_SUBCTRL_BASE + 0x1020) /* dispatch daw配置阵列7 */                    
#define PCIE_SUBCTRL_SC_DISPATCH_RETRY_CONTROL_REG         (PCIE_SUBCTRL_BASE + 0x1030) /* dispatch retry控制寄存器 */                  
#define PCIE_SUBCTRL_SC_DISPATCH_INTMASK_REG               (PCIE_SUBCTRL_BASE + 0x1100) /* dispatch的中断屏蔽寄存器 */                     
#define PCIE_SUBCTRL_SC_DISPATCH_RAWINT_REG                (PCIE_SUBCTRL_BASE + 0x1104) /* dispatch的原始中断状态寄存器 */                   
#define PCIE_SUBCTRL_SC_DISPATCH_INTSTAT_REG               (PCIE_SUBCTRL_BASE + 0x1108) /* dispatch的屏蔽后的中断状态寄存器 */                 
#define PCIE_SUBCTRL_SC_DISPATCH_INTCLR_REG                (PCIE_SUBCTRL_BASE + 0x110C) /* dispatch的中断清除寄存器 */                     
#define PCIE_SUBCTRL_SC_DISPATCH_ERRSTAT_REG               (PCIE_SUBCTRL_BASE + 0x1110) /* dispatch的ERR状态寄存器 */                    
#define PCIE_SUBCTRL_SC_REMAP_CTRL_REG                     (PCIE_SUBCTRL_BASE + 0x1200) /* subsys的启动Remap寄存器 */                    
#define PCIE_SUBCTRL_SC_FTE_MUX_CTRL_REG                   (PCIE_SUBCTRL_BASE + 0x2200) 
#define PCIE_SUBCTRL_SC_HILINK0_MUX_CTRL_REG               (PCIE_SUBCTRL_BASE + 0x2300) /* HILINK复用选择 */                           
#define PCIE_SUBCTRL_SC_HILINK1_MUX_CTRL_REG               (PCIE_SUBCTRL_BASE + 0x2304) /* HILINK复用选择 */                           
#define PCIE_SUBCTRL_SC_HILINK2_MUX_CTRL_REG               (PCIE_SUBCTRL_BASE + 0x2308) /* HILINK复用选择 */                           
#define PCIE_SUBCTRL_SC_HILINK5_MUX_CTRL_REG               (PCIE_SUBCTRL_BASE + 0x2314) /* HILINK复用选择 */                           
#define PCIE_SUBCTRL_SC_HILINK1_AHB_MUX_CTRL_REG           (PCIE_SUBCTRL_BASE + 0x2324) /* HILINK AHB复用选择 */                       
#define PCIE_SUBCTRL_SC_HILINK2_AHB_MUX_CTRL_REG           (PCIE_SUBCTRL_BASE + 0x2328) /* HILINK AHB复用选择 */                       
#define PCIE_SUBCTRL_SC_HILINK5_AHB_MUX_CTRL_REG           (PCIE_SUBCTRL_BASE + 0x2334) /* HILINK AHB复用选择 */                       
#define PCIE_SUBCTRL_SC_HILINK5_LRSTB_MUX_CTRL_REG         (PCIE_SUBCTRL_BASE + 0x2340) /* HILINK5 lrstb[3:0]的MUX选择控制 */           
#define PCIE_SUBCTRL_SC_HILINK6_LRSTB_MUX_CTRL_REG         (PCIE_SUBCTRL_BASE + 0x2344) /* HILINK6 lrstb[3:0]的MUX选择控制 */           
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_SS_REFCLK_REG        (PCIE_SUBCTRL_BASE + 0x2400) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_CS_REFCLK_DIRSEL_REG (PCIE_SUBCTRL_BASE + 0x2404) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_LIFECLK2DIG_SEL_REG  (PCIE_SUBCTRL_BASE + 0x2408) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_CORE_CLK_SELEXT_REG  (PCIE_SUBCTRL_BASE + 0x240C) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_CORE_CLK_SEL_REG     (PCIE_SUBCTRL_BASE + 0x2410) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_CTRL_BUS_MODE_REG    (PCIE_SUBCTRL_BASE + 0x2414) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_MACROPWRDB_REG       (PCIE_SUBCTRL_BASE + 0x2418) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_GRSTB_REG            (PCIE_SUBCTRL_BASE + 0x241C) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_BIT_SLIP_REG         (PCIE_SUBCTRL_BASE + 0x2420) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_LRSTB_REG            (PCIE_SUBCTRL_BASE + 0x2424) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_SS_REFCLK_REG        (PCIE_SUBCTRL_BASE + 0x2500) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_CS_REFCLK_DIRSEL_REG (PCIE_SUBCTRL_BASE + 0x2504) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_LIFECLK2DIG_SEL_REG  (PCIE_SUBCTRL_BASE + 0x2508) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_CORE_CLK_SELEXT_REG  (PCIE_SUBCTRL_BASE + 0x250C) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_CORE_CLK_SEL_REG     (PCIE_SUBCTRL_BASE + 0x2510) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_CTRL_BUS_MODE_REG    (PCIE_SUBCTRL_BASE + 0x2514) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_MACROPWRDB_REG       (PCIE_SUBCTRL_BASE + 0x2518) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_GRSTB_REG            (PCIE_SUBCTRL_BASE + 0x251C) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_BIT_SLIP_REG         (PCIE_SUBCTRL_BASE + 0x2520) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_LRSTB_REG            (PCIE_SUBCTRL_BASE + 0x2524) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_SS_REFCLK_REG        (PCIE_SUBCTRL_BASE + 0x2600) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_CS_REFCLK_DIRSEL_REG (PCIE_SUBCTRL_BASE + 0x2604) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_LIFECLK2DIG_SEL_REG  (PCIE_SUBCTRL_BASE + 0x2608) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_CORE_CLK_SELEXT_REG  (PCIE_SUBCTRL_BASE + 0x260C) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_CORE_CLK_SEL_REG     (PCIE_SUBCTRL_BASE + 0x2610) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_CTRL_BUS_MODE_REG    (PCIE_SUBCTRL_BASE + 0x2614) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_MACROPWRDB_REG       (PCIE_SUBCTRL_BASE + 0x2618) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_GRSTB_REG            (PCIE_SUBCTRL_BASE + 0x261C) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_BIT_SLIP_REG         (PCIE_SUBCTRL_BASE + 0x2620) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_LRSTB_REG            (PCIE_SUBCTRL_BASE + 0x2624) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_SS_REFCLK_REG        (PCIE_SUBCTRL_BASE + 0x2700) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_CS_REFCLK_DIRSEL_REG (PCIE_SUBCTRL_BASE + 0x2704) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_LIFECLK2DIG_SEL_REG  (PCIE_SUBCTRL_BASE + 0x2708) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_CORE_CLK_SELEXT_REG  (PCIE_SUBCTRL_BASE + 0x270C) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_CORE_CLK_SEL_REG     (PCIE_SUBCTRL_BASE + 0x2710) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_CTRL_BUS_MODE_REG    (PCIE_SUBCTRL_BASE + 0x2714) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_MACROPWRDB_REG       (PCIE_SUBCTRL_BASE + 0x2718) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_GRSTB_REG            (PCIE_SUBCTRL_BASE + 0x271C) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_BIT_SLIP_REG         (PCIE_SUBCTRL_BASE + 0x2720) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_LRSTB_REG            (PCIE_SUBCTRL_BASE + 0x2724) /* HILINK配置寄存器 */                          
#define PCIE_SUBCTRL_SC_PCIE0_CLKREQ_REG                   (PCIE_SUBCTRL_BASE + 0x2800) 
#define PCIE_SUBCTRL_SC_PCIE0_AXI_MSTR_OOO_WR_CFG_REG      (PCIE_SUBCTRL_BASE + 0x2880) 
#define PCIE_SUBCTRL_SC_PCIE0_AXI_MSTR_OOO_RD_CFG_REG      (PCIE_SUBCTRL_BASE + 0x2890) 
#define PCIE_SUBCTRL_SC_PCIE1_CLKREQ_REG                   (PCIE_SUBCTRL_BASE + 0x2900) 
#define PCIE_SUBCTRL_SC_PCIE1_AXI_MSTR_OOO_WR_CFG_REG      (PCIE_SUBCTRL_BASE + 0x2980) 
#define PCIE_SUBCTRL_SC_PCIE1_AXI_MSTR_OOO_RD_CFG_REG      (PCIE_SUBCTRL_BASE + 0x2990) 
#define PCIE_SUBCTRL_SC_PCIE2_CLKREQ_REG                   (PCIE_SUBCTRL_BASE + 0x2A00) 
#define PCIE_SUBCTRL_SC_PCIE2_AXI_MSTR_OOO_WR_CFG_REG      (PCIE_SUBCTRL_BASE + 0x2A80) 
#define PCIE_SUBCTRL_SC_PCIE2_AXI_MSTR_OOO_RD_CFG_REG      (PCIE_SUBCTRL_BASE + 0x2A90) 
#define PCIE_SUBCTRL_SC_PCIE3_CLKREQ_REG                   (PCIE_SUBCTRL_BASE + 0x2B00) 
#define PCIE_SUBCTRL_SC_SMMU_MEM_CTRL0_REG                 (PCIE_SUBCTRL_BASE + 0x3000) /* smmu mem控制寄存器0 */                       
#define PCIE_SUBCTRL_SC_SMMU_MEM_CTRL1_REG                 (PCIE_SUBCTRL_BASE + 0x3004) /* smmu mem控制寄存器1 */                       
#define PCIE_SUBCTRL_SC_SMMU_MEM_CTRL2_REG                 (PCIE_SUBCTRL_BASE + 0x3008) /* smmu mem控制寄存器2 */                       
#define PCIE_SUBCTRL_SC_SLLC0_MEM_CTRL_REG                 (PCIE_SUBCTRL_BASE + 0x3010) /* sllc0 mem控制寄存器 */                       
#define PCIE_SUBCTRL_SC_SAS_MEM_CTRL_REG                   (PCIE_SUBCTRL_BASE + 0x3030) /* sas mem控制寄存器 */                         
#define PCIE_SUBCTRL_SC_PCIE_MEM_CTRL0_REG                 (PCIE_SUBCTRL_BASE + 0x3040) /* pcie mem控制寄存器0 */                       
#define PCIE_SUBCTRL_SC_PCIE_MEM_CTRL1_REG                 (PCIE_SUBCTRL_BASE + 0x3044) /* pcie mem控制寄存器1 */                       
#define PCIE_SUBCTRL_SC_PCIE_MEM_CTRL2_REG                 (PCIE_SUBCTRL_BASE + 0x3048) /* pcie mem控制寄存器2 */                       
#define PCIE_SUBCTRL_SC_SKEW_COMMON_0_REG                  (PCIE_SUBCTRL_BASE + 0x3400) 
#define PCIE_SUBCTRL_SC_SKEW_COMMON_1_REG                  (PCIE_SUBCTRL_BASE + 0x3404) 
#define PCIE_SUBCTRL_SC_SKEW_COMMON_2_REG                  (PCIE_SUBCTRL_BASE + 0x3408) 
#define PCIE_SUBCTRL_SC_SKEW_A_0_REG                       (PCIE_SUBCTRL_BASE + 0x3500) 
#define PCIE_SUBCTRL_SC_SKEW_A_1_REG                       (PCIE_SUBCTRL_BASE + 0x3504) 
#define PCIE_SUBCTRL_SC_SKEW_A_2_REG                       (PCIE_SUBCTRL_BASE + 0x3508) 
#define PCIE_SUBCTRL_SC_SKEW_A_3_REG                       (PCIE_SUBCTRL_BASE + 0x350C) 
#define PCIE_SUBCTRL_SC_SKEW_A_4_REG                       (PCIE_SUBCTRL_BASE + 0x3510) 
#define PCIE_SUBCTRL_SC_SKEW_A_5_REG                       (PCIE_SUBCTRL_BASE + 0x3514) 
#define PCIE_SUBCTRL_SC_SKEW_A_6_REG                       (PCIE_SUBCTRL_BASE + 0x3518) 
#define PCIE_SUBCTRL_SC_SKEW_A_7_REG                       (PCIE_SUBCTRL_BASE + 0x351C) 
#define PCIE_SUBCTRL_SC_SKEW_A_8_REG                       (PCIE_SUBCTRL_BASE + 0x3520) 
#define PCIE_SUBCTRL_SC_SKEW_B_0_REG                       (PCIE_SUBCTRL_BASE + 0x3600) 
#define PCIE_SUBCTRL_SC_SKEW_B_1_REG                       (PCIE_SUBCTRL_BASE + 0x3604) 
#define PCIE_SUBCTRL_SC_SKEW_B_2_REG                       (PCIE_SUBCTRL_BASE + 0x3608) 
#define PCIE_SUBCTRL_SC_SKEW_B_3_REG                       (PCIE_SUBCTRL_BASE + 0x360C) 
#define PCIE_SUBCTRL_SC_SKEW_B_4_REG                       (PCIE_SUBCTRL_BASE + 0x3610) 
#define PCIE_SUBCTRL_SC_SKEW_B_5_REG                       (PCIE_SUBCTRL_BASE + 0x3614) 
#define PCIE_SUBCTRL_SC_SKEW_B_6_REG                       (PCIE_SUBCTRL_BASE + 0x3618) 
#define PCIE_SUBCTRL_SC_SKEW_B_7_REG                       (PCIE_SUBCTRL_BASE + 0x361C) 
#define PCIE_SUBCTRL_SC_SKEW_B_8_REG                       (PCIE_SUBCTRL_BASE + 0x3620) 
#define PCIE_SUBCTRL_SC_PCIE0_CLK_ST_REG                   (PCIE_SUBCTRL_BASE + 0x5300) /* PCIE0时钟状态寄存器 */ 
#define PCIE_SUBCTRL_SC_PCIE0_2_CLK_ST_REG(port_id) \
	(PCIE_SUBCTRL_SC_PCIE0_CLK_ST_REG + (port_id << 2))
#define PCIE_SUBCTRL_SC_PCIE1_CLK_ST_REG                   (PCIE_SUBCTRL_BASE + 0x5304) /* PCIE1时钟状态寄存器 */                         
#define PCIE_SUBCTRL_SC_PCIE2_CLK_ST_REG                   (PCIE_SUBCTRL_BASE + 0x5308) /* PCIE2时钟状态寄存器 */                         
#define PCIE_SUBCTRL_SC_SAS_CLK_ST_REG                     (PCIE_SUBCTRL_BASE + 0x530C) /* SAS时钟状态寄存器 */                           
#define PCIE_SUBCTRL_SC_PCIE3_CLK_ST_REG                   (PCIE_SUBCTRL_BASE + 0x5310) /* PCIE3时钟状态寄存器 */                         
#define PCIE_SUBCTRL_SC_ITS_CLK_ST_REG                     (PCIE_SUBCTRL_BASE + 0x5314) /* ITS时钟状态寄存器 */                           
#define PCIE_SUBCTRL_SC_SLLC_CLK_ST_REG                    (PCIE_SUBCTRL_BASE + 0x5330) /* SLLC0时钟状态寄存器 */                         
#define PCIE_SUBCTRL_SC_PCIE0_RESET_ST_REG                 (PCIE_SUBCTRL_BASE + 0x5A00) /* PCIE0复位状态寄存器 */                         
#define PCIE_SUBCTRL_SC_PCIE1_RESET_ST_REG                 (PCIE_SUBCTRL_BASE + 0x5A04) /* PCIE1复位状态寄存器 */                         
#define PCIE_SUBCTRL_SC_PCIE2_RESET_ST_REG                 (PCIE_SUBCTRL_BASE + 0x5A08) /* PCIE2复位状态寄存器 */                         
#define PCIE_SUBCTRL_SC_SAS_RESET_ST_REG                   (PCIE_SUBCTRL_BASE + 0x5A0C) /* SAS复位状态寄存器 */                           
#define PCIE_SUBCTRL_SC_MCTP0_RESET_ST_REG                 (PCIE_SUBCTRL_BASE + 0x5A10) /* MCTP0复位状态寄存器（注意：本寄存器保留不用） */            
#define PCIE_SUBCTRL_SC_MCTP1_RESET_ST_REG                 (PCIE_SUBCTRL_BASE + 0x5A14) /* MCTP1复位状态寄存器（注意：本寄存器保留不用） */            
#define PCIE_SUBCTRL_SC_MCTP2_RESET_ST_REG                 (PCIE_SUBCTRL_BASE + 0x5A18) /* MCTP2复位状态寄存器（注意：本寄存器保留不用） */            
#define PCIE_SUBCTRL_SC_SLLC_TSVRX_RESET_ST_REG            (PCIE_SUBCTRL_BASE + 0x5A2C) /* 为SLLC TSVRX通道软复位状态寄存器 */                
#define PCIE_SUBCTRL_SC_PCIE_HILINK_PCS_RESET_ST_REG       (PCIE_SUBCTRL_BASE + 0x5A30) /* PCIE HILINK PCS复位状态寄存器 */               
#define PCIE_SUBCTRL_SC_PCIE3_RESET_ST_REG                 (PCIE_SUBCTRL_BASE + 0x5A34) /* PCIE3复位状态寄存器 */                         
#define PCIE_SUBCTRL_SC_MCTP3_RESET_ST_REG                 (PCIE_SUBCTRL_BASE + 0x5A38) /* MCTP3复位状态寄存器 */                         
#define PCIE_SUBCTRL_SC_ITS_RESET_ST_REG                   (PCIE_SUBCTRL_BASE + 0x5A40) /* ITS复位状态寄存器 */                           
#define PCIE_SUBCTRL_SC_SLLC_RESET_ST_REG                  (PCIE_SUBCTRL_BASE + 0x5A50) /* SLLC0复位状态寄存器 */                         
#define PCIE_SUBCTRL_SC_PCS_LOCAL_RESET_ST_REG             (PCIE_SUBCTRL_BASE + 0x5A60) /* PCS LOCAL软复位请求状态寄存器 */                  
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_PLLOUTOFLOCK_REG     (PCIE_SUBCTRL_BASE + 0x6400) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_PRBS_ERR_REG         (PCIE_SUBCTRL_BASE + 0x6404) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK0_MACRO_LOS_REG              (PCIE_SUBCTRL_BASE + 0x6408) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_PLLOUTOFLOCK_REG     (PCIE_SUBCTRL_BASE + 0x6500) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_PRBS_ERR_REG         (PCIE_SUBCTRL_BASE + 0x6504) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK1_MACRO_LOS_REG              (PCIE_SUBCTRL_BASE + 0x6508) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_PLLOUTOFLOCK_REG     (PCIE_SUBCTRL_BASE + 0x6600) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_PRBS_ERR_REG         (PCIE_SUBCTRL_BASE + 0x6604) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK5_MACRO_LOS_REG              (PCIE_SUBCTRL_BASE + 0x6608) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_PLLOUTOFLOCK_REG     (PCIE_SUBCTRL_BASE + 0x6700) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_PRBS_ERR_REG         (PCIE_SUBCTRL_BASE + 0x6704) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_HILINK6_MACRO_LOS_REG              (PCIE_SUBCTRL_BASE + 0x6708) /* HILINK状态寄存器 */                          
#define PCIE_SUBCTRL_SC_PCIE0_RXEQINPRO_STAT_REG           (PCIE_SUBCTRL_BASE + 0x6800) 
#define PCIE_SUBCTRL_SC_PCIE0_LINKINT_RCVRY_STAT_REG       (PCIE_SUBCTRL_BASE + 0x6804) 
#define PCIE_SUBCTRL_SC_PCIE0_SYS_STATE0_REG               (PCIE_SUBCTRL_BASE + 0x6808) /* pcie0状态寄存器0 */                          
#define PCIE_SUBCTRL_SC_PCIE0_SYS_STATE1_REG               (PCIE_SUBCTRL_BASE + 0x680C) /* pcie0状态寄存器1 */                          
#define PCIE_SUBCTRL_SC_PCIE0_SYS_STATE2_REG               (PCIE_SUBCTRL_BASE + 0x6810) /* pcie0状态寄存器2 */                          
#define PCIE_SUBCTRL_SC_PCIE0_SYS_STATE3_REG               (PCIE_SUBCTRL_BASE + 0x6814) /* pcie0状态寄存器3 */                          
#define PCIE_SUBCTRL_SC_PCIE0_SYS_STATE4_REG               (PCIE_SUBCTRL_BASE + 0x6818) /* pcie0状态寄存器4 */
#define PCIE_LTSSM_STATE_MASK					(0x3f)
#define PCIE_LTSSM_LINKUP_STATE					(0x11)
#define PCIE_SUBCTRL_SC_PCIE0_AXI_MSTR_OOO_WR_STS0_REG     (PCIE_SUBCTRL_BASE + 0x6880) /* 写方向各个outstanding transaction ID的空闲状态 */ 
#define PCIE_SUBCTRL_SC_PCIE0_AXI_MSTR_OOO_WR_STS1_REG     (PCIE_SUBCTRL_BASE + 0x6884) /* OOO写通道工作状态 */                           
#define PCIE_SUBCTRL_SC_PCIE0_AXI_MSTR_OOO_RD_STS0_REG     (PCIE_SUBCTRL_BASE + 0x6890) /* 读方向各个outstanding transaction ID的空闲状态 */ 
#define PCIE_SUBCTRL_SC_PCIE0_AXI_MSTR_OOO_RD_STS1_REG     (PCIE_SUBCTRL_BASE + 0x6894) /* OOO读通道工作状态 */                           
#define PCIE_SUBCTRL_SC_PCIE0_DSIZE_BRG_ECC_ERR_REG        (PCIE_SUBCTRL_BASE + 0x68A0) /* PCIE对应DSIZE BRG的ECC错误状态 */              
#define PCIE_SUBCTRL_SC_PCIE0_PCIEPHY_CTRL_ERROR_REG       (PCIE_SUBCTRL_BASE + 0x68C0) /* PCIE对应PCS控制器的错误状态 */                    
#define PCIE_SUBCTRL_SC_PCIE1_RXEQINPRO_STAT_REG           (PCIE_SUBCTRL_BASE + 0x6900) 
#define PCIE_SUBCTRL_SC_PCIE1_LINKINT_RCVRY_STAT_REG       (PCIE_SUBCTRL_BASE + 0x6904) 
#define PCIE_SUBCTRL_SC_PCIE1_SYS_STATE0_REG               (PCIE_SUBCTRL_BASE + 0x6908) /* pcie1状态寄存器0 */                          
#define PCIE_SUBCTRL_SC_PCIE1_SYS_STATE1_REG               (PCIE_SUBCTRL_BASE + 0x690C) /* pcie1状态寄存器1 */                          
#define PCIE_SUBCTRL_SC_PCIE1_SYS_STATE2_REG               (PCIE_SUBCTRL_BASE + 0x6910) /* pcie1状态寄存器2 */                          
#define PCIE_SUBCTRL_SC_PCIE1_SYS_STATE3_REG               (PCIE_SUBCTRL_BASE + 0x6914) /* pcie1状态寄存器3 */                          
#define PCIE_SUBCTRL_SC_PCIE1_SYS_STATE4_REG               (PCIE_SUBCTRL_BASE + 0x6918) /* pcie1状态寄存器4 */                          
#define PCIE_SUBCTRL_SC_PCIE1_AXI_MSTR_OOO_WR_STS0_REG     (PCIE_SUBCTRL_BASE + 0x6980) /* 写方向各个outstanding transaction ID的空闲状态 */ 
#define PCIE_SUBCTRL_SC_PCIE1_AXI_MSTR_OOO_WR_STS1_REG     (PCIE_SUBCTRL_BASE + 0x6984) /* OOO写通道工作状态 */                           
#define PCIE_SUBCTRL_SC_PCIE1_AXI_MSTR_OOO_RD_STS0_REG     (PCIE_SUBCTRL_BASE + 0x6990) /* 读方向各个outstanding transaction ID的空闲状态 */ 
#define PCIE_SUBCTRL_SC_PCIE1_AXI_MSTR_OOO_RD_STS1_REG     (PCIE_SUBCTRL_BASE + 0x6994) /* OOO读通道工作状态 */                           
#define PCIE_SUBCTRL_SC_PCIE1_DSIZE_BRG_ECC_ERR_REG        (PCIE_SUBCTRL_BASE + 0x69A0) /* PCIE对应DSIZE BRG的ECC错误状态 */              
#define PCIE_SUBCTRL_SC_PCIE1_PCIEPHY_CTRL_ERROR_REG       (PCIE_SUBCTRL_BASE + 0x69C0) /* PCIE对应PCS控制器的错误状态 */                    
#define PCIE_SUBCTRL_SC_PCIE2_RXEQINPRO_STAT_REG           (PCIE_SUBCTRL_BASE + 0x6A00) 
#define PCIE_SUBCTRL_SC_PCIE2_LINKINT_RCVRY_STAT_REG       (PCIE_SUBCTRL_BASE + 0x6A04) 
#define PCIE_SUBCTRL_SC_PCIE2_SYS_STATE0_REG               (PCIE_SUBCTRL_BASE + 0x6A08) /* pcie2状态寄存器0 */                          
#define PCIE_SUBCTRL_SC_PCIE2_SYS_STATE1_REG               (PCIE_SUBCTRL_BASE + 0x6A0C) /* pcie2状态寄存器1 */                          
#define PCIE_SUBCTRL_SC_PCIE2_SYS_STATE2_REG               (PCIE_SUBCTRL_BASE + 0x6A10) /* pcie2状态寄存器2 */                          
#define PCIE_SUBCTRL_SC_PCIE2_SYS_STATE3_REG               (PCIE_SUBCTRL_BASE + 0x6A14) /* pcie2状态寄存器3 */                          
#define PCIE_SUBCTRL_SC_PCIE2_SYS_STATE4_REG               (PCIE_SUBCTRL_BASE + 0x6A18) /* pcie2状态寄存器4 */                          
#define PCIE_SUBCTRL_SC_PCIE2_AXI_MSTR_OOO_WR_STS0_REG     (PCIE_SUBCTRL_BASE + 0x6A80) /* 写方向各个outstanding transaction ID的空闲状态 */ 
#define PCIE_SUBCTRL_SC_PCIE2_AXI_MSTR_OOO_WR_STS1_REG     (PCIE_SUBCTRL_BASE + 0x6A84) /* OOO写通道工作状态 */                           
#define PCIE_SUBCTRL_SC_PCIE2_AXI_MSTR_OOO_RD_STS0_REG     (PCIE_SUBCTRL_BASE + 0x6A90) /* 读方向各个outstanding transaction ID的空闲状态 */ 
#define PCIE_SUBCTRL_SC_PCIE2_AXI_MSTR_OOO_RD_STS1_REG     (PCIE_SUBCTRL_BASE + 0x6A94) /* OOO读通道工作状态 */                           
#define PCIE_SUBCTRL_SC_PCIE2_DSIZE_BRG_ECC_ERR_REG        (PCIE_SUBCTRL_BASE + 0x6AA0) /* PCIE对应DSIZE BRG的ECC错误状态 */              
#define PCIE_SUBCTRL_SC_PCIE2_PCIEPHY_CTRL_ERROR_REG       (PCIE_SUBCTRL_BASE + 0x6AC0) /* PCIE对应PCS控制器的错误状态 */                    
#define PCIE_SUBCTRL_SC_PCIE3_SYS_STATE0_REG               (PCIE_SUBCTRL_BASE + 0x6B08) /* pcie3状态寄存器0 */                          
#define PCIE_SUBCTRL_SC_PCIE3_SYS_STATE1_REG               (PCIE_SUBCTRL_BASE + 0x6B0C) /* pcie3状态寄存器1 */                          
#define PCIE_SUBCTRL_SC_PCIE3_SYS_STATE2_REG               (PCIE_SUBCTRL_BASE + 0x6B10) /* pcie3状态寄存器2 */                          
#define PCIE_SUBCTRL_SC_PCIE3_SYS_STATE3_REG               (PCIE_SUBCTRL_BASE + 0x6B14) /* pcie3状态寄存器3 */                          
#define PCIE_SUBCTRL_SC_PCIE3_SYS_STATE4_REG               (PCIE_SUBCTRL_BASE + 0x6B18) /* pcie3状态寄存器4 */                          
#define PCIE_SUBCTRL_SC_PCIE3_PCIEPHY_CTRL_ERROR_REG       (PCIE_SUBCTRL_BASE + 0x6BC0) /* PCIE对应PCS控制器的错误状态 */                    
#define PCIE_SUBCTRL_SC_SKEW_ST_0_REG                      (PCIE_SUBCTRL_BASE + 0x7400) 
#define PCIE_SUBCTRL_SC_SKEW_ST_A_0_REG                    (PCIE_SUBCTRL_BASE + 0x7500) 
#define PCIE_SUBCTRL_SC_SKEW_ST_A_1_REG                    (PCIE_SUBCTRL_BASE + 0x7504) 
#define PCIE_SUBCTRL_SC_SKEW_ST_A_2_REG                    (PCIE_SUBCTRL_BASE + 0x7508) 
#define PCIE_SUBCTRL_SC_SKEW_ST_A_3_REG                    (PCIE_SUBCTRL_BASE + 0x750C) 
#define PCIE_SUBCTRL_SC_SKEW_ST_B_0_REG                    (PCIE_SUBCTRL_BASE + 0x7600) 
#define PCIE_SUBCTRL_SC_SKEW_ST_B_1_REG                    (PCIE_SUBCTRL_BASE + 0x7604) 
#define PCIE_SUBCTRL_SC_SKEW_ST_B_2_REG                    (PCIE_SUBCTRL_BASE + 0x7608) 
#define PCIE_SUBCTRL_SC_SKEW_ST_B_3_REG                    (PCIE_SUBCTRL_BASE + 0x760C) 
#define PCIE_SUBCTRL_SC_ECO_RSV0_REG                       (PCIE_SUBCTRL_BASE + 0x8000) /* ECO 寄存器0 */                             
#define PCIE_SUBCTRL_SC_ECO_RSV1_REG                       (PCIE_SUBCTRL_BASE + 0x8004) /* ECO 寄存器1 */                             
#define PCIE_SUBCTRL_SC_ECO_RSV2_REG                       (PCIE_SUBCTRL_BASE + 0x8008) /* ECO 寄存器2 */ 

/* Define the union u_sc_pcie0_clk_en */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie0_enb         : 1   ; /* [0]  */
        UINT32    clk_pcie0_pipe_enb    : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_clk_en;

/* Define the union u_sc_pcie0_clk_dis */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie0_dsb         : 1   ; /* [0]  */
        UINT32    clk_pcie0_pipe_dsb    : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_clk_dis;

/* Define the union u_sc_pcie1_clk_en */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie1_enb         : 1   ; /* [0]  */
        UINT32    clk_pcie1_pipe_enb    : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_clk_en;

/* Define the union u_sc_pcie1_clk_dis */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie1_dsb         : 1   ; /* [0]  */
        UINT32    clk_pcie1_pipe_dsb    : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_clk_dis;

/* Define the union u_sc_pcie2_clk_en */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie2_enb         : 1   ; /* [0]  */
        UINT32    clk_pcie2_pipe_enb    : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_clk_en;

/* Define the union u_sc_pcie2_clk_dis */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie2_dsb         : 1   ; /* [0]  */
        UINT32    clk_pcie2_pipe_dsb    : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_clk_dis;

/* Define the union u_sc_sas_clk_en */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_sas_enb           : 1   ; /* [0]  */
        UINT32    clk_sas_mem_enb       : 1   ; /* [1]  */
        UINT32    clk_sas_ahb_enb       : 1   ; /* [2]  */
        UINT32    clk_sas_oob_enb       : 1   ; /* [3]  */
        UINT32    clk_sas_ch0_rx_enb    : 1   ; /* [4]  */
        UINT32    clk_sas_ch1_rx_enb    : 1   ; /* [5]  */
        UINT32    clk_sas_ch2_rx_enb    : 1   ; /* [6]  */
        UINT32    clk_sas_ch3_rx_enb    : 1   ; /* [7]  */
        UINT32    clk_sas_ch4_rx_enb    : 1   ; /* [8]  */
        UINT32    clk_sas_ch5_rx_enb    : 1   ; /* [9]  */
        UINT32    clk_sas_ch6_rx_enb    : 1   ; /* [10]  */
        UINT32    clk_sas_ch7_rx_enb    : 1   ; /* [11]  */
        UINT32    clk_sas_ch0_tx_enb    : 1   ; /* [12]  */
        UINT32    clk_sas_ch1_tx_enb    : 1   ; /* [13]  */
        UINT32    clk_sas_ch2_tx_enb    : 1   ; /* [14]  */
        UINT32    clk_sas_ch3_tx_enb    : 1   ; /* [15]  */
        UINT32    clk_sas_ch4_tx_enb    : 1   ; /* [16]  */
        UINT32    clk_sas_ch5_tx_enb    : 1   ; /* [17]  */
        UINT32    clk_sas_ch6_tx_enb    : 1   ; /* [18]  */
        UINT32    clk_sas_ch7_tx_enb    : 1   ; /* [19]  */
        UINT32    reserved_0            : 12  ; /* [31..20]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sas_clk_en;

/* Define the union u_sc_sas_clk_dis */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_sas_dsb           : 1   ; /* [0]  */
        UINT32    clk_sas_mem_dsb       : 1   ; /* [1]  */
        UINT32    clk_sas_ahb_dsb       : 1   ; /* [2]  */
        UINT32    clk_sas_oob_dsb       : 1   ; /* [3]  */
        UINT32    clk_sas_ch0_rx_dsb    : 1   ; /* [4]  */
        UINT32    clk_sas_ch1_rx_dsb    : 1   ; /* [5]  */
        UINT32    clk_sas_ch2_rx_dsb    : 1   ; /* [6]  */
        UINT32    clk_sas_ch3_rx_dsb    : 1   ; /* [7]  */
        UINT32    clk_sas_ch4_rx_dsb    : 1   ; /* [8]  */
        UINT32    clk_sas_ch5_rx_dsb    : 1   ; /* [9]  */
        UINT32    clk_sas_ch6_rx_dsb    : 1   ; /* [10]  */
        UINT32    clk_sas_ch7_rx_dsb    : 1   ; /* [11]  */
        UINT32    clk_sas_ch0_tx_dsb    : 1   ; /* [12]  */
        UINT32    clk_sas_ch1_tx_dsb    : 1   ; /* [13]  */
        UINT32    clk_sas_ch2_tx_dsb    : 1   ; /* [14]  */
        UINT32    clk_sas_ch3_tx_dsb    : 1   ; /* [15]  */
        UINT32    clk_sas_ch4_tx_dsb    : 1   ; /* [16]  */
        UINT32    clk_sas_ch5_tx_dsb    : 1   ; /* [17]  */
        UINT32    clk_sas_ch6_tx_dsb    : 1   ; /* [18]  */
        UINT32    clk_sas_ch7_tx_dsb    : 1   ; /* [19]  */
        UINT32    reserved_0            : 12  ; /* [31..20]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sas_clk_dis;

/* Define the union u_sc_pcie3_clk_en */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie3_enb         : 1   ; /* [0]  */
        UINT32    clk_pcie3_pipe_enb    : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_clk_en;

/* Define the union u_sc_pcie3_clk_dis */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie3_dsb         : 1   ; /* [0]  */
        UINT32    clk_pcie3_pipe_dsb    : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_clk_dis;

/* Define the union u_sc_its_clk_en */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_its_enb           : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_its_clk_en;

/* Define the union u_sc_its_clk_dis */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_its_dsb           : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_its_clk_dis;

/* Define the union u_sc_sllc_clk_en */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_sllc_enb          : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sllc_clk_en;

/* Define the union u_sc_sllc_clk_dis */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_sllc_dsb          : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sllc_clk_dis;

/* Define the union u_sc_pcie0_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_srst_req        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_reset_req;

/* Define the union u_sc_pcie0_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_srst_dreq       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_reset_dreq;

/* Define the union u_sc_pcie1_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_srst_req        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_reset_req;

/* Define the union u_sc_pcie1_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_srst_dreq       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_reset_dreq;

/* Define the union u_sc_pcie2_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_srst_req        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_reset_req;

/* Define the union u_sc_pcie2_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_srst_dreq       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_reset_dreq;

/* Define the union u_sc_sas_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    sas_srst_req          : 1   ; /* [0]  */
        UINT32    sas_oob_srst_req      : 1   ; /* [1]  */
        UINT32    sas_ahb_srst_req      : 1   ; /* [2]  */
        UINT32    sas_ch0_rx_srst_req   : 1   ; /* [3]  */
        UINT32    sas_ch1_rx_srst_req   : 1   ; /* [4]  */
        UINT32    sas_ch2_rx_srst_req   : 1   ; /* [5]  */
        UINT32    sas_ch3_rx_srst_req   : 1   ; /* [6]  */
        UINT32    sas_ch4_rx_srst_req   : 1   ; /* [7]  */
        UINT32    sas_ch5_rx_srst_req   : 1   ; /* [8]  */
        UINT32    sas_ch6_rx_srst_req   : 1   ; /* [9]  */
        UINT32    sas_ch7_rx_srst_req   : 1   ; /* [10]  */
        UINT32    sas_ch0_tx_srst_req   : 1   ; /* [11]  */
        UINT32    sas_ch1_tx_srst_req   : 1   ; /* [12]  */
        UINT32    sas_ch2_tx_srst_req   : 1   ; /* [13]  */
        UINT32    sas_ch3_tx_srst_req   : 1   ; /* [14]  */
        UINT32    sas_ch4_tx_srst_req   : 1   ; /* [15]  */
        UINT32    sas_ch5_tx_srst_req   : 1   ; /* [16]  */
        UINT32    sas_ch6_tx_srst_req   : 1   ; /* [17]  */
        UINT32    sas_ch7_tx_srst_req   : 1   ; /* [18]  */
        UINT32    reserved_0            : 13  ; /* [31..19]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sas_reset_req;

/* Define the union u_sc_sas_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    sas_srst_dreq         : 1   ; /* [0]  */
        UINT32    sas_oob_srst_dreq     : 1   ; /* [1]  */
        UINT32    sas_ahb_srst_dreq     : 1   ; /* [2]  */
        UINT32    sas_ch0_rx_srst_dreq  : 1   ; /* [3]  */
        UINT32    sas_ch1_rx_srst_dreq  : 1   ; /* [4]  */
        UINT32    sas_ch2_rx_srst_dreq  : 1   ; /* [5]  */
        UINT32    sas_ch3_rx_srst_dreq  : 1   ; /* [6]  */
        UINT32    sas_ch4_rx_srst_dreq  : 1   ; /* [7]  */
        UINT32    sas_ch5_rx_srst_dreq  : 1   ; /* [8]  */
        UINT32    sas_ch6_rx_srst_dreq  : 1   ; /* [9]  */
        UINT32    sas_ch7_rx_srst_dreq  : 1   ; /* [10]  */
        UINT32    sas_ch0_tx_srst_dreq  : 1   ; /* [11]  */
        UINT32    sas_ch1_tx_srst_dreq  : 1   ; /* [12]  */
        UINT32    sas_ch2_tx_srst_dreq  : 1   ; /* [13]  */
        UINT32    sas_ch3_tx_srst_dreq  : 1   ; /* [14]  */
        UINT32    sas_ch4_tx_srst_dreq  : 1   ; /* [15]  */
        UINT32    sas_ch5_tx_srst_dreq  : 1   ; /* [16]  */
        UINT32    sas_ch6_tx_srst_dreq  : 1   ; /* [17]  */
        UINT32    sas_ch7_tx_srst_dreq  : 1   ; /* [18]  */
        UINT32    reserved_0            : 13  ; /* [31..19]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sas_reset_dreq;

/* Define the union u_sc_mctp0_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp0_srst_req        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp0_reset_req;

/* Define the union u_sc_mctp0_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp0_srst_dreq       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp0_reset_dreq;

/* Define the union u_sc_mctp1_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp1_srst_req        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp1_reset_req;

/* Define the union u_sc_mctp1_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp1_srst_dreq       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp1_reset_dreq;

/* Define the union u_sc_mctp2_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp2_srst_req        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp2_reset_req;

/* Define the union u_sc_mctp2_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp2_srst_dreq       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp2_reset_dreq;

/* Define the union u_sc_sllc_tsvrx_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    sllc_tsvrx0_srst_req  : 1   ; /* [0]  */
        UINT32    sllc_tsvrx1_srst_req  : 1   ; /* [1]  */
        UINT32    sllc_tsvrx2_srst_req  : 1   ; /* [2]  */
        UINT32    sllc_tsvrx3_srst_req  : 1   ; /* [3]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sllc_tsvrx_reset_req;

/* Define the union u_sc_sllc_tsvrx_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    sllc_tsvrx0_srst_dreq : 1   ; /* [0]  */
        UINT32    sllc_tsvrx1_srst_dreq : 1   ; /* [1]  */
        UINT32    sllc_tsvrx2_srst_dreq : 1   ; /* [2]  */
        UINT32    sllc_tsvrx3_srst_dreq : 1   ; /* [3]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sllc_tsvrx_reset_dreq;

/* Define the union u_sc_pcie_hilink_pcs_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_hilink_pcs_lane0_srst_req : 1   ; /* [0]  */
        UINT32    pcie0_hilink_pcs_lane1_srst_req : 1   ; /* [1]  */
        UINT32    pcie0_hilink_pcs_lane2_srst_req : 1   ; /* [2]  */
        UINT32    pcie0_hilink_pcs_lane3_srst_req : 1   ; /* [3]  */
        UINT32    pcie0_hilink_pcs_lane4_srst_req : 1   ; /* [4]  */
        UINT32    pcie0_hilink_pcs_lane5_srst_req : 1   ; /* [5]  */
        UINT32    pcie0_hilink_pcs_lane6_srst_req : 1   ; /* [6]  */
        UINT32    pcie0_hilink_pcs_lane7_srst_req : 1   ; /* [7]  */
        UINT32    pcie1_hilink_pcs_lane0_srst_req : 1   ; /* [8]  */
        UINT32    pcie1_hilink_pcs_lane1_srst_req : 1   ; /* [9]  */
        UINT32    pcie1_hilink_pcs_lane2_srst_req : 1   ; /* [10]  */
        UINT32    pcie1_hilink_pcs_lane3_srst_req : 1   ; /* [11]  */
        UINT32    pcie1_hilink_pcs_lane4_srst_req : 1   ; /* [12]  */
        UINT32    pcie1_hilink_pcs_lane5_srst_req : 1   ; /* [13]  */
        UINT32    pcie1_hilink_pcs_lane6_srst_req : 1   ; /* [14]  */
        UINT32    pcie1_hilink_pcs_lane7_srst_req : 1   ; /* [15]  */
        UINT32    pcie2_hilink_pcs_lane0_srst_req : 1   ; /* [16]  */
        UINT32    pcie2_hilink_pcs_lane1_srst_req : 1   ; /* [17]  */
        UINT32    pcie2_hilink_pcs_lane2_srst_req : 1   ; /* [18]  */
        UINT32    pcie2_hilink_pcs_lane3_srst_req : 1   ; /* [19]  */
        UINT32    pcie2_hilink_pcs_lane4_srst_req : 1   ; /* [20]  */
        UINT32    pcie2_hilink_pcs_lane5_srst_req : 1   ; /* [21]  */
        UINT32    pcie2_hilink_pcs_lane6_srst_req : 1   ; /* [22]  */
        UINT32    pcie2_hilink_pcs_lane7_srst_req : 1   ; /* [23]  */
        UINT32    pcie3_hilink_pcs_lane0_srst_req : 1   ; /* [24]  */
        UINT32    pcie3_hilink_pcs_lane1_srst_req : 1   ; /* [25]  */
        UINT32    pcie3_hilink_pcs_lane2_srst_req : 1   ; /* [26]  */
        UINT32    pcie3_hilink_pcs_lane3_srst_req : 1   ; /* [27]  */
        UINT32    pcie3_hilink_pcs_lane4_srst_req : 1   ; /* [28]  */
        UINT32    pcie3_hilink_pcs_lane5_srst_req : 1   ; /* [29]  */
        UINT32    pcie3_hilink_pcs_lane6_srst_req : 1   ; /* [30]  */
        UINT32    pcie3_hilink_pcs_lane7_srst_req : 1   ; /* [31]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie_hilink_pcs_reset_req;

/* Define the union u_sc_pcie_hilink_pcs_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_hilink_pcs_lane0_srst_dreq : 1   ; /* [0]  */
        UINT32    pcie0_hilink_pcs_lane1_srst_dreq : 1   ; /* [1]  */
        UINT32    pcie0_hilink_pcs_lane2_srst_dreq : 1   ; /* [2]  */
        UINT32    pcie0_hilink_pcs_lane3_srst_dreq : 1   ; /* [3]  */
        UINT32    pcie0_hilink_pcs_lane4_srst_dreq : 1   ; /* [4]  */
        UINT32    pcie0_hilink_pcs_lane5_srst_dreq : 1   ; /* [5]  */
        UINT32    pcie0_hilink_pcs_lane6_srst_dreq : 1   ; /* [6]  */
        UINT32    pcie0_hilink_pcs_lane7_srst_dreq : 1   ; /* [7]  */
        UINT32    pcie1_hilink_pcs_lane0_srst_dreq : 1   ; /* [8]  */
        UINT32    pcie1_hilink_pcs_lane1_srst_dreq : 1   ; /* [9]  */
        UINT32    pcie1_hilink_pcs_lane2_srst_dreq : 1   ; /* [10]  */
        UINT32    pcie1_hilink_pcs_lane3_srst_dreq : 1   ; /* [11]  */
        UINT32    pcie1_hilink_pcs_lane4_srst_dreq : 1   ; /* [12]  */
        UINT32    pcie1_hilink_pcs_lane5_srst_dreq : 1   ; /* [13]  */
        UINT32    pcie1_hilink_pcs_lane6_srst_dreq : 1   ; /* [14]  */
        UINT32    pcie1_hilink_pcs_lane7_srst_dreq : 1   ; /* [15]  */
        UINT32    pcie2_hilink_pcs_lane0_srst_dreq : 1   ; /* [16]  */
        UINT32    pcie2_hilink_pcs_lane1_srst_dreq : 1   ; /* [17]  */
        UINT32    pcie2_hilink_pcs_lane2_srst_dreq : 1   ; /* [18]  */
        UINT32    pcie2_hilink_pcs_lane3_srst_dreq : 1   ; /* [19]  */
        UINT32    pcie2_hilink_pcs_lane4_srst_dreq : 1   ; /* [20]  */
        UINT32    pcie2_hilink_pcs_lane5_srst_dreq : 1   ; /* [21]  */
        UINT32    pcie2_hilink_pcs_lane6_srst_dreq : 1   ; /* [22]  */
        UINT32    pcie2_hilink_pcs_lane7_srst_dreq : 1   ; /* [23]  */
        UINT32    pcie3_hilink_pcs_lane0_srst_dreq : 1   ; /* [24]  */
        UINT32    pcie3_hilink_pcs_lane1_srst_dreq : 1   ; /* [25]  */
        UINT32    pcie3_hilink_pcs_lane2_srst_dreq : 1   ; /* [26]  */
        UINT32    pcie3_hilink_pcs_lane3_srst_dreq : 1   ; /* [27]  */
        UINT32    pcie3_hilink_pcs_lane4_srst_dreq : 1   ; /* [28]  */
        UINT32    pcie3_hilink_pcs_lane5_srst_dreq : 1   ; /* [29]  */
        UINT32    pcie3_hilink_pcs_lane6_srst_dreq : 1   ; /* [30]  */
        UINT32    pcie3_hilink_pcs_lane7_srst_dreq : 1   ; /* [31]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie_hilink_pcs_reset_dreq;

/* Define the union u_sc_pcie3_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie3_srst_req        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_reset_req;

/* Define the union u_sc_pcie3_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie3_srst_dreq       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_reset_dreq;

/* Define the union u_sc_mctp3_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp3_srst_req        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp3_reset_req;

/* Define the union u_sc_mctp3_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp3_srst_dreq       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp3_reset_dreq;

/* Define the union u_sc_its_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    its_srst_req          : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_its_reset_req;

/* Define the union u_sc_its_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    its_srst_dreq         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_its_reset_dreq;

/* Define the union u_sc_sllc_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    sllc_srst_req         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sllc_reset_req;

/* Define the union u_sc_sllc_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    sllc_srst_dreq        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sllc_reset_dreq;

/* Define the union u_sc_pcs_local_reset_req */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_pcs_local_srst_req : 1   ; /* [0]  */
        UINT32    pcie1_pcs_local_srst_req : 1   ; /* [1]  */
        UINT32    pcie2_pcs_local_srst_req : 1   ; /* [2]  */
        UINT32    pcie3_pcs_local_srst_req : 1   ; /* [3]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcs_local_reset_req;

/* Define the union u_sc_pcs_local_reset_dreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_pcs_local_srst_dreq : 1   ; /* [0]  */
        UINT32    pcie1_pcs_local_srst_dreq : 1   ; /* [1]  */
        UINT32    pcie2_pcs_local_srst_dreq : 1   ; /* [2]  */
        UINT32    pcie3_pcs_local_srst_dreq : 1   ; /* [3]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcs_local_reset_dreq;

/* Define the union u_sc_disp_daw_en */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    dispatch_daw_en       : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_disp_daw_en;

/* Define the union u_sc_dispatch_daw_array0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    daw_array0_did        : 3   ; /* [2..0]  */
        UINT32    daw_array0_size       : 5   ; /* [7..3]  */
        UINT32    daw_array0_sync       : 1   ; /* [8]  */
        UINT32    reserved_0            : 4   ; /* [12..9]  */
        UINT32    daw_array0_addr       : 19  ; /* [31..13]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_daw_array0;

/* Define the union u_sc_dispatch_daw_array1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    daw_array1_did        : 3   ; /* [2..0]  */
        UINT32    daw_array1_size       : 5   ; /* [7..3]  */
        UINT32    daw_array1_sync       : 1   ; /* [8]  */
        UINT32    reserved_0            : 4   ; /* [12..9]  */
        UINT32    daw_array1_addr       : 19  ; /* [31..13]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_daw_array1;

/* Define the union u_sc_dispatch_daw_array2 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    daw_array2_did        : 3   ; /* [2..0]  */
        UINT32    daw_array2_size       : 5   ; /* [7..3]  */
        UINT32    daw_array2_sync       : 1   ; /* [8]  */
        UINT32    reserved_0            : 4   ; /* [12..9]  */
        UINT32    daw_array2_addr       : 19  ; /* [31..13]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_daw_array2;

/* Define the union u_sc_dispatch_daw_array3 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    daw_array3_did        : 3   ; /* [2..0]  */
        UINT32    daw_array3_size       : 5   ; /* [7..3]  */
        UINT32    daw_array3_sync       : 1   ; /* [8]  */
        UINT32    reserved_0            : 4   ; /* [12..9]  */
        UINT32    daw_array3_addr       : 19  ; /* [31..13]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_daw_array3;

/* Define the union u_sc_dispatch_daw_array4 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    daw_array4_did        : 3   ; /* [2..0]  */
        UINT32    daw_array4_size       : 5   ; /* [7..3]  */
        UINT32    daw_array4_sync       : 1   ; /* [8]  */
        UINT32    reserved_0            : 4   ; /* [12..9]  */
        UINT32    daw_array4_addr       : 19  ; /* [31..13]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_daw_array4;

/* Define the union u_sc_dispatch_daw_array5 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    daw_array5_did        : 3   ; /* [2..0]  */
        UINT32    daw_array5_size       : 5   ; /* [7..3]  */
        UINT32    daw_array5_sync       : 1   ; /* [8]  */
        UINT32    reserved_0            : 4   ; /* [12..9]  */
        UINT32    daw_array5_addr       : 19  ; /* [31..13]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_daw_array5;

/* Define the union u_sc_dispatch_daw_array6 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    daw_array6_did        : 3   ; /* [2..0]  */
        UINT32    daw_array6_size       : 5   ; /* [7..3]  */
        UINT32    daw_array6_sync       : 1   ; /* [8]  */
        UINT32    reserved_0            : 4   ; /* [12..9]  */
        UINT32    daw_array6_addr       : 19  ; /* [31..13]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_daw_array6;

/* Define the union u_sc_dispatch_daw_array7 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    daw_array7_did        : 3   ; /* [2..0]  */
        UINT32    daw_array7_size       : 5   ; /* [7..3]  */
        UINT32    daw_array7_sync       : 1   ; /* [8]  */
        UINT32    reserved_0            : 4   ; /* [12..9]  */
        UINT32    daw_array7_addr       : 19  ; /* [31..13]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_daw_array7;

/* Define the union u_sc_dispatch_retry_control */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    retry_num_limit       : 16  ; /* [15..0]  */
        UINT32    retry_en              : 1   ; /* [16]  */
        UINT32    reserved_0            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_retry_control;

/* Define the union u_sc_dispatch_intmask */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    intmask               : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_intmask;

/* Define the union u_sc_dispatch_rawint */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    rawint                : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_rawint;

/* Define the union u_sc_dispatch_intstat */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    intsts                : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_intstat;

/* Define the union u_sc_dispatch_intclr */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    intclr                : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_intclr;

/* Define the union u_sc_dispatch_errstat */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    err_opcode            : 5   ; /* [4..0]  */
        UINT32    err_addr              : 17  ; /* [21..5]  */
        UINT32    reserved_0            : 10  ; /* [31..22]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_dispatch_errstat;

/* Define the union u_sc_remap_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    sys_remap_vld         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_remap_ctrl;

/* Define the union u_sc_fte_mux_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mux_sel_fte           : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_fte_mux_ctrl;

/* Define the union u_sc_hilink0_mux_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_mux_sel       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_mux_ctrl;

/* Define the union u_sc_hilink1_mux_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_mux_sel       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_mux_ctrl;

/* Define the union u_sc_hilink2_mux_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink2_mux_sel       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink2_mux_ctrl;

/* Define the union u_sc_hilink5_mux_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_mux_sel       : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_mux_ctrl;

/* Define the union u_sc_hilink1_ahb_mux_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_ahb_mux_sel   : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_ahb_mux_ctrl;

/* Define the union u_sc_hilink2_ahb_mux_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink2_ahb_mux_sel   : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink2_ahb_mux_ctrl;

/* Define the union u_sc_hilink5_ahb_mux_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_ahb_mux_sel   : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_ahb_mux_ctrl;

/* Define the union u_sc_hilink5_lrstb_mux_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_lrstb_mux_sel : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_lrstb_mux_ctrl;

/* Define the union u_sc_hilink6_lrstb_mux_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_lrstb_mux_sel : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_lrstb_mux_ctrl;

/* Define the union u_sc_hilink0_macro_ss_refclk */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_ss_refclk0_x2s : 2   ; /* [1..0]  */
        UINT32    hilink0_ss_refclk0_x2n : 2   ; /* [3..2]  */
        UINT32    hilink0_ss_refclk0_x2e : 2   ; /* [5..4]  */
        UINT32    hilink0_ss_refclk0_x2w : 2   ; /* [7..6]  */
        UINT32    hilink0_ss_refclk1_x2s : 2   ; /* [9..8]  */
        UINT32    hilink0_ss_refclk1_x2n : 2   ; /* [11..10]  */
        UINT32    hilink0_ss_refclk1_x2e : 2   ; /* [13..12]  */
        UINT32    hilink0_ss_refclk1_x2w : 2   ; /* [15..14]  */
        UINT32    reserved_0            : 16  ; /* [31..16]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_ss_refclk;

/* Define the union u_sc_hilink0_macro_cs_refclk_dirsel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_cs_refclk0_dirsel0 : 2   ; /* [1..0]  */
        UINT32    hilink0_cs_refclk0_dirsel1 : 2   ; /* [3..2]  */
        UINT32    hilink0_cs_refclk0_dirsel2 : 2   ; /* [5..4]  */
        UINT32    hilink0_cs_refclk0_dirsel3 : 2   ; /* [7..6]  */
        UINT32    hilink0_cs_refclk0_dirsel4 : 2   ; /* [9..8]  */
        UINT32    hilink0_cs_refclk1_dirsel0 : 2   ; /* [11..10]  */
        UINT32    hilink0_cs_refclk1_dirsel1 : 2   ; /* [13..12]  */
        UINT32    hilink0_cs_refclk1_dirsel2 : 2   ; /* [15..14]  */
        UINT32    hilink0_cs_refclk1_dirsel3 : 2   ; /* [17..16]  */
        UINT32    hilink0_cs_refclk1_dirsel4 : 2   ; /* [19..18]  */
        UINT32    reserved_0            : 12  ; /* [31..20]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_cs_refclk_dirsel;

/* Define the union u_sc_hilink0_macro_lifeclk2dig_sel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_lifeclk2dig_sel : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_lifeclk2dig_sel;

/* Define the union u_sc_hilink0_macro_core_clk_selext */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_core_clk_selext : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_core_clk_selext;

/* Define the union u_sc_hilink0_macro_core_clk_sel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_core_clk_sel  : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_core_clk_sel;

/* Define the union u_sc_hilink0_macro_ctrl_bus_mode */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_ctrl_bus_mode : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_ctrl_bus_mode;

/* Define the union u_sc_hilink0_macro_macropwrdb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_macropwrdb    : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_macropwrdb;

/* Define the union u_sc_hilink0_macro_grstb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_grstb         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_grstb;

/* Define the union u_sc_hilink0_macro_bit_slip */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_bit_slip      : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_bit_slip;

/* Define the union u_sc_hilink0_macro_lrstb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_lrstb         : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_lrstb;

/* Define the union u_sc_hilink1_macro_ss_refclk */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_ss_refclk0_x2s : 2   ; /* [1..0]  */
        UINT32    hilink1_ss_refclk0_x2n : 2   ; /* [3..2]  */
        UINT32    hilink1_ss_refclk0_x2e : 2   ; /* [5..4]  */
        UINT32    hilink1_ss_refclk0_x2w : 2   ; /* [7..6]  */
        UINT32    hilink1_ss_refclk1_x2s : 2   ; /* [9..8]  */
        UINT32    hilink1_ss_refclk1_x2n : 2   ; /* [11..10]  */
        UINT32    hilink1_ss_refclk1_x2e : 2   ; /* [13..12]  */
        UINT32    hilink1_ss_refclk1_x2w : 2   ; /* [15..14]  */
        UINT32    reserved_0            : 16  ; /* [31..16]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_ss_refclk;

/* Define the union u_sc_hilink1_macro_cs_refclk_dirsel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_cs_refclk0_dirsel0 : 2   ; /* [1..0]  */
        UINT32    hilink1_cs_refclk0_dirsel1 : 2   ; /* [3..2]  */
        UINT32    hilink1_cs_refclk0_dirsel2 : 2   ; /* [5..4]  */
        UINT32    hilink1_cs_refclk0_dirsel3 : 2   ; /* [7..6]  */
        UINT32    hilink1_cs_refclk0_dirsel4 : 2   ; /* [9..8]  */
        UINT32    hilink1_cs_refclk1_dirsel0 : 2   ; /* [11..10]  */
        UINT32    hilink1_cs_refclk1_dirsel1 : 2   ; /* [13..12]  */
        UINT32    hilink1_cs_refclk1_dirsel2 : 2   ; /* [15..14]  */
        UINT32    hilink1_cs_refclk1_dirsel3 : 2   ; /* [17..16]  */
        UINT32    hilink1_cs_refclk1_dirsel4 : 2   ; /* [19..18]  */
        UINT32    reserved_0            : 12  ; /* [31..20]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_cs_refclk_dirsel;

/* Define the union u_sc_hilink1_macro_lifeclk2dig_sel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_lifeclk2dig_sel : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_lifeclk2dig_sel;

/* Define the union u_sc_hilink1_macro_core_clk_selext */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_core_clk_selext : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_core_clk_selext;

/* Define the union u_sc_hilink1_macro_core_clk_sel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_core_clk_sel  : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_core_clk_sel;

/* Define the union u_sc_hilink1_macro_ctrl_bus_mode */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_ctrl_bus_mode : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_ctrl_bus_mode;

/* Define the union u_sc_hilink1_macro_macropwrdb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_macropwrdb    : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_macropwrdb;

/* Define the union u_sc_hilink1_macro_grstb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_grstb         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_grstb;

/* Define the union u_sc_hilink1_macro_bit_slip */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_bit_slip      : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_bit_slip;

/* Define the union u_sc_hilink1_macro_lrstb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_lrstb         : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_lrstb;

/* Define the union u_sc_hilink5_macro_ss_refclk */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_ss_refclk0_x2s : 2   ; /* [1..0]  */
        UINT32    hilink5_ss_refclk0_x2n : 2   ; /* [3..2]  */
        UINT32    hilink5_ss_refclk0_x2e : 2   ; /* [5..4]  */
        UINT32    hilink5_ss_refclk0_x2w : 2   ; /* [7..6]  */
        UINT32    hilink5_ss_refclk1_x2s : 2   ; /* [9..8]  */
        UINT32    hilink5_ss_refclk1_x2n : 2   ; /* [11..10]  */
        UINT32    hilink5_ss_refclk1_x2e : 2   ; /* [13..12]  */
        UINT32    hilink5_ss_refclk1_x2w : 2   ; /* [15..14]  */
        UINT32    reserved_0            : 16  ; /* [31..16]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_ss_refclk;

/* Define the union u_sc_hilink5_macro_cs_refclk_dirsel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_cs_refclk0_dirsel0 : 2   ; /* [1..0]  */
        UINT32    hilink5_cs_refclk0_dirsel1 : 2   ; /* [3..2]  */
        UINT32    hilink5_cs_refclk0_dirsel2 : 2   ; /* [5..4]  */
        UINT32    hilink5_cs_refclk0_dirsel3 : 2   ; /* [7..6]  */
        UINT32    hilink5_cs_refclk0_dirsel4 : 2   ; /* [9..8]  */
        UINT32    hilink5_cs_refclk1_dirsel0 : 2   ; /* [11..10]  */
        UINT32    hilink5_cs_refclk1_dirsel1 : 2   ; /* [13..12]  */
        UINT32    hilink5_cs_refclk1_dirsel2 : 2   ; /* [15..14]  */
        UINT32    hilink5_cs_refclk1_dirsel3 : 2   ; /* [17..16]  */
        UINT32    hilink5_cs_refclk1_dirsel4 : 2   ; /* [19..18]  */
        UINT32    reserved_0            : 12  ; /* [31..20]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_cs_refclk_dirsel;

/* Define the union u_sc_hilink5_macro_lifeclk2dig_sel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_lifeclk2dig_sel : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_lifeclk2dig_sel;

/* Define the union u_sc_hilink5_macro_core_clk_selext */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_core_clk_selext : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_core_clk_selext;

/* Define the union u_sc_hilink5_macro_core_clk_sel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_core_clk_sel  : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_core_clk_sel;

/* Define the union u_sc_hilink5_macro_ctrl_bus_mode */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_ctrl_bus_mode : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_ctrl_bus_mode;

/* Define the union u_sc_hilink5_macro_macropwrdb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_macropwrdb    : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_macropwrdb;

/* Define the union u_sc_hilink5_macro_grstb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_grstb         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_grstb;

/* Define the union u_sc_hilink5_macro_bit_slip */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_bit_slip      : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_bit_slip;

/* Define the union u_sc_hilink5_macro_lrstb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_lrstb         : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_lrstb;

/* Define the union u_sc_hilink6_macro_ss_refclk */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_ss_refclk0_x2s : 2   ; /* [1..0]  */
        UINT32    hilink6_ss_refclk0_x2n : 2   ; /* [3..2]  */
        UINT32    hilink6_ss_refclk0_x2e : 2   ; /* [5..4]  */
        UINT32    hilink6_ss_refclk0_x2w : 2   ; /* [7..6]  */
        UINT32    hilink6_ss_refclk1_x2s : 2   ; /* [9..8]  */
        UINT32    hilink6_ss_refclk1_x2n : 2   ; /* [11..10]  */
        UINT32    hilink6_ss_refclk1_x2e : 2   ; /* [13..12]  */
        UINT32    hilink6_ss_refclk1_x2w : 2   ; /* [15..14]  */
        UINT32    reserved_0            : 16  ; /* [31..16]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_ss_refclk;

/* Define the union u_sc_hilink6_macro_cs_refclk_dirsel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_cs_refclk0_dirsel0 : 2   ; /* [1..0]  */
        UINT32    hilink6_cs_refclk0_dirsel1 : 2   ; /* [3..2]  */
        UINT32    hilink6_cs_refclk0_dirsel2 : 2   ; /* [5..4]  */
        UINT32    hilink6_cs_refclk0_dirsel3 : 2   ; /* [7..6]  */
        UINT32    hilink6_cs_refclk0_dirsel4 : 2   ; /* [9..8]  */
        UINT32    hilink6_cs_refclk1_dirsel0 : 2   ; /* [11..10]  */
        UINT32    hilink6_cs_refclk1_dirsel1 : 2   ; /* [13..12]  */
        UINT32    hilink6_cs_refclk1_dirsel2 : 2   ; /* [15..14]  */
        UINT32    hilink6_cs_refclk1_dirsel3 : 2   ; /* [17..16]  */
        UINT32    hilink6_cs_refclk1_dirsel4 : 2   ; /* [19..18]  */
        UINT32    reserved_0            : 12  ; /* [31..20]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_cs_refclk_dirsel;

/* Define the union u_sc_hilink6_macro_lifeclk2dig_sel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_lifeclk2dig_sel : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_lifeclk2dig_sel;

/* Define the union u_sc_hilink6_macro_core_clk_selext */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_core_clk_selext : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_core_clk_selext;

/* Define the union u_sc_hilink6_macro_core_clk_sel */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_core_clk_sel  : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_core_clk_sel;

/* Define the union u_sc_hilink6_macro_ctrl_bus_mode */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_ctrl_bus_mode : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_ctrl_bus_mode;

/* Define the union u_sc_hilink6_macro_macropwrdb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_macropwrdb    : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_macropwrdb;

/* Define the union u_sc_hilink6_macro_grstb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_grstb         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_grstb;

/* Define the union u_sc_hilink6_macro_bit_slip */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_bit_slip      : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_bit_slip;

/* Define the union u_sc_hilink6_macro_lrstb */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_lrstb         : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_lrstb;

/* Define the union u_sc_pcie0_clkreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_phy_clk_req_n   : 1   ; /* [0]  */
        UINT32    pcie0_apb_cfg_sel     : 2   ; /* [2..1]  */
        UINT32    reserved_0            : 29  ; /* [31..3]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_clkreq;

/* Define the union u_sc_pcie0_axi_mstr_ooo_wr_cfg */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_cfg_max_wr_trans : 6   ; /* [5..0]  */
        UINT32    reserved_0            : 2   ; /* [7..6]  */
        UINT32    pcie0_wr_rate_limit   : 4   ; /* [11..8]  */
        UINT32    pcie0_ctrl_lat_stat_wr_en : 1   ; /* [12]  */
        UINT32    reserved_1            : 3   ; /* [15..13]  */
        UINT32    pcie0_en_device_wr_ooo : 1   ; /* [16]  */
        UINT32    reserved_2            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_axi_mstr_ooo_wr_cfg;

/* Define the union u_sc_pcie0_axi_mstr_ooo_rd_cfg */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_cfg_max_rd_trans : 6   ; /* [5..0]  */
        UINT32    reserved_0            : 2   ; /* [7..6]  */
        UINT32    pcie0_rd_rate_limit   : 4   ; /* [11..8]  */
        UINT32    pcie0_ctrl_lat_stat_rd_en : 1   ; /* [12]  */
        UINT32    reserved_1            : 3   ; /* [15..13]  */
        UINT32    pcie0_en_device_rd_ooo : 1   ; /* [16]  */
        UINT32    reserved_2            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_axi_mstr_ooo_rd_cfg;

/* Define the union u_sc_pcie1_clkreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1hilink_phy_clk_req_n : 1   ; /* [0]  */
        UINT32    pcie1vsemi_phy_clk_req_n : 1   ; /* [1]  */
        UINT32    pcie1_apb_cfg_sel     : 2   ; /* [3..2]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_clkreq;

/* Define the union u_sc_pcie1_axi_mstr_ooo_wr_cfg */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_cfg_max_wr_trans : 6   ; /* [5..0]  */
        UINT32    reserved_0            : 2   ; /* [7..6]  */
        UINT32    pcie1_wr_rate_limit   : 4   ; /* [11..8]  */
        UINT32    pcie1_ctrl_lat_stat_wr_en : 1   ; /* [12]  */
        UINT32    reserved_1            : 3   ; /* [15..13]  */
        UINT32    pcie1_en_device_wr_ooo : 1   ; /* [16]  */
        UINT32    reserved_2            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_axi_mstr_ooo_wr_cfg;

/* Define the union u_sc_pcie1_axi_mstr_ooo_rd_cfg */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_cfg_max_rd_trans : 6   ; /* [5..0]  */
        UINT32    reserved_0            : 2   ; /* [7..6]  */
        UINT32    pcie1_rd_rate_limit   : 4   ; /* [11..8]  */
        UINT32    pcie1_ctrl_lat_stat_rd_en : 1   ; /* [12]  */
        UINT32    reserved_1            : 3   ; /* [15..13]  */
        UINT32    pcie1_en_device_rd_ooo : 1   ; /* [16]  */
        UINT32    reserved_2            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_axi_mstr_ooo_rd_cfg;

/* Define the union u_sc_pcie2_clkreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2hilink_phy_clk_req_n : 1   ; /* [0]  */
        UINT32    pcie2vsemi_phy_clk_req_n : 1   ; /* [1]  */
        UINT32    pcie2_apb_cfg_sel     : 2   ; /* [3..2]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_clkreq;

/* Define the union u_sc_pcie2_axi_mstr_ooo_wr_cfg */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_cfg_max_wr_trans : 6   ; /* [5..0]  */
        UINT32    reserved_0            : 2   ; /* [7..6]  */
        UINT32    pcie2_wr_rate_limit   : 4   ; /* [11..8]  */
        UINT32    pcie2_ctrl_lat_stat_wr_en : 1   ; /* [12]  */
        UINT32    reserved_1            : 3   ; /* [15..13]  */
        UINT32    pcie2_en_device_wr_ooo : 1   ; /* [16]  */
        UINT32    reserved_2            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_axi_mstr_ooo_wr_cfg;

/* Define the union u_sc_pcie2_axi_mstr_ooo_rd_cfg */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_cfg_max_rd_trans : 6   ; /* [5..0]  */
        UINT32    reserved_0            : 2   ; /* [7..6]  */
        UINT32    pcie2_rd_rate_limit   : 4   ; /* [11..8]  */
        UINT32    pcie2_ctrl_lat_stat_rd_en : 1   ; /* [12]  */
        UINT32    reserved_1            : 3   ; /* [15..13]  */
        UINT32    pcie2_en_device_rd_ooo : 1   ; /* [16]  */
        UINT32    reserved_2            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_axi_mstr_ooo_rd_cfg;

/* Define the union u_sc_pcie3_clkreq */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie3_phy_clk_req_n   : 1   ; /* [0]  */
        UINT32    pcie3_apb_cfg_sel     : 2   ; /* [2..1]  */
        UINT32    reserved_0            : 29  ; /* [31..3]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_clkreq;

/* Define the union u_sc_smmu_mem_ctrl0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    ctrl_rfs_smmu         : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_smmu_mem_ctrl0;

/* Define the union u_sc_smmu_mem_ctrl1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    tsel_hc_smmu          : 3   ; /* [2..0]  */
        UINT32    reserved_0            : 29  ; /* [31..3]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_smmu_mem_ctrl1;

/* Define the union u_sc_smmu_mem_ctrl2 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    test_hc_smmu          : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_smmu_mem_ctrl2;

/* Define the union u_sc_sllc0_mem_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    ctrl_rft_sllc0        : 10  ; /* [9..0]  */
        UINT32    reserved_0            : 22  ; /* [31..10]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sllc0_mem_ctrl;

/* Define the union u_sc_sas_mem_ctrl */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    ctrl_rfs_sas          : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sas_mem_ctrl;

/* Define the union u_sc_pcie_mem_ctrl0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    ctrl_rft_pcie         : 10  ; /* [9..0]  */
        UINT32    reserved_0            : 22  ; /* [31..10]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie_mem_ctrl0;

/* Define the union u_sc_pcie_mem_ctrl1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    ctrl_rashsd_pcie      : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie_mem_ctrl1;

/* Define the union u_sc_pcie_mem_ctrl2 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    ctrl_rfs_pcie         : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie_mem_ctrl2;

/* Define the union u_sc_skew_common_0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_en               : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_common_0;

/* Define the union u_sc_skew_common_1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_addr_offset      : 5   ; /* [4..0]  */
        UINT32    reserved_0            : 27  ; /* [31..5]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_common_1;

/* Define the union u_sc_skew_common_2 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_config_in        : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_common_2;

/* Define the union u_sc_skew_a_0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_bypass_a         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_a_0;

/* Define the union u_sc_skew_a_1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_config_in_a      : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_a_1;

/* Define the union u_sc_skew_a_2 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_out_delay_sel_a  : 2   ; /* [1..0]  */
        UINT32    skew_in_delay_sel_a   : 2   ; /* [3..2]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_a_2;

/* Define the union u_sc_skew_a_3 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_sel_a_1          : 1   ; /* [0]  */
        UINT32    skew_sel_a_0          : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_a_3;

/* Define the union u_sc_skew_a_4 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_update_en_a      : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_a_4;

/* Define the union u_sc_skew_a_5 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_varible_set_a    : 16  ; /* [15..0]  */
        UINT32    reserved_0            : 16  ; /* [31..16]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_a_5;

/* Define the union u_sc_skew_a_7 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_dcell_set_a_h    : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_a_7;

/* Define the union u_sc_skew_a_8 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_sel_osc_a        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_a_8;

/* Define the union u_sc_skew_b_0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_bypass_b         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_b_0;

/* Define the union u_sc_skew_b_1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_config_in_b      : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_b_1;

/* Define the union u_sc_skew_b_2 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_out_delay_sel_b  : 2   ; /* [1..0]  */
        UINT32    skew_in_delay_sel_b   : 2   ; /* [3..2]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_b_2;

/* Define the union u_sc_skew_b_3 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_sel_b_1          : 1   ; /* [0]  */
        UINT32    skew_sel_b_0          : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_b_3;

/* Define the union u_sc_skew_b_4 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_update_en_b      : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_b_4;

/* Define the union u_sc_skew_b_5 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_varible_set_b    : 16  ; /* [15..0]  */
        UINT32    reserved_0            : 16  ; /* [31..16]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_b_5;

/* Define the union u_sc_skew_b_7 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_dcell_set_b_h    : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_b_7;

/* Define the union u_sc_skew_b_8 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_sel_osc_b        : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_b_8;

/* Define the union u_sc_pcie0_clk_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie0_st          : 1   ; /* [0]  */
        UINT32    clk_pcie0_pipe_st     : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_clk_st;

/* Define the union u_sc_pcie1_clk_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie1_st          : 1   ; /* [0]  */
        UINT32    clk_pcie1_pipe_st     : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_clk_st;

/* Define the union u_sc_pcie2_clk_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie2_st          : 1   ; /* [0]  */
        UINT32    clk_pcie2_pipe_st     : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_clk_st;

/* Define the union u_sc_sas_clk_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_sas_st            : 1   ; /* [0]  */
        UINT32    clk_sas_mem_st        : 1   ; /* [1]  */
        UINT32    clk_sas_ahb_st        : 1   ; /* [2]  */
        UINT32    clk_sas_oob_st        : 1   ; /* [3]  */
        UINT32    clk_sas_ch0_rx_st     : 1   ; /* [4]  */
        UINT32    clk_sas_ch1_rx_st     : 1   ; /* [5]  */
        UINT32    clk_sas_ch2_rx_st     : 1   ; /* [6]  */
        UINT32    clk_sas_ch3_rx_st     : 1   ; /* [7]  */
        UINT32    clk_sas_ch4_rx_st     : 1   ; /* [8]  */
        UINT32    clk_sas_ch5_rx_st     : 1   ; /* [9]  */
        UINT32    clk_sas_ch6_rx_st     : 1   ; /* [10]  */
        UINT32    clk_sas_ch7_rx_st     : 1   ; /* [11]  */
        UINT32    clk_sas_ch0_tx_st     : 1   ; /* [12]  */
        UINT32    clk_sas_ch1_tx_st     : 1   ; /* [13]  */
        UINT32    clk_sas_ch2_tx_st     : 1   ; /* [14]  */
        UINT32    clk_sas_ch3_tx_st     : 1   ; /* [15]  */
        UINT32    clk_sas_ch4_tx_st     : 1   ; /* [16]  */
        UINT32    clk_sas_ch5_tx_st     : 1   ; /* [17]  */
        UINT32    clk_sas_ch6_tx_st     : 1   ; /* [18]  */
        UINT32    clk_sas_ch7_tx_st     : 1   ; /* [19]  */
        UINT32    reserved_0            : 12  ; /* [31..20]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sas_clk_st;

/* Define the union u_sc_pcie3_clk_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_pcie3_st          : 1   ; /* [0]  */
        UINT32    clk_pcie3_pipe_st     : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_clk_st;

/* Define the union u_sc_its_clk_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_its_st            : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_its_clk_st;

/* Define the union u_sc_sllc_clk_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    clk_sllc_st           : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sllc_clk_st;

/* Define the union u_sc_pcie0_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_srst_st         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_reset_st;

/* Define the union u_sc_pcie1_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_srst_st         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_reset_st;

/* Define the union u_sc_pcie2_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_srst_st         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_reset_st;

/* Define the union u_sc_sas_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    sas_srst_st           : 1   ; /* [0]  */
        UINT32    sas_oob_srst_st       : 1   ; /* [1]  */
        UINT32    sas_ahb_srst_st       : 1   ; /* [2]  */
        UINT32    sas_ch0_rx_srst_st    : 1   ; /* [3]  */
        UINT32    sas_ch1_rx_srst_st    : 1   ; /* [4]  */
        UINT32    sas_ch2_rx_srst_st    : 1   ; /* [5]  */
        UINT32    sas_ch3_rx_srst_st    : 1   ; /* [6]  */
        UINT32    sas_ch4_rx_srst_st    : 1   ; /* [7]  */
        UINT32    sas_ch5_rx_srst_st    : 1   ; /* [8]  */
        UINT32    sas_ch6_rx_srst_st    : 1   ; /* [9]  */
        UINT32    sas_ch7_rx_srst_st    : 1   ; /* [10]  */
        UINT32    sas_ch0_tx_srst_st    : 1   ; /* [11]  */
        UINT32    sas_ch1_tx_srst_st    : 1   ; /* [12]  */
        UINT32    sas_ch2_tx_srst_st    : 1   ; /* [13]  */
        UINT32    sas_ch3_tx_srst_st    : 1   ; /* [14]  */
        UINT32    sas_ch4_tx_srst_st    : 1   ; /* [15]  */
        UINT32    sas_ch5_tx_srst_st    : 1   ; /* [16]  */
        UINT32    sas_ch6_tx_srst_st    : 1   ; /* [17]  */
        UINT32    sas_ch7_tx_srst_st    : 1   ; /* [18]  */
        UINT32    reserved_0            : 13  ; /* [31..19]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sas_reset_st;

/* Define the union u_sc_mctp0_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp0_srst_st         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp0_reset_st;

/* Define the union u_sc_mctp1_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp1_srst_st         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp1_reset_st;

/* Define the union u_sc_mctp2_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp2_srst_st         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp2_reset_st;

/* Define the union u_sc_sllc_tsvrx_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    sllc_tsvrx0_srst_st   : 1   ; /* [0]  */
        UINT32    sllc_tsvrx1_srst_st   : 1   ; /* [1]  */
        UINT32    sllc_tsvrx2_srst_st   : 1   ; /* [2]  */
        UINT32    sllc_tsvrx3_srst_st   : 1   ; /* [3]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sllc_tsvrx_reset_st;

/* Define the union u_sc_pcie_hilink_pcs_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_hilink_pcs_lane0_srst_st : 1   ; /* [0]  */
        UINT32    pcie0_hilink_pcs_lane1_srst_st : 1   ; /* [1]  */
        UINT32    pcie0_hilink_pcs_lane2_srst_st : 1   ; /* [2]  */
        UINT32    pcie0_hilink_pcs_lane3_srst_st : 1   ; /* [3]  */
        UINT32    pcie0_hilink_pcs_lane4_srst_st : 1   ; /* [4]  */
        UINT32    pcie0_hilink_pcs_lane5_srst_st : 1   ; /* [5]  */
        UINT32    pcie0_hilink_pcs_lane6_srst_st : 1   ; /* [6]  */
        UINT32    pcie0_hilink_pcs_lane7_srst_st : 1   ; /* [7]  */
        UINT32    pcie1_hilink_pcs_lane0_srst_st : 1   ; /* [8]  */
        UINT32    pcie1_hilink_pcs_lane1_srst_st : 1   ; /* [9]  */
        UINT32    pcie1_hilink_pcs_lane2_srst_st : 1   ; /* [10]  */
        UINT32    pcie1_hilink_pcs_lane3_srst_st : 1   ; /* [11]  */
        UINT32    pcie1_hilink_pcs_lane4_srst_st : 1   ; /* [12]  */
        UINT32    pcie1_hilink_pcs_lane5_srst_st : 1   ; /* [13]  */
        UINT32    pcie1_hilink_pcs_lane6_srst_st : 1   ; /* [14]  */
        UINT32    pcie1_hilink_pcs_lane7_srst_st : 1   ; /* [15]  */
        UINT32    pcie2_hilink_pcs_lane0_srst_st : 1   ; /* [16]  */
        UINT32    pcie2_hilink_pcs_lane1_srst_st : 1   ; /* [17]  */
        UINT32    pcie2_hilink_pcs_lane2_srst_st : 1   ; /* [18]  */
        UINT32    pcie2_hilink_pcs_lane3_srst_st : 1   ; /* [19]  */
        UINT32    pcie2_hilink_pcs_lane4_srst_st : 1   ; /* [20]  */
        UINT32    pcie2_hilink_pcs_lane5_srst_st : 1   ; /* [21]  */
        UINT32    pcie2_hilink_pcs_lane6_srst_st : 1   ; /* [22]  */
        UINT32    pcie2_hilink_pcs_lane7_srst_st : 1   ; /* [23]  */
        UINT32    pcie3_hilink_pcs_lane0_srst_st : 1   ; /* [24]  */
        UINT32    pcie3_hilink_pcs_lane1_srst_st : 1   ; /* [25]  */
        UINT32    pcie3_hilink_pcs_lane2_srst_st : 1   ; /* [26]  */
        UINT32    pcie3_hilink_pcs_lane3_srst_st : 1   ; /* [27]  */
        UINT32    pcie3_hilink_pcs_lane4_srst_st : 1   ; /* [28]  */
        UINT32    pcie3_hilink_pcs_lane5_srst_st : 1   ; /* [29]  */
        UINT32    pcie3_hilink_pcs_lane6_srst_st : 1   ; /* [30]  */
        UINT32    pcie3_hilink_pcs_lane7_srst_st : 1   ; /* [31]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie_hilink_pcs_reset_st;

/* Define the union u_sc_pcie3_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie3_srst_st         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_reset_st;

/* Define the union u_sc_mctp3_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    mctp3_srst_st         : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_mctp3_reset_st;

/* Define the union u_sc_its_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    its_srst_st           : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_its_reset_st;

/* Define the union u_sc_sllc_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    sllc_srst_st          : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_sllc_reset_st;

/* Define the union u_sc_pcs_local_reset_st */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_pcs_local_srst_st : 1   ; /* [0]  */
        UINT32    pcie1_pcs_local_srst_st : 1   ; /* [1]  */
        UINT32    pcie2_pcs_local_srst_st : 1   ; /* [2]  */
        UINT32    pcie3_pcs_local_srst_st : 1   ; /* [3]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcs_local_reset_st;

/* Define the union u_sc_hilink0_macro_plloutoflock */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_plloutoflock  : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_plloutoflock;

/* Define the union u_sc_hilink0_macro_prbs_err */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_prbs_err      : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_prbs_err;

/* Define the union u_sc_hilink0_macro_los */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink0_los           : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink0_macro_los;

/* Define the union u_sc_hilink1_macro_plloutoflock */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_plloutoflock  : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_plloutoflock;

/* Define the union u_sc_hilink1_macro_prbs_err */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_prbs_err      : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_prbs_err;

/* Define the union u_sc_hilink1_macro_los */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink1_los           : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink1_macro_los;

/* Define the union u_sc_hilink5_macro_plloutoflock */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_plloutoflock  : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_plloutoflock;

/* Define the union u_sc_hilink5_macro_prbs_err */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_prbs_err      : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_prbs_err;

/* Define the union u_sc_hilink5_macro_los */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink5_los           : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink5_macro_los;

/* Define the union u_sc_hilink6_macro_plloutoflock */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_plloutoflock  : 2   ; /* [1..0]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_plloutoflock;

/* Define the union u_sc_hilink6_macro_prbs_err */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_prbs_err      : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_prbs_err;

/* Define the union u_sc_hilink6_macro_los */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    hilink6_los           : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_hilink6_macro_los;

/* Define the union u_sc_pcie0_rxeqinpro_stat */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_mac_phy_rxeqinprogress : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_rxeqinpro_stat;

/* Define the union u_sc_pcie0_linkint_rcvry_stat */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_cfg_link_eq_req_int : 1   ; /* [0]  */
        UINT32    pcie0_xmlh_ltssm_state_rcvry_eq : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_linkint_rcvry_stat;

/* Define the union u_sc_pcie0_sys_state0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_gm_cmposer_lookup_err : 1   ; /* [0]  */
        UINT32    pcie0_radmx_cmposer_lookup_err : 1   ; /* [1]  */
        UINT32    pcie0_pm_xtlh_block_tlp : 1   ; /* [2]  */
        UINT32    pcie0_cfg_mem_space_en : 1   ; /* [3]  */
        UINT32    pcie0_cfg_rcb         : 1   ; /* [4]  */
        UINT32    pcie0_rdlh_link_up    : 1   ; /* [5]  */
        UINT32    pcie0_pm_curnt_state  : 3   ; /* [8..6]  */
        UINT32    pcie0_cfg_aer_rc_err_int : 1   ; /* [9]  */
        UINT32    pcie0_cfg_aer_int_msg_num : 5   ; /* [14..10]  */
        UINT32    pcie0_xmlh_link_up    : 1   ; /* [15]  */
        UINT32    pcie0_wake            : 1   ; /* [16]  */
        UINT32    pcie0_cfg_eml_control : 1   ; /* [17]  */
        UINT32    pcie0_hp_pme          : 1   ; /* [18]  */
        UINT32    pcie0_hp_int          : 1   ; /* [19]  */
        UINT32    pcie0_hp_msi          : 1   ; /* [20]  */
        UINT32    pcie0_pm_status       : 1   ; /* [21]  */
        UINT32    pcie0_ref_clk_req_n   : 1   ; /* [22]  */
        UINT32    pcie0_p2_exit_reg     : 1   ; /* [23]  */
        UINT32    pcie0_radm_msg_req_id_low : 8   ; /* [31..24]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

}U_SC_PCIE0_SYS_STATE0;

/* Define the union u_sc_pcie0_sys_state1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_axi_parity_errs_reg : 4   ; /* [3..0]  */
        UINT32    pcie0_app_parity_errs_reg : 3   ; /* [6..4]  */
        UINT32    pcie0_pm_linkst_in_l1 : 1   ; /* [7]  */
        UINT32    pcie0_pm_linkst_in_l2 : 1   ; /* [8]  */
        UINT32    pcie0_pm_linkst_l2_exit : 1   ; /* [9]  */
        UINT32    pcie0_mac_phy_power_down : 2   ; /* [11..10]  */
        UINT32    pcie0_radm_correctabl_err_reg : 1   ; /* [12]  */
        UINT32    pcie0_radm_nonfatal_err_reg : 1   ; /* [13]  */
        UINT32    pcie0_radm_fatal_err_reg : 1   ; /* [14]  */
        UINT32    pcie0_radm_pm_to_pme_reg : 1   ; /* [15]  */
        UINT32    pcie0_radm_pm_to_ack_reg : 1   ; /* [16]  */
        UINT32    pcie0_radm_cpl_timeout_reg : 1   ; /* [17]  */
        UINT32    pcie0_radm_msg_unlock_reg : 1   ; /* [18]  */
        UINT32    pcie0_cfg_pme_msi_reg : 1   ; /* [19]  */
        UINT32    pcie0_bridge_flush_not_reg : 1   ; /* [20]  */
        UINT32    pcie0_link_req_rst_not_reg : 1   ; /* [21]  */
        UINT32    pcie0_cfg_aer_rc_err_msi : 1   ; /* [22]  */
        UINT32    pcie0_cfg_sys_err_rc  : 1   ; /* [23]  */
        UINT32    pcie0_radm_msg_req_id_high : 8   ; /* [31..24]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} U_SC_PCIE0_SYS_STATE1;

/* Define the union u_sc_pcie0_sys_state4 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_ltssm_state     : 6   ; /* [5..0]  */
        UINT32    pcie0_mac_phy_rate    : 2   ; /* [7..6]  */
        UINT32    pcie0_slv_err_int     : 1   ; /* [8]  */
        UINT32    pcie0_retry_sram_addr : 10  ; /* [18..9]  */
        UINT32    pcie0_mstr_rresp_int  : 1   ; /* [19]  */
        UINT32    pcie0_mstr_bresp_int  : 1   ; /* [20]  */
        UINT32    pcie0_radm_inta_reg   : 1   ; /* [21]  */
        UINT32    pcie0_radm_intb_reg   : 1   ; /* [22]  */
        UINT32    pcie0_radm_intc_reg   : 1   ; /* [23]  */
        UINT32    pcie0_radm_intd_reg   : 1   ; /* [24]  */
        UINT32    pcie0_cfg_pme_int_reg : 1   ; /* [25]  */
        UINT32    pcie0_radm_vendor_msg_reg : 1   ; /* [26]  */
        UINT32    pcie0_bridge_flush_not : 1   ; /* [27]  */
        UINT32    pcie0_link_req_rst_not : 1   ; /* [28]  */
        UINT32    reserved_0            : 3   ; /* [31..29]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} U_SC_PCIE0_SYS_STATE4;

/* Define the union u_sc_pcie0_axi_mstr_ooo_wr_sts1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_curr_wr_latency : 16  ; /* [15..0]  */
        UINT32    pcie0_curr_wr_port_sts : 1   ; /* [16]  */
        UINT32    reserved_0            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_axi_mstr_ooo_wr_sts1;

/* Define the union u_sc_pcie0_axi_mstr_ooo_rd_sts1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_curr_rd_latency : 16  ; /* [15..0]  */
        UINT32    pcie0_curr_rd_port_sts : 1   ; /* [16]  */
        UINT32    reserved_0            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_axi_mstr_ooo_rd_sts1;

/* Define the union u_sc_pcie0_dsize_brg_ecc_err */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_rob_ecc_err_detect : 1   ; /* [0]  */
        UINT32    pcie0_rob_ecc_err_multpl : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_dsize_brg_ecc_err;

/* Define the union u_sc_pcie0_pciephy_ctrl_error */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie0_pciephy_ctrl_error : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie0_pciephy_ctrl_error;

/* Define the union u_sc_pcie1_rxeqinpro_stat */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_mac_phy_rxeqinprogress : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_rxeqinpro_stat;

/* Define the union u_sc_pcie1_linkint_rcvry_stat */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_cfg_link_eq_req_int : 1   ; /* [0]  */
        UINT32    pcie1_xmlh_ltssm_state_rcvry_eq : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_linkint_rcvry_stat;

/* Define the union u_sc_pcie1_sys_state0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_gm_cmposer_lookup_err : 1   ; /* [0]  */
        UINT32    pcie1_radmx_cmposer_lookup_err : 1   ; /* [1]  */
        UINT32    pcie1_pm_xtlh_block_tlp : 1   ; /* [2]  */
        UINT32    pcie1_cfg_mem_space_en : 1   ; /* [3]  */
        UINT32    pcie1_cfg_rcb         : 1   ; /* [4]  */
        UINT32    pcie1_rdlh_link_up    : 1   ; /* [5]  */
        UINT32    pcie1_pm_curnt_state  : 3   ; /* [8..6]  */
        UINT32    pcie1_cfg_aer_rc_err_int : 1   ; /* [9]  */
        UINT32    pcie1_cfg_aer_int_msg_num : 5   ; /* [14..10]  */
        UINT32    pcie1_xmlh_link_up    : 1   ; /* [15]  */
        UINT32    pcie1_wake            : 1   ; /* [16]  */
        UINT32    pcie1_cfg_eml_control : 1   ; /* [17]  */
        UINT32    pcie1_hp_pme          : 1   ; /* [18]  */
        UINT32    pcie1_hp_int          : 1   ; /* [19]  */
        UINT32    pcie1_hp_msi          : 1   ; /* [20]  */
        UINT32    pcie1_pm_status       : 1   ; /* [21]  */
        UINT32    pcie1_ref_clk_req_n   : 1   ; /* [22]  */
        UINT32    pcie1_p2_exit_reg     : 1   ; /* [23]  */
        UINT32    pcie1_radm_msg_req_id_low : 8   ; /* [31..24]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_sys_state0;

/* Define the union u_sc_pcie1_sys_state1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_axi_parity_errs_reg : 4   ; /* [3..0]  */
        UINT32    pcie1_app_parity_errs_reg : 3   ; /* [6..4]  */
        UINT32    pcie1_pm_linkst_in_l1 : 1   ; /* [7]  */
        UINT32    pcie1_pm_linkst_in_l2 : 1   ; /* [8]  */
        UINT32    pcie1_pm_linkst_l2_exit : 1   ; /* [9]  */
        UINT32    pcie1_mac_phy_power_down : 2   ; /* [11..10]  */
        UINT32    pcie1_radm_correctabl_err_reg : 1   ; /* [12]  */
        UINT32    pcie1_radm_nonfatal_err_reg : 1   ; /* [13]  */
        UINT32    pcie1_radm_fatal_err_reg : 1   ; /* [14]  */
        UINT32    pcie1_radm_pm_to_pme_reg : 1   ; /* [15]  */
        UINT32    pcie1_radm_pm_to_ack_reg : 1   ; /* [16]  */
        UINT32    pcie1_radm_cpl_timeout_reg : 1   ; /* [17]  */
        UINT32    pcie1_radm_msg_unlock_reg : 1   ; /* [18]  */
        UINT32    pcie1_cfg_pme_msi_reg : 1   ; /* [19]  */
        UINT32    pcie1_bridge_flush_not_reg : 1   ; /* [20]  */
        UINT32    pcie1_link_req_rst_not_reg : 1   ; /* [21]  */
        UINT32    pcie1_cfg_aer_rc_err_msi : 1   ; /* [22]  */
        UINT32    pcie1_cfg_sys_err_rc  : 1   ; /* [23]  */
        UINT32    pcie1_radm_msg_req_id_high : 8   ; /* [31..24]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_sys_state1;

/* Define the union u_sc_pcie1_sys_state4 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_ltssm_state     : 6   ; /* [5..0]  */
        UINT32    pcie1_mac_phy_rate    : 2   ; /* [7..6]  */
        UINT32    pcie1_slv_err_int     : 1   ; /* [8]  */
        UINT32    pcie1_retry_sram_addr : 10  ; /* [18..9]  */
        UINT32    pcie1_mstr_rresp_int  : 1   ; /* [19]  */
        UINT32    pcie1_mstr_bresp_int  : 1   ; /* [20]  */
        UINT32    pcie1_radm_inta_reg   : 1   ; /* [21]  */
        UINT32    pcie1_radm_intb_reg   : 1   ; /* [22]  */
        UINT32    pcie1_radm_intc_reg   : 1   ; /* [23]  */
        UINT32    pcie1_radm_intd_reg   : 1   ; /* [24]  */
        UINT32    pcie1_cfg_pme_int_reg : 1   ; /* [25]  */
        UINT32    pcie1_radm_vendor_msg_reg : 1   ; /* [26]  */
        UINT32    pcie1_bridge_flush_not : 1   ; /* [27]  */
        UINT32    pcie1_link_req_rst_not : 1   ; /* [28]  */
        UINT32    reserved_0            : 3   ; /* [31..29]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_sys_state4;

/* Define the union u_sc_pcie1_axi_mstr_ooo_wr_sts1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_curr_wr_latency : 16  ; /* [15..0]  */
        UINT32    pcie1_curr_wr_port_sts : 1   ; /* [16]  */
        UINT32    reserved_0            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_axi_mstr_ooo_wr_sts1;

/* Define the union u_sc_pcie1_axi_mstr_ooo_rd_sts1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_curr_rd_latency : 16  ; /* [15..0]  */
        UINT32    pcie1_curr_rd_port_sts : 1   ; /* [16]  */
        UINT32    reserved_0            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_axi_mstr_ooo_rd_sts1;

/* Define the union u_sc_pcie1_dsize_brg_ecc_err */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_rob_ecc_err_detect : 1   ; /* [0]  */
        UINT32    pcie1_rob_ecc_err_multpl : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_dsize_brg_ecc_err;

/* Define the union u_sc_pcie1_pciephy_ctrl_error */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie1_pciephy_ctrl_error : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie1_pciephy_ctrl_error;

/* Define the union u_sc_pcie2_rxeqinpro_stat */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_mac_phy_rxeqinprogress : 8   ; /* [7..0]  */
        UINT32    reserved_0            : 24  ; /* [31..8]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_rxeqinpro_stat;

/* Define the union u_sc_pcie2_linkint_rcvry_stat */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_cfg_link_eq_req_int : 1   ; /* [0]  */
        UINT32    pcie2_xmlh_ltssm_state_rcvry_eq : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_linkint_rcvry_stat;

/* Define the union u_sc_pcie2_sys_state0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_gm_cmposer_lookup_err : 1   ; /* [0]  */
        UINT32    pcie2_radmx_cmposer_lookup_err : 1   ; /* [1]  */
        UINT32    pcie2_pm_xtlh_block_tlp : 1   ; /* [2]  */
        UINT32    pcie2_cfg_mem_space_en : 1   ; /* [3]  */
        UINT32    pcie2_cfg_rcb         : 1   ; /* [4]  */
        UINT32    pcie2_rdlh_link_up    : 1   ; /* [5]  */
        UINT32    pcie2_pm_curnt_state  : 3   ; /* [8..6]  */
        UINT32    pcie2_cfg_aer_rc_err_int : 1   ; /* [9]  */
        UINT32    pcie2_cfg_aer_int_msg_num : 5   ; /* [14..10]  */
        UINT32    pcie2_xmlh_link_up    : 1   ; /* [15]  */
        UINT32    pcie2_wake            : 1   ; /* [16]  */
        UINT32    pcie2_cfg_eml_control : 1   ; /* [17]  */
        UINT32    pcie2_hp_pme          : 1   ; /* [18]  */
        UINT32    pcie2_hp_int          : 1   ; /* [19]  */
        UINT32    pcie2_hp_msi          : 1   ; /* [20]  */
        UINT32    pcie2_pm_status       : 1   ; /* [21]  */
        UINT32    pcie2_ref_clk_req_n   : 1   ; /* [22]  */
        UINT32    pcie2_p2_exit_reg     : 1   ; /* [23]  */
        UINT32    pcie2_radm_msg_req_id_low : 8   ; /* [31..24]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_sys_state0;

/* Define the union u_sc_pcie2_sys_state1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_axi_parity_errs_reg : 4   ; /* [3..0]  */
        UINT32    pcie2_app_parity_errs_reg : 3   ; /* [6..4]  */
        UINT32    pcie2_pm_linkst_in_l1 : 1   ; /* [7]  */
        UINT32    pcie2_pm_linkst_in_l2 : 1   ; /* [8]  */
        UINT32    pcie2_pm_linkst_l2_exit : 1   ; /* [9]  */
        UINT32    pcie2_mac_phy_power_down : 2   ; /* [11..10]  */
        UINT32    pcie2_radm_correctabl_err_reg : 1   ; /* [12]  */
        UINT32    pcie2_radm_nonfatal_err_reg : 1   ; /* [13]  */
        UINT32    pcie2_radm_fatal_err_reg : 1   ; /* [14]  */
        UINT32    pcie2_radm_pm_to_pme_reg : 1   ; /* [15]  */
        UINT32    pcie2_radm_pm_to_ack_reg : 1   ; /* [16]  */
        UINT32    pcie2_radm_cpl_timeout_reg : 1   ; /* [17]  */
        UINT32    pcie2_radm_msg_unlock_reg : 1   ; /* [18]  */
        UINT32    pcie2_cfg_pme_msi_reg : 1   ; /* [19]  */
        UINT32    pcie2_bridge_flush_not_reg : 1   ; /* [20]  */
        UINT32    pcie2_link_req_rst_not_reg : 1   ; /* [21]  */
        UINT32    pcie2_cfg_aer_rc_err_msi : 1   ; /* [22]  */
        UINT32    pcie2_cfg_sys_err_rc  : 1   ; /* [23]  */
        UINT32    pcie2_radm_msg_req_id_high : 8   ; /* [31..24]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_sys_state1;

/* Define the union u_sc_pcie2_sys_state4 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_ltssm_state     : 6   ; /* [5..0]  */
        UINT32    pcie2_mac_phy_rate    : 2   ; /* [7..6]  */
        UINT32    pcie2_slv_err_int     : 1   ; /* [8]  */
        UINT32    pcie2_retry_sram_addr : 10  ; /* [18..9]  */
        UINT32    pcie2_mstr_rresp_int  : 1   ; /* [19]  */
        UINT32    pcie2_mstr_bresp_int  : 1   ; /* [20]  */
        UINT32    pcie2_radm_inta_reg   : 1   ; /* [21]  */
        UINT32    pcie2_radm_intb_reg   : 1   ; /* [22]  */
        UINT32    pcie2_radm_intc_reg   : 1   ; /* [23]  */
        UINT32    pcie2_radm_intd_reg   : 1   ; /* [24]  */
        UINT32    pcie2_cfg_pme_int_reg : 1   ; /* [25]  */
        UINT32    pcie2_radm_vendor_msg_reg : 1   ; /* [26]  */
        UINT32    pcie2_bridge_flush_not : 1   ; /* [27]  */
        UINT32    pcie2_link_req_rst_not : 1   ; /* [28]  */
        UINT32    reserved_0            : 3   ; /* [31..29]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_sys_state4;

/* Define the union u_sc_pcie2_axi_mstr_ooo_wr_sts1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_curr_wr_latency : 16  ; /* [15..0]  */
        UINT32    pcie2_curr_wr_port_sts : 1   ; /* [16]  */
        UINT32    reserved_0            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_axi_mstr_ooo_wr_sts1;

/* Define the union u_sc_pcie2_axi_mstr_ooo_rd_sts1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_curr_rd_latency : 16  ; /* [15..0]  */
        UINT32    pcie2_curr_rd_port_sts : 1   ; /* [16]  */
        UINT32    reserved_0            : 15  ; /* [31..17]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_axi_mstr_ooo_rd_sts1;

/* Define the union u_sc_pcie2_dsize_brg_ecc_err */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_rob_ecc_err_detect : 1   ; /* [0]  */
        UINT32    pcie2_rob_ecc_err_multpl : 1   ; /* [1]  */
        UINT32    reserved_0            : 30  ; /* [31..2]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_dsize_brg_ecc_err;

/* Define the union u_sc_pcie2_pciephy_ctrl_error */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie2_pciephy_ctrl_error : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie2_pciephy_ctrl_error;

/* Define the union u_sc_pcie3_sys_state0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie3_gm_cmposer_lookup_err : 1   ; /* [0]  */
        UINT32    pcie3_radmx_cmposer_lookup_err : 1   ; /* [1]  */
        UINT32    pcie3_pm_xtlh_block_tlp : 1   ; /* [2]  */
        UINT32    pcie3_cfg_mem_space_en : 1   ; /* [3]  */
        UINT32    pcie3_cfg_rcb         : 1   ; /* [4]  */
        UINT32    pcie3_rdlh_link_up    : 1   ; /* [5]  */
        UINT32    pcie3_pm_curnt_state  : 3   ; /* [8..6]  */
        UINT32    pcie3_cfg_aer_rc_err_int : 1   ; /* [9]  */
        UINT32    pcie3_cfg_aer_int_msg_num : 5   ; /* [14..10]  */
        UINT32    pcie3_xmlh_link_up    : 1   ; /* [15]  */
        UINT32    pcie3_wake            : 1   ; /* [16]  */
        UINT32    pcie3_cfg_eml_control : 1   ; /* [17]  */
        UINT32    pcie3_hp_pme          : 1   ; /* [18]  */
        UINT32    pcie3_hp_int          : 1   ; /* [19]  */
        UINT32    pcie3_hp_msi          : 1   ; /* [20]  */
        UINT32    pcie3_pm_status       : 1   ; /* [21]  */
        UINT32    pcie3_ref_clk_req_n   : 1   ; /* [22]  */
        UINT32    pcie3_p2_exit_reg     : 1   ; /* [23]  */
        UINT32    pcie3_radm_msg_req_id_low : 8   ; /* [31..24]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_sys_state0;

/* Define the union u_sc_pcie3_sys_state1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie3_axi_parity_errs_reg : 4   ; /* [3..0]  */
        UINT32    pcie3_app_parity_errs_reg : 3   ; /* [6..4]  */
        UINT32    pcie3_pm_linkst_in_l1 : 1   ; /* [7]  */
        UINT32    pcie3_pm_linkst_in_l2 : 1   ; /* [8]  */
        UINT32    pcie3_pm_linkst_l2_exit : 1   ; /* [9]  */
        UINT32    pcie3_mac_phy_power_down : 2   ; /* [11..10]  */
        UINT32    pcie3_radm_correctabl_err_reg : 1   ; /* [12]  */
        UINT32    pcie3_radm_nonfatal_err_reg : 1   ; /* [13]  */
        UINT32    pcie3_radm_fatal_err_reg : 1   ; /* [14]  */
        UINT32    pcie3_radm_pm_to_pme_reg : 1   ; /* [15]  */
        UINT32    pcie3_radm_pm_to_ack_reg : 1   ; /* [16]  */
        UINT32    pcie3_radm_cpl_timeout_reg : 1   ; /* [17]  */
        UINT32    pcie3_radm_msg_unlock_reg : 1   ; /* [18]  */
        UINT32    pcie3_cfg_pme_msi_reg : 1   ; /* [19]  */
        UINT32    pcie3_bridge_flush_not_reg : 1   ; /* [20]  */
        UINT32    pcie3_link_req_rst_not_reg : 1   ; /* [21]  */
        UINT32    pcie3_cfg_aer_rc_err_msi : 1   ; /* [22]  */
        UINT32    pcie3_cfg_sys_err_rc  : 1   ; /* [23]  */
        UINT32    pcie3_radm_msg_req_id_high : 8   ; /* [31..24]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_sys_state1;

/* Define the union u_sc_pcie3_sys_state4 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie3_ltssm_state     : 6   ; /* [5..0]  */
        UINT32    pcie3_mac_phy_rate    : 2   ; /* [7..6]  */
        UINT32    pcie3_slv_err_int     : 1   ; /* [8]  */
        UINT32    pcie3_retry_sram_addr : 10  ; /* [18..9]  */
        UINT32    pcie3_mstr_rresp_int  : 1   ; /* [19]  */
        UINT32    pcie3_mstr_bresp_int  : 1   ; /* [20]  */
        UINT32    pcie3_radm_inta_reg   : 1   ; /* [21]  */
        UINT32    pcie3_radm_intb_reg   : 1   ; /* [22]  */
        UINT32    pcie3_radm_intc_reg   : 1   ; /* [23]  */
        UINT32    pcie3_radm_intd_reg   : 1   ; /* [24]  */
        UINT32    pcie3_cfg_pme_int_reg : 1   ; /* [25]  */
        UINT32    pcie3_radm_vendor_msg_reg : 1   ; /* [26]  */
        UINT32    pcie3_bridge_flush_not : 1   ; /* [27]  */
        UINT32    pcie3_link_req_rst_not : 1   ; /* [28]  */
        UINT32    reserved_0            : 3   ; /* [31..29]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_sys_state4;

/* Define the union u_sc_pcie3_pciephy_ctrl_error */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    pcie3_pciephy_ctrl_error : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_pcie3_pciephy_ctrl_error;

/* Define the union u_sc_skew_st_a_0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_lock_a           : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_st_a_0;

/* Define the union u_sc_skew_st_a_1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_varible_out_a    : 16  ; /* [15..0]  */
        UINT32    reserved_0            : 16  ; /* [31..16]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_st_a_1;

/* Define the union u_sc_skew_st_a_3 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_dcell_out_a_h    : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_st_a_3;

/* Define the union u_sc_skew_st_b_0 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_lock_b           : 1   ; /* [0]  */
        UINT32    reserved_0            : 31  ; /* [31..1]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_st_b_0;

/* Define the union u_sc_skew_st_b_1 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_varible_out_b    : 16  ; /* [15..0]  */
        UINT32    reserved_0            : 16  ; /* [31..16]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_st_b_1;

/* Define the union u_sc_skew_st_b_3 */
typedef union
{
    /* Define the struct Bits */
    struct
    {
        UINT32    skew_dcell_out_b_h    : 4   ; /* [3..0]  */
        UINT32    reserved_0            : 28  ; /* [31..4]  */
    } Bits;

    /* Define an unsigned member */
    UINT32    UInt32;

} u_sc_skew_st_b_3;

#endif /* __C_UNION_DEFINE_H__ */
