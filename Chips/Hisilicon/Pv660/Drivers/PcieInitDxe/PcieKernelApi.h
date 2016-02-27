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

#ifndef __PCIE_KERNEL_API_H__
#define __PCIE_KERNEL_API_H__

// uniBIOS_y00216284_065_start DTS2015072900796 PCLint�澯���� 2015-7-29 >>>
#define PCIE_HOST_BRIDGE_NUM            (1)
#define PCIE_MAX_PORT_NUM               (4)
#define PCIE_MAX_OUTBOUND               (6)
#define PCIE_MAX_INBOUND               (4)
#define PCIE3_MAX_OUTBOUND               (16)
#define PCIE3_MAX_INBOUND                (16)

#define PCIE_LINK_LOOP_CNT          (0x1000)
#define PCIE_IATU_ADDR_MASK         (0xFFFFF000)
#define PCIE_1M_ALIGN_SHIRFT        (20)
#define PCIE_BDF_MASK               (0xF0000FFF)
#define PCIE_BUS_SHIRFT             (20)
#define PCIE_DEV_SHIRFT             (15)
#define PCIE_FUNC_SHIRFT            (12)

#define PCIE_DBI_CS2_ENABLE              (0x1)
#define PCIE_DBI_CS2_DISABLE             (0x0)

#define PCIE_DMA_CHANLE_READ             (0x1)
#define PCIE_DMA_CHANLE_WRITE             (0x0)


/*******************************PCIE ������Ϣ����*************************/
#define PCIE_ERR_IATU_TABLE_NULL            EFIERR (1)      //iatu��Ϊ��
#define PCIE_ERR_LINK_OVER_TIME             EFIERR (2)      //�ȴ�link up��ʱ
#define PCIE_ERR_UNIMPLEMENT_PCIE_TYPE      EFIERR (3)      //δʵ�ֻ�δ֧��pcie����
#define PCIE_ERR_ALREADY_INIT               EFIERR (4)      //�Ѿ���ʼ����
#define PCIE_ERR_PARAM_INVALID              EFIERR (5)      //��Ч����
#define PCIE_ERR_MEM_OPT_OVER               EFIERR (6)      //�����ĵ�ַ��Χ�������ڶ��巶Χ
#define PCIE_ERR_NOT_INIT                   EFIERR (7)      //pcieδ��ʼ��
#define PCIE_ERR_CFG_OPT_OVER               EFIERR (8)      //PCIE ���ò����������ڷ�Χ
#define PCIE_ERR_DMA_READ_CHANLE_BUSY       EFIERR (9)      //��ͨ����æ
#define PCIE_ERR_DMA_WRITE_CHANLE_BUSY      EFIERR (10)     //дͨ����æ
#define PCIE_ERR_DMAR_NO_RESORCE            EFIERR (11)     //��ͨ��û����Դ
#define PCIE_ERR_DMAW_NO_RESORCE            EFIERR (12)     //дͨ��û����Դ
#define PCIE_ERR_DMA_OVER_MAX_RESORCE       EFIERR (13)     //dma���������Դ����
#define PCIE_ERR_NO_IATU_WINDOW             EFIERR (14)     //δ�ҵ����ʵĴ���
#define PCIE_ERR_DMA_TRANSPORT_OVER_TIME    EFIERR (15)     //dma���䳬ʱ
#define PCIE_ERR_DMA_MEM_ALLOC_ERROR        EFIERR (16)     //�ڴ����ʧ��
#define PCIE_ERR_DMA_ABORT                  EFIERR (17)     //dma abort
#define PCIE_ERR_UNSUPPORT_BAR_TYPE         EFIERR (18)     //��֧�ֵ�bar����

//PCIE�ӿ����Ͷ���
typedef enum {
    PCIE_ROOT_COMPLEX,  // RCģʽ 
    PCIE_END_POINT,     // EPģʽ 
    PCIE_NTB_TO_NTB,    // NTBģʽ
    PCIE_NTB_TO_RP,
} PCIE_PORT_TYPE;

