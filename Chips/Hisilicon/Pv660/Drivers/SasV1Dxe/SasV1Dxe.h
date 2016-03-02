/** @file

  Copyright (c) 2008 - 2009, Apple Inc. All rights reserved.<BR>

  This program and the accompanying materials
  are licensed and made available under the terms and conditions of the BSD License
  which accompanies this distribution.  The full text of the license may be found at
  http://opensource.org/licenses/bsd-license.php

  THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
  WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.

**/

#ifndef FLASH_H
#define FLASH_H

#include <Uefi.h>

#include <Library/BaseLib.h>
#include <Library/BaseMemoryLib.h>
#include <Library/CacheMaintenanceLib.h>
#include <Library/DebugLib.h>
#include <Library/DevicePathLib.h>
#include <Library/IoLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/PcdLib.h>
#include <Library/TimerLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UncachedMemoryAllocationLib.h>

#include <Protocol/ScsiPassThruExt.h>
#include <IndustryStandard/Scsi.h>

#define SAS_BASE FixedPcdGet32 (PcdSasBaseAddress)
#define SAS_CTRL_BASE FixedPcdGet32 (PcdSasCtrlBaseAddress)

#define CTRL_READ_REG32(Offset) MmioRead32 (SAS_CTRL_BASE + Offset)
#define CTRL_WRITE_REG32(Offset, Val)  MmioWrite32 (SAS_CTRL_BASE + Offset, Val)

#define READ_REG32(Offset) MmioRead32 (SAS_BASE + Offset)
#define WRITE_REG32(Offset, Val)  MmioWrite32 (SAS_BASE + Offset, Val)

#define PHY_READ_REG32(Offset, phy) MmioRead32 (SAS_BASE + Offset + 0x400 * phy)
#define PHY_WRITE_REG32(Offset, phy, Val)  MmioWrite32 (SAS_BASE + Offset + 0x400 * phy, Val)

//only handle sas1
//register
#define DLVRY_QUEUE_ENABLE		0x0
#define IOST_BASE_ADDR_LO		0x8
#define IOST_BASE_ADDR_HI		0xc
#define ITCT_BASE_ADDR_LO		0x10
#define ITCT_BASE_ADDR_HI		0x14
#define BROKEN_MSG_ADDR_LO		0x18
#define BROKEN_MSG_ADDR_HI		0x1c
#define PHY_CONTEXT                     0x20
#define PHY_PORT_NUM_MA			0x28
#define HGC_TRANS_TASK_CNT_LIMIT	0x38
#define AXI_AHB_CLK_CFG			0x3c
#define HGC_SAS_TXFAIL_RETRY_CTRL	0x84
#define HGC_GET_ITV_TIME		0x90
#define DEVICE_MSG_WORK_MODE		0x94
#define I_T_NEXUS_LOSS_TIME		0xa0
#define BUS_INACTIVE_LIMIT_TIME		0xa8
#define REJECT_TO_OPEN_LIMIT_TIME	0xac
#define CFG_AGING_TIME			0xbc
#define HGC_DFX_CFG2			0xc0
#define FIS_LIST_BADDR_L		0xc4
#define CFG_1US_TIMER_TRSH		0xcc
#define CFG_SAS_CONFIG			0xd4
#define INT_COAL_EN			0x1bc
#define OQ_INT_COAL_TIME		0x1c0
#define OQ_INT_COAL_CNT			0x1c4
#define ENT_INT_COAL_TIME		0x1c8
#define ENT_INT_COAL_CNT		0x1cc
#define OQ_INT_SRC			0x1d0
#define OQ_INT_SRC_MSK			0x1d4
#define ENT_INT_SRC1			0x1d8
#define ENT_INT_SRC2			0x1dc
#define ENT_INT_SRC_MSK1		0x1e0
#define ENT_INT_SRC_MSK2		0x1e4
#define SAS_ECC_INTR_MSK		0x1ec
#define HGC_ERR_STAT_EN			0x238
#define DLVRY_Q_0_BASE_ADDR_LO		0x260
#define DLVRY_Q_0_BASE_ADDR_HI		0x264
#define DLVRY_Q_0_DEPTH			0x268
#define DLVRY_Q_0_WR_PTR		0x26c
#define DLVRY_Q_0_RD_PTR		0x270
#define COMPL_Q_0_BASE_ADDR_LO		0x4e0
#define COMPL_Q_0_BASE_ADDR_HI		0x4e4
#define COMPL_Q_0_DEPTH			0x4e8
#define COMPL_Q_0_WR_PTR		0x4ec
#define COMPL_Q_0_RD_PTR		0x4f0
#define AXI_CFG				0x5100

