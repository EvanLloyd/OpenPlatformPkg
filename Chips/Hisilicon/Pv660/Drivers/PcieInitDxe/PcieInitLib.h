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

#ifndef __PCIE_INIT_LIB_H__
#define __PCIE_INIT_LIB_H__

/*----------------------------------------------*
 * 外部变量说明                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 外部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 内部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 全局变量                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 模块级变量                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 常量定义                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/
#include <Uefi.h>
#include "PcieKernelApi.h"
#include "PcieRegOffset.h"

//#define PCIE_ESL
//pcie 空间基本分配

#define PCIE_AXI_SLAVE_BASE             (0xb3000000)
#define PCIE_MAX_AXI_SIZE               (0x1000000)
#define PCIE_AXI_BASE(port)             (PCIE_AXI_SLAVE_BASE + port * PCIE_MAX_AXI_SIZE)
#define PCIE_SMMU_BASE                  (0xb0040000)


/*DMA相关宏*/
#define PCIE_DMA_CHANNEL_NUM            (2)
#define PCIE_DMA_RESOURCE_MODE_SIZE     (0x40000)
#define PCIE_DMA_BURST_SIZE             (0x80000000) //超过2G 将采用链式发送

#define PCIE_ADDR_BASE_OFFSET                       0x46C00000
#define PCIE_ADDR_BASE_HOST_ADDR                    (PCIE_ADDR_BASE_OFFSET + NP_DDR_BASE_ADDR_HOST)
/*DDR内存到HOSTCPU地址映射的基准地址*/
#define NP_DDR_BASE_ADDR_HOST                       0x236E00000ULL



/*中断相关宏*/
#define PCIE_GIC_MSI_ITS_BASE       (0xb7010040)
#define PCIE_INT_BASE               (13824)
#define PCIE_INT_LIMIT              (PCIE_INT_BASE + 64)

/*NTB相关宏*/
#define PCIE_NTB_MEM_SIZE             (0x1000000)
#define PCIE_NTB_BAR01_SIZE           (0x10000) // 64K
#define PCIE_NTB_BAR23_SIZE           (0x800000) // 8M
#define PCIE_NTB_BAR45_SIZE           (0x800000)

/*IATU相关宏*/
#define PCIE_IATU_END               {PCIE_IATU_OUTBOUND,0,0,0}
#define PCIE_IATU_INBOUND_MASK      (0x80000000)
#define PCIE_IATU_INDEX_MASK         (0x7f)
#define PCIE_IATU_TYPE_MASK         (0x1f)
#define PCIE_IATU_EN                     (0x1 << 0)
#define PCIE_IATU_SHIFT_MODE             (0x1 << 1)
#define PCIE_IATU_BAR_MODE               (0x1 << 2)  //bar模式  默认为地址模式,取消bar模式即可
#define PCIE_IATU_FUNC_MODE               (0x1 << 3) //function num 模式
#define PCIE_IATU_AT_MODE                 (0x1 << 4) //AT mach mode
#define PCIE_IATU_ATTR_MODE               (0x1 << 5) //attr 匹配模式
#define PCIE_IATU_TD_MODE                 (0x1 << 6) //TD
#define PCIE_IATU_TC_MODE                 (0x1 << 7) // TC
#define PCIE_IATU_PREFETCH_MODE             (0x1 << 8) //prefetch 模式
#define PCIE_IATU_DMA_BY_PASS_MODE          (0x1 << 9) //DMA bypass untranslate

/*bar配置相关宏*/
#define PCIE_BAR_MASK_SIZE          (0x800000)
#define PCIE_BAR_TYPE_32            (0)
#define PCIE_BAR_TYPE_64            (2)
#define PCIE_BAR_PREFETCH_MODE      (1)

#define RegWrite(addr,data)            (*(volatile UINT32*)(UINTN)(addr) = (data))                                       
#define RegRead(addr,data)             ((data) = *(volatile UINT32*)(UINTN)(addr))


typedef struct tagPcieDebugInfo
{
    UINT32 pcie_rdma_start_cnt; /*启动次数 包括成功或者失败*/
    UINT32 pcie_wdma_start_cnt; 
    UINT64 pcie_wdma_transfer_len; /*传输长度 包括成功或者失败*/
    UINT64 pcie_rdma_transfer_len;
    UINT32 pcie_rdma_fail_cnt;
    UINT32 pcie_wdma_fail_cnt;
}pcie_debug_info_s;