typedef enum {
    PCIE_GEN1_0 = 1,    //PCIE 1.0
    PCIE_GEN2_0 = 2,    //PCIE 2.0
    PCIE_GEN3_0 = 4     //PCIE 3.0
} PCIE_PORT_GEN;

typedef enum {
    PCIE_WITDH_X1 = 0x1,
    PCIE_WITDH_X2 = 0x3,
    PCIE_WITDH_X4 = 0x7,
    PCIE_WITDH_X8 = 0xf,
    PCIE_WITDH_INVALID
} PCIE_PORT_WIDTH;


// start-uniBIOS-y00216284-FFF Issuse ID 2014-7-8 >>>
// Desc: 
typedef struct {
    PCIE_PORT_TYPE      PortType;      //��¼PCIE�ӿ����ͣ�RC/EP/NTB
    PCIE_PORT_WIDTH     PortWidth;     //��¼PCIE�ӿڿ�ȣ�X1/X2/X4/X8
    PCIE_PORT_GEN       PortGen;       //��¼PCIE�ӿ�����,1.0/2.0/3.0
    UINT8               PcieLinkUp;    //��¼PCIE�ӿڵ�link״̬
} PCIE_PORT_INFO;

// end-uniBIOS-y00216284-FFF Issuse ID 2014-7-8 <<<

typedef struct tagPciecfg_params
{
    UINT32 preemphasis;       //Ԥ����
    UINT32 deemphasis;        //ȥ����
    UINT32 swing;     //�ڷ�
    UINT32 balance;       //����
}pcie_cfg_params_s;

typedef enum {
    PCIE_CORRECTABLE_ERROR = 0,
    PCIE_NON_FATAL_ERROR,
    PCIE_FATAL_ERROR,
    PCIE_UNSUPPORTED_REQUEST_ERROR,
    PCIE_ALL_ERROR
} PCIE_ERROR_TYPE;

typedef union tagPcieDeviceStatus
{
       struct
        {
            UINT16 correctable_error : 1;
            UINT16 non_fatal_error : 1;
            UINT16 fatal_error : 1;
            UINT16 unsupported_error : 1;
            UINT16 aux_power : 1;
            UINT16 transaction_pending : 1;
            UINT16 reserved_6_15 : 10;
       }Bits;

    UINT16 Value;
}pcie_device_status_u;


typedef union tagPcieUcAerStatus
{
      struct
        {
            UINT32    undefined   : 1   ; /* [0] undefined  */
            UINT32    reserved_1_3   : 3   ; /* reserved */
            UINT32    data_link_proto_error   : 1   ; /* Data Link Protocol Error Status */
            UINT32    reserved_5_11   : 7   ; /* reserved */
            UINT32    poisoned_tlp_status   : 1   ; /* Poisoned TLP Status */
            UINT32    flow_control_proto_error   : 1   ; /* Flow Control Protocol Error Status */
            UINT32    completion_time_out   : 1   ; /* Completion Timeout Status */
            UINT32    compler_abort_status   : 1   ; /* Completer Abort Status */
            UINT32    unexpect_completion_status   : 1   ; /* Unexpected Completion Status */
            UINT32    receiver_overflow_status   : 1   ; /*Receiver Overflow Status */
            UINT32    malformed_tlp_status   : 1   ; /* Malformed TLP Status*/
            UINT32    ecrc_error_status   : 1   ; /* ECRC Error Status */
            UINT32    unsupport_request_error_status   : 1   ; /* Unsupported Request Error Status */
            UINT32    reserved_21   : 1   ; /*  reserved */
            UINT32    uncorrectable_interal_error   : 1   ; /* Uncorrectable Internal Error Status */
            UINT32    reserved_23   : 1   ; /* reserved*/
            UINT32    atomicop_egress_blocked_status   : 1   ; /* AtomicOp Egress Blocked Status */
            UINT32    tlp_prefix_blocked_error_status   : 1   ; /* TLP Prefix Blocked Error Status */
            UINT32    reserved_26_31   : 1   ; /* reserved */
       }Bits;

       UINT32 Value;
}pcie_uc_aer_status_u;