#define PORT_BASE			0x800
#define PHY_CFG				(PORT_BASE + 0x0)
#define PHY_CFG_ENA_OFF			0
#define PHY_CFG_ENA_MSK			(0x1 << PHY_CFG_ENA_OFF)
#define PHY_CFG_DC_OPT_OFF		2
#define PHY_CFG_DC_OPT_MSK		(0x1 << PHY_CFG_DC_OPT_OFF)
#define PROG_PHY_LINK_RATE		(PORT_BASE + 0xc)
#define PHY_CTRL			(PORT_BASE + 0x14)
#define PHY_CTRL_RESET			BIT0
#define PHY_RATE_NEGO			(PORT_BASE + 0x30)
#define PHY_PCN				(PORT_BASE + 0x44)
#define SL_TOUT_CFG			(PORT_BASE + 0x8c)
#define SL_CONTROL                      (PORT_BASE + 0x94)
#define SL_CONTROL_NOTIFY_EN		BIT0
#define TX_ID_DWORD0			(PORT_BASE + 0x9c)
#define TX_ID_DWORD1			(PORT_BASE + 0xa0)
#define TX_ID_DWORD2			(PORT_BASE + 0xa4)
#define TX_ID_DWORD3			(PORT_BASE + 0xa8)
#define TX_ID_DWORD4			(PORT_BASE + 0xaC)
#define TX_ID_DWORD5			(PORT_BASE + 0xb0)
#define TX_ID_DWORD6			(PORT_BASE + 0xb4)
#define RX_IDAF_DWORD3                  (PORT_BASE + 0xd0)
#define RX_IDAF_DWORD4                  (PORT_BASE + 0xd4)
#define RXOP_CHECK_CFG_H		(PORT_BASE + 0xfc)
#define DONE_RECEIVED_TIME		(PORT_BASE + 0x12c)
#define CON_CFG_DRIVER			(PORT_BASE + 0x130)
#define PHY_CONFIG2			(PORT_BASE + 0x1a8)
#define PHY_CONFIG2_FORCE_TXDEEMPH_OFF	3
#define PHY_CONFIG2_FORCE_TXDEEMPH_MSK	(0x1 << PHY_CONFIG2_FORCE_TXDEEMPH_OFF)
#define CHL_INT_COAL_EN			(PORT_BASE + 0x1d0)
#define CHL_INT0			(PORT_BASE + 0x1b0)
#define CHL_INT0_PHYCTRL_NOTRDY		BIT0
#define CHL_INT1			(PORT_BASE + 0x1b4)
#define CHL_INT2			(PORT_BASE + 0x1b8)
#define CHL_INT2_SL_PHY_ENA		BIT6
#define CHL_INT0_MSK			(PORT_BASE + 0x1bc)
#define CHL_INT0_MSK_PHYCTRL_NOTRDY	BIT0
#define CHL_INT1_MSK			(PORT_BASE + 0x1c0)
#define CHL_INT2_MSK			(PORT_BASE + 0x1c4)
#define DMA_TX_STATUS			(PORT_BASE + 0x2d0)
#define DMA_TX_STATUS_BUSY		BIT0
#define DMA_RX_STATUS			(PORT_BASE + 0x2e8)
#define DMA_RX_STATUS_BUSY		BIT0

//ctrl register, may change for different ip
#define CTRL_RESET		0xa18
#define CTRL_DRESET		0xa1c
#define CTRL_CLK_ENA		0x318
#define CTRL_CLK_DIS		0x31c
#define CTRL_STS		0x5a0c
#define RESET_VALUE		0x7ffff

#define QUEUE_CNT		32
#define QUEUE_SLOTS		256
#define SLOT_ENTRIES		8192
#define PHY_CNT			8
//#define MAX_ITCT_ENTRIES	4096	//fixme: do we really need so many itct?
#define MAX_ITCT_ENTRIES	1	//only consider 1