#define bdf_2_b(bdf)    ((bdf >> 8) & 0xFF)
#define bdf_2_d(bdf)    ((bdf >> 3) & 0x1F)
#define bdf_2_f(bdf)    ((bdf >> 0) & 0x7)
#define b_d_f_2_bdf(b,d,f)    (((b & 0xff) << 8 ) | ((d & 0x1f) << 3) | ((f & 0x7) << 0))



/*pcie dma回调函数定义*/
typedef UINT32 (*pcie_dma_func_int)(UINT32  ulErrno, UINT32 ulReserved);


// IATU窗口设置
typedef struct {
     UINT32             ViewPort;            //iATU Viewport Register
     UINT32             RegionCtrl1;         //Region Control 1 Register
     UINT32             RegionCtrl2;         //Region Control 2 Register
     UINT32             BaseLow;             //Lower Base Address Register
     UINT32             BaseHigh;            //Upper Base Address Register
     UINT32             Limit;               //Limit Address Register
     UINT32             TargetLow;           //Lower Target Address Register
     UINT32             TargetHigh;          //Upper Target Address Register
} PCIE_IATU_VA;

typedef enum {
    PCIE_IATU_OUTBOUND    = 0x0,
    PCIE_IATU_INBOUND     = 0x1,
} PCIE_IATU_DIR;

// IATU窗口设置
typedef struct {
    PCIE_IATU_DIR       IatuType;
    UINT64              IatuBase;
    UINT64              IatuSize;
    UINT64              IatuTarget;
} PCIE_IATU;

typedef struct {
    UINT32              IatuType;
    UINT64              IatuBase;
    UINT32              IatuLimit;
    UINT64              IatuTarget;
    UINT32              Valid;       //该窗口有效
} PCIE_IATU_HW;   //与硬件对应相等的表

// driver 配置
typedef struct {
    UINT32              PortIndex;
    PCIE_PORT_INFO      PortInfo;
    //0 号iatu默认作为cfg窗口使用
    PCIE_IATU_HW        OutBound[PCIE_MAX_OUTBOUND];  //为了效率考虑，这里软件做了一份跟硬件对等的iatu表
    PCIE_IATU_HW        InBound[PCIE_MAX_INBOUND];
} PCIE_DRIVER_CFG;

//pcie 读写模式设置
typedef enum {
    PCIE_CONFIG_REG     = 0x0,
    PCIE_SYS_CONTROL    = 0x1,
    PCIE_SLV_CONTENT_MODE = 0x2,
} PCIE_RW_MODE;

typedef union {
    PCIE_DRIVER_CFG     PcieDevice;
    PCIE_NTB_CFG        NtbDevice;
} DRIVER_CFG_U;

typedef struct {
    VOID                *MappedOutbound[PCIE_MAX_OUTBOUND];
    UINT32              OutboundType[PCIE_MAX_OUTBOUND];
    UINT32              OutboundEn[PCIE_MAX_OUTBOUND];
} PCIE_MAPPED_IATU_ADDR;

typedef struct {
    BOOLEAN             PortIsInitilized[PCIE_MAX_PORT_NUM]; //DTS2015073101571 PCIe代码检视意见修改
    DRIVER_CFG_U        Dev[PCIE_MAX_PORT_NUM];
    VOID                *DmaResource[PCIE_MAX_PORT_NUM]; //pcie dma链表资源 4个控制器
    UINT32              DmaChannel[PCIE_MAX_PORT_NUM][2]; //pcie_dma 通道资源
    VOID                *RegResource[PCIE_MAX_PORT_NUM];
    VOID                *CfgResource[PCIE_MAX_PORT_NUM]; //配置访问资源，NTB模式下为mmio资源
} PCIE_INIT_CFG;

typedef enum {
    PCIE_MMIO_IEP_CFG  = 0x1000, //0x1000
    PCIE_MMIO_IEP_CTRL = 0x0,    //0
    PCIE_MMIO_EEP_CFG  = 0x9000,
    PCIE_MMIO_EEP_CTRL = 0x8000,
} NTB_MMIO_MODE;

typedef struct tagPcieDmaDes
{
    UINT32 uwChanCtrl;
    UINT32 uwLen;
    UINT32 uwLocalLow;
    UINT32 uwLocalHigh;
    UINT32 uwTagetLow;
    UINT32 uwTagetHigh;
}pcie_dma_des_s,*pcie_dma_des_ps;