typedef union tagPcieCoAerStatus
{
       struct
        {
            UINT32    receiver_error_status   : 1   ; /* Receiver Error Status  */
            UINT32    reserved_1_5   : 5   ; /* Reserved */
            UINT32    bad_tlp_status   : 1   ; /* Bad TLP Status */
            UINT32    bad_dllp_status   : 1   ; /* Bad DLLP Status */
            UINT32    reply_num_rollover_status   : 1   ; /* REPLAY_NUM Rollover Status*/
            UINT32    reserved_9_11   : 3   ; /* Reserved */
            UINT32    reply_timer_timeout   : 1   ; /* Replay Timer Timeout Status */
            UINT32    advisory_nonfatal_error   : 1   ; /* Advisory Non-Fatal Error Status*/
            UINT32    corrected_internal_error   : 1   ; /*Corrected Internal Error Status*/
            UINT32    reserved_15_31   : 1   ; /* Reserved */
       }Bits;
       UINT32 Value;
}pcie_co_aer_status_u;

typedef struct tagPcieAerStatus
{
    pcie_uc_aer_status_u uc_aer_status;
    pcie_co_aer_status_u co_aer_status;
}pcie_aer_status_s;



typedef struct tagPcieLoopTestResult
{
   UINT32 tx_pkts_cnt; //��������ͳ��
   UINT32 rx_pkts_cnt; //�հ�����ͳ��
   UINT32 error_pkts_cnt;  //�������
   UINT32 droped_pkts_cnt; //��������
   UINT32 push_cnt;  //��ѹ״̬����
   pcie_device_status_u device_status; //�豸״̬
   pcie_aer_status_s    pcie_aer_status; //AER����״̬
} pcie_loop_test_result_s;

typedef struct tagPcieDmaChannelAttrs {
    UINT32 dma_chan_en; /*ͨ��ʹ��/�ر�״̬*/
    UINT32 dma_mode; /* DMAͨ������ģʽ��֧�ֿ�ģʽ��LLģʽ*/
    UINT32 channel_status;   /* DMA���浱ǰ����״̬ */
}pcie_dma_channel_attrs_s;

typedef enum tagPcieDmaChannelStatus
{
    PCIE_DMA_CS_RESERVED = 0,    /* DMAͨ���ĵ�ǰ״̬ ; 0:����,1:running��2:Halted;3:Stopped*/
    PCIE_DMA_CS_RUNNING = 1,
    PCIE_DMA_CS_HALTED = 2,
    PCIE_DMA_CS_STOPPED = 3
}pcie_dma_channel_status_e;

typedef enum tagPcieDmaIntType{
    PCIE_DMA_INT_TYPE_DONE=0,
    PCIE_DMA_INT_TYPE_ABORT,
    PCIE_DMA_INT_ALL,
    PCIE_DMA_INT_NONE
}pcie_dma_int_type_e;

typedef enum tagPcieMulWinSize
{   
    WIN_SIZE_4K = 0xc,
    WIN_SIZE_8K,
    WIN_SIZE_16K,
    WIN_SIZE_32K,
    WIN_SIZE_64K,
    WIN_SIZE_128K,
    WIN_SIZE_256K,
    WIN_SIZE_512K,
    WIN_SIZE_1M,
    WIN_SIZE_2M,
    WIN_SIZE_4M,
    WIN_SIZE_8M,
    WIN_SIZE_16M,
    WIN_SIZE_32M,
    WIN_SIZE_64M,
    WIN_SIZE_128M,
    WIN_SIZE_256M,
    WIN_SIZE_512M,
    WIN_SIZE_1G,
    WIN_SIZE_2G,
    WIN_SIZE_4G,
    WIN_SIZE_8G,
    WIN_SIZE_16G,
    WIN_SIZE_32G,
    WIN_SIZE_64G,
    WIN_SIZE_128G,
    WIN_SIZE_256G,
    WIN_SIZE_512G = 0x27,
}pcie_mul_win_size_e;