/* Completion header */
#define CMPLT_HDR_IPTT_OFF	0
#define CMPLT_HDR_IPTT_MSK	(0xffff << CMPLT_HDR_IPTT_OFF)

#define BIT(x)			(1 << x)

/* Generic HW DMA host memory structures */
/* Delivery queue header */
struct hisi_sas_cmd_hdr {
	/* dw0 */
	UINT32 dw0;

	/* dw1 */
	UINT32 dw1;

	/* dw2 */
	UINT32 dw2;

	/* dw3 */
	UINT32 transfer_tags;

	/* dw4 */
	UINT32 data_transfer_len;

	/* dw5 */
	UINT32 first_burst_num;

	/* dw6 */
	UINT32 sg_len;

	/* dw7 */
	UINT32 dw7;

	/* dw8-9 */
	UINT64 cmd_table_addr;

	/* dw10-11 */
	UINT64 sts_buffer_addr;

	/* dw12-13 */
	UINT64 prd_table_addr;

	/* dw14-15 */
	UINT64 dif_prd_table_addr;
};

struct hisi_sas_complete_hdr {
	UINT32 data;
};

struct hisi_sas_iost {
	UINT64 qw0;
	UINT64 qw1;
	UINT64 qw2;
	UINT64 qw3;
};

struct hisi_sas_itct {
	UINT64 qw0;
	UINT64 sas_addr;
	UINT64 qw2;
	UINT64 qw3;
	UINT64 qw4;
	UINT64 qw_sata_ncq0_3;
	UINT64 qw_sata_ncq7_4;
	UINT64 qw_sata_ncq11_8;
	UINT64 qw_sata_ncq15_12;
	UINT64 qw_sata_ncq19_16;
	UINT64 qw_sata_ncq23_20;
	UINT64 qw_sata_ncq27_24;
	UINT64 qw_sata_ncq31_28;
	UINT64 qw_non_ncq_iptt;
	UINT64 qw_rsvd0;
	UINT64 qw_rsvd1;
};

struct hisi_sas_breakpoint {
	UINT8	data[128];	/* 128 byte*/
};

struct hisi_sas_sge {
	UINT64 addr;
	UINT32 page_ctrl_0;
	UINT32 page_ctrl_1;
	UINT32 data_len;
	UINT32 data_off;
};

struct hisi_sas_sge_page {
	struct hisi_sas_sge sg[512];
};

struct hisi_sas_cmd {
	 UINT8 cmd[128];	//align to 16 bytes
};

struct hisi_sas_sts {
	 UINT32 status[260];
};

struct hisi_sas_slot {
	BOOLEAN used;
	struct hisi_sas_sts *sts;
};

enum phy_state {
	PHY_DOWN,
	PHY_UP,
};

struct hisi_hba {
  struct hisi_sas_cmd_hdr	*cmd_hdr[QUEUE_CNT];
  struct hisi_sas_complete_hdr	*complete_hdr[QUEUE_CNT];
  struct hisi_sas_sge_page	*sge[QUEUE_CNT];
  struct hisi_sas_sts	*status_buf[QUEUE_CNT];
  struct hisi_sas_cmd	*command_table[QUEUE_CNT];
  struct hisi_sas_iost *iost;
  struct hisi_sas_itct *itct;
  struct hisi_sas_breakpoint *breakpoint;
  struct hisi_sas_slot	*slots;
  enum phy_state state;
  int queue;
  int port_id;
  UINT32 LatestTargetId;
  UINT64 LatestLun;
};

typedef struct {
  UINT32                    Signature;
  EFI_EXT_SCSI_PASS_THRU_MODE     ExtScsiPassThruMode;
  EFI_EXT_SCSI_PASS_THRU_PROTOCOL   ExtScsiPassThru;
  struct hisi_hba *hba;
} SAS_V1_INFO;

#define SAS_DEVICE_SIGNATURE SIGNATURE_32 ('S','A','S','0')
#define SAS_FROM_PASS_THRU(a) CR (a, SAS_V1_INFO, ExtScsiPassThru, SAS_DEVICE_SIGNATURE)
#define upper_32_bits(n) ((UINT32)(((n) >> 16) >> 16))
#define lower_32_bits(n) ((UINT32)(n))

#define MAX_TARGET_ID 4

#endif //SASV1DXE_H