typedef enum {
    PCIE_IATU_MEM,
    PCIE_IATU_CFG = 0x4,
    PCIE_IATU_IO
} PCIE_IATU_OUT_TYPE;

typedef enum {
    /*
    000：128Byte；
    001：256Byte；
    010：512Byte；
    011：1024Byte；
    100：2048Byte；
    101：4096Byte；
    */
    PCIE_PAYLOAD_128B = 0,
    PCIE_PAYLOAD_256B,
    PCIE_PAYLOAD_512B,
    PCIE_PAYLOAD_1024B,
    PCIE_PAYLOAD_2048B,
    PCIE_PAYLOAD_4096B,
    PCIE_RESERVED_PAYLOAD
} PCIE_PAYLOAD_SIZE;

typedef struct tagPcieDfxInfo
{
    PCIE_EP_AER_CAP0_U aer_cap0;
    PCIE_EP_AER_CAP1_U aer_cap1;
    PCIE_EP_AER_CAP2_U aer_cap2;
    PCIE_EP_AER_CAP3_U aer_cap3;
    PCIE_EP_AER_CAP4_U aer_cap4;
    PCIE_EP_AER_CAP5_U aer_cap5;
    PCIE_EP_AER_CAP6_U aer_cap6;
    UINT32 hdr_log0;
    UINT32 hdr_log1;
    UINT32 hdr_log2;
    UINT32 hdr_log3;
    PCIE_EP_AER_CAP11_U aer_cap11;
    PCIE_EP_AER_CAP12_U aer_cap12;
    PCIE_EP_AER_CAP13_U aer_cap13;

    PCIE_EP_PORTLOGIC62_U port_logic62;
    PCIE_EP_PORTLOGIC64_U port_logic64;
    PCIE_EP_PORTLOGIC66_U port_logic66;
    PCIE_EP_PORTLOGIC67_U port_logic67;
    PCIE_EP_PORTLOGIC69_U port_logic69;
    PCIE_EP_PORTLOGIC75_U port_logic75;
    PCIE_EP_PORTLOGIC76_U port_logic76;
    PCIE_EP_PORTLOGIC77_U port_logic77;
    PCIE_EP_PORTLOGIC79_U port_logic79;
    PCIE_EP_PORTLOGIC80_U port_logic80;
    PCIE_EP_PORTLOGIC81_U port_logic81;
    PCIE_EP_PORTLOGIC87_U port_logic87;

    PCIE_CTRL_10_U  pcie_ctrl10;
    UINT32 slve_rerr_addr_low;
    UINT32 slve_rerr_addr_up;
    UINT32 slve_werr_addr_low;
    UINT32 slve_werr_addr_up;
    UINT32 pcie_state4;
    UINT32 pcie_state5;
}PCIE_DFX_INFO_S;

/*****************************************************************************
 函 数 名  : PcieChageRwMode
 功能描述  : 读写模式改变
 输入参数  : UINT32 Port
             PCIE_RW_MODE Mode
 输出参数  : 无
 返 回 值  : static int
*****************************************************************************/
VOID PcieChangeRwMode(UINT32 HostBridgeNum, UINT32 Port, PCIE_RW_MODE Mode);

/*****************************************************************************
 函 数 名  : PcieIsLinkDown
 功能描述  : 判断是否link down
 输入参数  : UINT32 Port
 输出参数  : 无
 返 回 值  : UINT32 : 1 : linkdown 0 : linkup
*****************************************************************************/
UINT32 PcieIsLinkDown(UINT32 Port);

/*****************************************************************************
 函 数 名  : PcieIsLinkUp
 功能描述  : 判断是否link Up
 输入参数  : UINT32 Port
 输出参数  : 无
 返 回 值  : UINT32 : 0 : linkdown 1 : linkup
*****************************************************************************/
BOOLEAN PcieIsLinkUp(UINT32 HostBridgeNum, UINT32 Port);

/*****************************************************************************
 函 数 名  : PcieWaitLinkUp
 功能描述  : 等待link up
 输出参数  : 无
 返 回 值  : int
*****************************************************************************/
EFI_STATUS PcieWaitLinkUp(UINT32 Port);

EFI_STATUS PcieSetDBICS2Enable(UINT32 HostBridgeNum, UINT32 Port, UINT32 Enable);
  
#endif