typedef struct tagPcieMultiCastCfg
{
    UINT64 multicast_base_addr;
    pcie_mul_win_size_e base_addr_size;
    UINT64 base_translate_addr;
}pcie_multicast_cfg_s;

/*pcie ��ʼ��ģʽ*/
typedef enum tagPcieMode
{
    PCIE_EP_DEVICE = 0x0,
    LEGACY_PCIE_EP_DEVICE = 0x1,
    RP_OF_PCIE_RC = 0x4,
    PCIE_INVALID = 0x100
}pcie_mode_e;

// start-uniBIOS-y00216284-FFF Issuse ID 2014-7-8 >>>
// Desc: 
// NTB��ʼ�����ݽṹ
typedef struct{
    UINT32              PortIndex;
    PCIE_PORT_INFO      PortInfo;
    UINT64              iep_bar01; /*iep bar 01*/
    UINT64              iep_bar23;
    UINT64              iep_bar45;
    UINT64              iep_bar01_xlat; /*NTB_TO_NTB��������*/
    UINT64              iep_bar23_xlat; /*iep ��ַת���Ĵ���23*/
    UINT64              iep_bar45_xlat;
    UINT64              iep_bar_lmt23; /*bar limit*/
    UINT64              iep_bar_lmt45; /*bar limit*/
    UINT64              eep_bar01;
    UINT64              eep_bar23;
    UINT64              eep_bar45;
    UINT64              eep_bar23_xlat;
    UINT64              eep_bar45_xlat;
    UINT64              eep_bar_lmt23; /*bar limit*/
    UINT64              eep_bar_lmt45; /*bar limit*/
} PCIE_NTB_CFG;
// end-uniBIOS-y00216284-FFF Issuse ID 2014-7-8 <<<

/*****************************************************************************
 �� �� ��  : pcie_mode_get
 ��������  : ��ȡPCIEģʽ��Ϣ�������ӿ����͡�link״̬���豸link��ȡ�link��
             ��
 �������  : UINT32 Port
             pcie_port_info *port_info
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_mode_get(UINT32 Port, PCIE_PORT_INFO *port_info);

/*****************************************************************************
 �� �� ��  : pcie_port_ctrl
 ��������  : ���ƶ�PCIE�˿ڽ���ʹ�ܻ�ر�
 �������  :
            UINT32 Port : pcie�������˿ں�
            UINT32 port_ctrl :��0���رն˿ڣ�1���򿪶˿�

 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_ctrl(UINT32 Port, UINT32 port_ctrl);

/*****************************************************************************
 �� �� ��  : pcie_link_speed_set
 ��������  : ����PCIE��link����,GEN1.0,GEN2.0��GEN3.0
 �������  : UINT32 Port
             pcie_port_gen_e speed
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_link_speed_set(UINT32 Port, PCIE_PORT_GEN speed);

/*****************************************************************************
 �� �� ��  : pcie_port_cfg_set
 ��������  : ͨ��PCIE�˿����ã��豸PCIE�˿ڵ�Ԥ���ء�ȥ���ء��ڷ�������ȹ�
             ��
 �������  : UINT32 Port
             pcie_cfg_params *cfg_params
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_cfg_set(UINT32 Port, pcie_cfg_params_s *cfg_params);

/*****************************************************************************
 �� �� ��  : pcie_port_cfg_get
 ��������  : ��ȡĳ��PCIE�˿ڵ�Ԥ���ء�ȥ���ء��ڷ�������ȵ�����
 �������  : UINT32 Port
             pcie_cfg_params *cfg_params
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_cfg_get(UINT32 Port, pcie_cfg_params_s *cfg_params);


/*****************************************************************************
 �� �� ��  : pcie_dma_chan_ctl
 ��������  : PCIE DMAͨ��ʹ�ܿ��ƣ�ÿ��PCIE�ӿ�������DMAͨ��
 �������  :
            UINT32 Port : pcie�������˿�
            UINT32 channel : DMAͨ���ţ�0Ϊ��ͨ����1Ϊдͨ��������ֵ��Ч.
            UINT32 control : 1��ʹ��DMAͨ����0��ֹDMAͨ��

 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_dma_chan_ctl(UINT32 Port,UINT32 channel,UINT32 control);

/*****************************************************************************
 �� �� ��  : pcie_dma_chan_attribu_set
 ��������  : ����PCIE DMAͨ������
 �������  : UINT32 Port
             UINT32 channel
             pcie_dma_channel_attrs_s *dma_attribute
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_dma_chan_attribu_set(UINT32 Port,UINT32 channel, pcie_dma_channel_attrs_s *dma_attribute);

/*****************************************************************************
 �� �� ��  : pcie_dma_cur_status_get
 ��������  : ��ȡPCIE DMA����ͨ���ĵ�ǰ����״̬
 �������  : UINT32 Port
             UINT32 channel
             pcie_dma_channel_status_e *dma_channel_status
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_dma_cur_status_get(UINT32 Port, UINT32 channel, pcie_dma_channel_status_e *dma_channel_status);

/*****************************************************************************
 �� �� ��  : pcie_dma_int_enable
 ��������  : PCIE DMAͨ�����ж�ʹ�ܿ���
 �������  : UINT32 Port
             UINT32 channel
             pcie_dma_int_type_e int_type
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_dma_int_enable(UINT32 Port, UINT32 channel, pcie_dma_int_type_e int_type);

/*****************************************************************************
 �� �� ��  : pcie_dma_int_mask
 ��������  : PCIE DMAͨ�����ж����ο���
 �������  : UINT32 Port
             UINT32 channel
             pcie_dma_int_type_e int_type
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_dma_int_mask(UINT32 Port, UINT32 channel, pcie_dma_int_type_e int_type);

/*****************************************************************************
 �� �� ��  : pcie_dma_tranfer_stop
 ��������  : PCIE DMAͨ�������ݴ�����ֹ����ӿ�
 �������  : UINT32 Port
             UINT32 channel
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_dma_tranfer_stop(UINT32 Port, UINT32 channel);


/*****************************************************************************
 �� �� ��  : pcie_dma_int_status_get
 ��������  : PCIE DMA�ж�ԭ���ȡ
 �������  : UINT32 Port
             UINT32 channel
             pcie_dma_int_type_e *dma_int_status
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_dma_int_status_get(UINT32 Port, UINT32 channel, int *dma_int_status);

/*****************************************************************************
 �� �� ��  : pcie_dma_int_clear
 ��������  : ���ĳ��DMAͨ�����ж�ԭ��Ĵ���
 �������  : UINT32 Port
             UINT32 channel
             pcie_dma_int_type_e dma_int_type
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_dma_int_clear(UINT32 Port, UINT32 channel, pcie_dma_int_type_e dma_int_type);


/*****************************************************************************
 �� �� ��  : pcie_dma_read
 ��������  : PCIE DMA�����ݽӿ�
 �������  :
            UINT32 Port : pcie�������˿�
            Void *source : ���ݴ���Դ��ַ����Ϊ64λ��ַ��
            Void *dest : ���ݴ���Ŀ�ĵ�ַ����Ϊ64λ��ַ��
            UINT32 transferSize : �������ݵ��ܳ���
            UINT32 burstSize : һ�δ�������ݳ���

 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 PCIE DMA�����ݽӿڣ�֧�ֿ鴫�����ʽ���䣬transferSize��СΪ1B-4GB������burstSize
 ��С���Զ�������ʽ�������һ���ԵĿ鴫��
 �˽ӿ�Ϊ�첽�ӿ�
 source��ַָ��ָ������ݵ�Դ��ַ�����ڷ�NTB�˿ڣ��˵�ַӦ������ĳ��EP��Memroy BAR��ַ�ռ������NTB
 ģʽ���˵�ַӦ������PBAR23��PBAR45����ĵ�ַ�ռ���
 dest��ַָ��ָ������ݵ�Ŀ�ĵ�ַ���˵�ַӦΪ���ص��ڴ��ַ�ռ�

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_dma_read(UINT32 Port,void *source, void *dest,UINT32 transfer_size, UINT32 burst_size);
/*****************************************************************************
 �� �� ��  : pcie_dma_write
 ��������  : PCIE DMAд���ݽӿ�
 �������  :
            UINT32 Port : pcie�������˿�
            Void *source : ���ݴ���Դ��ַ����Ϊ64λ��ַ��
            Void *dest : ���ݴ���Ŀ�ĵ�ַ����Ϊ64λ��ַ��
            UINT32 transferSize : �������ݵ��ܳ���
            UINT32 burstSize : һ�δ�������ݳ���

 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 PCIE DMAд���ݽӿڣ�֧�ֿ鴫�����ʽ���䣬transferSize��СΪ1B-4GB������burstSize
 ��С���Զ�������ʽ�������һ���ԵĿ鴫��
 �˽ӿ�Ϊ�첽�ӿ�
 source��ַָ��ָ��д���ݵ�Դ��ַ���˵�ַӦΪ���ص��ڴ��ַ�ռ�
 dest��ַָ��ָ��д���ݵ�Ŀ�ĵ�ַ�����ڷ�NTB�˿ڣ��˵�ַӦ������ĳ��EP��Memory BAR��ַ�ռ������NTB
 �˿ڣ��˵�ַӦ������PBAR23��PBAR45����ĵ�ַ�ռ��
 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_dma_write(UINT32 Port,void *source, void *dest,UINT32 transfer_size, UINT32 burst_size);

/*****************************************************************************
 �� �� ��  : pcie_multicast_cfg_set
 ��������  : PCIE Multicast��ʼ������
 �������  : UINT32 Port: pcie�������˿ں�
             pcie_multicast_cfg_s *multicast_cfg: multicast���ô���ָ�룬ָ����Ҫ���õ�multicast���ڣ����16��
             UINT32 winnum : ���ڸ���
 �������  : ��
 �� �� ֵ  : int
 pcie_multicast_cfg_s������multicast�ĵ�ַ���ڣ���ʼ��ַ�ͳ��ȣ���ÿ�鴰�ڶ�Ӧ��ӳ���ַ�������ڽ���multi-castʱ
 �Ƿ�Ҫ���е�ַӳ�䡢multicast�����Ƿ���Ҫbypass�ȣ�����Ҫ����һ�����ڣ��������16������
 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_multicast_cfg_set(UINT32 Port,pcie_multicast_cfg_s *multicast_cfg,UINT32 win_num);

/*****************************************************************************
 �� �� ��  : pcie_setup_ntb
 ��������  : ��ĳ���˿ڽ���NTB�ĳ�ʼ����
 �������  : UINT32 Port: pcie�������˿ں�
             pcie_ntg_cfg *ntb_cfg: NTB���ýṹ��
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_setup_ntb(UINT32 Port, PCIE_NTB_CFG *ntb_cfg);

/*****************************************************************************
 �� �� ��  : pcie_ntb_doorbell_send
 ��������  : ʵ��NTB����ϵͳ֮���Doorbell�жϷ��͹���
 �������  :
 �������    UINT32 Port : pcie�������˿ں�
             UINT32 doorbell : doorbell�жϺţ�֧�ַ�ΧΪ0-31

 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_ntb_doorbell_send(UINT32 Port,UINT32 doorbell);

/*****************************************************************************
 �� �� ��  : pcie_loop_test_start
 ��������  : ����PCIE�˿ڵĻ��ز��Թ���
 �������  :
                UINT32 Port : pcie�������˿ں�
                UINT32 loop_type : 0:���˻��أ�1��Զ�˻���

 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_loop_test_start(UINT32 Port, UINT32 loop_type);

/*****************************************************************************
 �� �� ��  : pcie_loop_test_stop
 ��������  : �ر�PCIE�˿ڵĻ��ز��Թ���
 �������  : UINT32 Port : pcie�������˿ں�
             UINT32 loop_type : 0:���˻��أ�1��Զ�˻���
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_loop_test_stop(UINT32 Port, UINT32 loop_type);

/*****************************************************************************
 �� �� ��  : pcie_loop_test_get
 ��������  : ��ȡPCIE���ز��Խ��
 �������  : UINT32 Port : pcie�������˿ں�
             UINT32 loop_type : 0:���˻��أ�1��Զ�˻���             
 �������  : pcie_loop_test_result_s *test_result : ��¼PCIE���ز��Խ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_loop_test_get(UINT32 Port, UINT32 loop_type, pcie_loop_test_result_s *test_result);
/*****************************************************************************
 �� �� ��  : pcie_port_reset
 ��������  : PCIE�˿ڸ�λ����λ��PCIE�˿��µ������豸�������˿ڱ���
 �������  : UINT32 Port : pcie�������˿ں�
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :
 
 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_reset(UINT32 Port);

/*****************************************************************************
 �� �� ��  : pcie_port_error_report_enable
 ��������  : ʹ��PCIE�˿ڵĴ����ϱ�����
 �������  : UINT32 Port : pcie�������˿ں�
             UINT32 bus �� ���ߺ�
             UINT32 dev �� �豸��
             UINT32 func �� ���ܺ�
             pcie_error_type_e pcie_error : PCIE�������ͣ�ö���Ͳ���
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_error_report_enable(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func, PCIE_ERROR_TYPE pcie_error);

/*****************************************************************************
 �� �� ��  : pcie_port_error_report_disable
 ��������  : ��ֹPCIE�˿ڵĴ����ϱ�����
 �������  : UINT32 Port : pcie�������˿ں�
             UINT32 bus �� ���ߺ�
             UINT32 dev �� �豸��
             UINT32 func �� ���ܺ�
             pcie_error_type_e pcie_error : PCIE�������ͣ�ö���Ͳ���
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_error_report_disable(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func, PCIE_ERROR_TYPE pcie_error);

/*****************************************************************************
 �� �� ��  : pcie_device_error_status_get
 ��������  : ��ȡPCIE�豸�Ĵ���״̬����AER����
 �������  : UINT32 Port : pcie�������˿ں�
             UINT32 bus �� ���ߺ�
             UINT32 dev �� �豸��
             UINT32 func �� ���ܺ�
             UINT32 clear : �����Ƿ���0��Ϊ1��ʾ���󽫴���״̬���㣬��������
 �������  : pcie_device_status_u *pcie_stat : PCIE����״̬�ṹ�壬��¼PCIE�Ĵ���״̬��Ϣ
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_device_error_status_get(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func,UINT32 clear, \
pcie_device_status_u *pcie_stat);
/*****************************************************************************
 �� �� ��  : pcie_port_aer_cap_get
 ��������  : ��ȡĳ��PCIE�˿��豸�Ƿ�֧��AER����
 �������  : UINT32 Port : pcie�������˿ں�
             UINT32 bus �� ���ߺ�
             UINT32 dev �� �豸��
             UINT32 func �� ���ܺ�
 �������  : UINT32 *aer_cap : �Ƿ�֧��AER���ܣ�0��֧�֣�1֧��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_aer_cap_get(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func,UINT32 *aer_cap);

/*****************************************************************************
 �� �� ��  : pcie_port_aer_status_get
 ��������  : ��ȡĳ��PCIE�˿��豸����AER������Ϣ
 �������  : UINT32 Port : pcie�������˿ں�
             UINT32 bus �� ���ߺ� 
             UINT32 dev �� �豸��
             UINT32 func �� ���ܺ�
 �������  : pcie_uc_aer_status_u *pcie_aer_status : PCIE�˿�AER����״̬�ṹ�壬��¼���е�AER����״̬��Ϣ
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_aer_status_get(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func,pcie_uc_aer_status_u *pcie_aer_status);
/*****************************************************************************
 �� �� ��  : pcie_port_aer_status_clr
 ��������  : ���ĳ��PCIE�˿��豸���е�AER����״̬
 �������  : UINT32 Port : pcie�������˿ں�
             UINT32 bus �� ���ߺ�
             UINT32 dev �� �豸��
             UINT32 func �� ���ܺ�
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_aer_status_clr(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func);

/*****************************************************************************
 �� �� ��  : pcie_port_aer_report_enable
 ��������  : ʹ��PCIE�˿ڵ�AER�����ж��ϱ�
 �������  : UINT32 Port : pcie�������˿ں�
             pcie_error_type_e pcie_aer_type ��AER��������
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_aer_report_enable(UINT32 Port, PCIE_ERROR_TYPE pcie_aer_type);


/*****************************************************************************
 �� �� ��  : pcie_port_aer_report_disable
 ��������  : �ر�PCIE�˿ڵ�AER�����ж��ϱ�
 �������  : UINT32 Port : pcie�������˿ں�
             pcie_error_type_e pcie_aer_type��AER��������
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_port_aer_report_disable(UINT32 Port, PCIE_ERROR_TYPE pcie_aer_type);


/*****************************************************************************
 �� �� ��  : pcie_cfg_read
 ��������  : ���ö�
 �������  : UINT32 Port : pcie�������˿ں�
             UINT32 bus �� ���ߺ�
             UINT32 dev �� �豸��
             UINT32 func �� ���ܺ�
             UINT32 regOff : �Ĵ���ƫ��
             UINT32 value[] : ���ݶ��������ַ
             UINT32 length : �����ݳ���
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_cfg_read(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func, UINT32 reg_offset, UINT32 * value, UINT32 length);

/*****************************************************************************
 �� �� ��  : pcie_cfg_write
 ��������  : ���ö�
 �������  : UINT32 Port : pcie�������˿ں�
             UINT32 bus �� ���ߺ�
             UINT32 dev �� �豸��
             UINT32 func �� ���ܺ�
             UINT32 regOff : �Ĵ���ƫ��
             UINT8 *data  : ��д������ݵ�ַ
             UINT32 length : ���ݳ���
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_cfg_write(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func, UINT32 reg_offset, UINT8 * data, UINT32 length);

/*****************************************************************************
 �� �� ��  : pcie_mem_read
 ��������  : memory��
 �������  : UINT32 Port : pcie�������˿ں�
             void *local_addr : ����memory�ռ��ַ
             void *pcie_mem_addr : PCIE�豸memory�ռ��ַ
             UINT32 length : ���ݳ���
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :
 �˽ӿڽ�������PCIE�ӿڣ���������Ҫ��֤����PCIE Memory�ռ��ַ�Ϸ����˽ӿڻ���ݸ���
 ��PCIE Memory�ռ��ַ������IATU������˶οռ���ͨ��IATUӳ�䣬���������ͨ��IATUӳ��
 �����ʵ��˶�PCIE Memory�ռ�

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_mem_read(UINT32 Port,void * local_addr, void *pcie_mem_addr,UINT32 length);

/*****************************************************************************
 �� �� ��  : pcie_mem_write
 ��������  : memoryд
 �������  : UINT32 Port : pcie�������˿ں�
             void *local_addr : ����memory�ռ��ַ
             void *pcie_mem_addr : PCIE�豸memory�ռ��ַ
             UINT32 length : ���ݳ���
 �������  : ��
 �� �� ֵ  : int
 ���ú���  :
 ��������  :
 �˽ӿڽ�������PCIE�ӿڣ���������Ҫ��֤����PCIE Memory�ռ��ַ�Ϸ����˽ӿڻ���ݸ���
 ��PCIE Memory�ռ��ַ������IATU������˶οռ���ͨ��IATUӳ�䣬���������ͨ��IATUӳ��
 �����ʵ��˶�PCIE Memory�ռ�

 �޸���ʷ      :
  1.��    ��   : 2014��7��19��
    ��    ��   : y00216284
    �޸�����   : �����ɺ���

*****************************************************************************/
extern int pcie_mem_write(UINT32 Port,void *local_addr , void *pcie_mem_addr,UINT32 length);

#endif
