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

// uniBIOS_y00216284_065_start DTS2015072900796 PCLint告警消除 2015-7-29 >>>
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


/*******************************PCIE 错误信息定义*************************/
#define PCIE_ERR_IATU_TABLE_NULL            EFIERR (1)      //iatu表为空
#define PCIE_ERR_LINK_OVER_TIME             EFIERR (2)      //等待link up超时
#define PCIE_ERR_UNIMPLEMENT_PCIE_TYPE      EFIERR (3)      //未实现或未支持pcie类型
#define PCIE_ERR_ALREADY_INIT               EFIERR (4)      //已经初始化了
#define PCIE_ERR_PARAM_INVALID              EFIERR (5)      //无效参数
#define PCIE_ERR_MEM_OPT_OVER               EFIERR (6)      //操作的地址范围超过窗口定义范围
#define PCIE_ERR_NOT_INIT                   EFIERR (7)      //pcie未初始化
#define PCIE_ERR_CFG_OPT_OVER               EFIERR (8)      //PCIE 配置操作超过窗口范围
#define PCIE_ERR_DMA_READ_CHANLE_BUSY       EFIERR (9)      //读通道正忙
#define PCIE_ERR_DMA_WRITE_CHANLE_BUSY      EFIERR (10)     //写通道正忙
#define PCIE_ERR_DMAR_NO_RESORCE            EFIERR (11)     //读通道没有资源
#define PCIE_ERR_DMAW_NO_RESORCE            EFIERR (12)     //写通道没有资源
#define PCIE_ERR_DMA_OVER_MAX_RESORCE       EFIERR (13)     //dma超过最大资源限制
#define PCIE_ERR_NO_IATU_WINDOW             EFIERR (14)     //未找到合适的窗口
#define PCIE_ERR_DMA_TRANSPORT_OVER_TIME    EFIERR (15)     //dma传输超时
#define PCIE_ERR_DMA_MEM_ALLOC_ERROR        EFIERR (16)     //内存分配失败
#define PCIE_ERR_DMA_ABORT                  EFIERR (17)     //dma abort
#define PCIE_ERR_UNSUPPORT_BAR_TYPE         EFIERR (18)     //不支持的bar类型

//PCIE接口类型定义
typedef enum {
    PCIE_ROOT_COMPLEX,  // RC模式 
    PCIE_END_POINT,     // EP模式 
    PCIE_NTB_TO_NTB,    // NTB模式
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
    PCIE_PORT_TYPE      PortType;      //记录PCIE接口类型，RC/EP/NTB
    PCIE_PORT_WIDTH     PortWidth;     //记录PCIE接口宽度，X1/X2/X4/X8
    PCIE_PORT_GEN       PortGen;       //记录PCIE接口速率,1.0/2.0/3.0
    UINT8               PcieLinkUp;    //记录PCIE接口的link状态
} PCIE_PORT_INFO;

// end-uniBIOS-y00216284-FFF Issuse ID 2014-7-8 <<<

typedef struct tagPciecfg_params
{
    UINT32 preemphasis;       //预加重
    UINT32 deemphasis;        //去加重
    UINT32 swing;     //摆幅
    UINT32 balance;       //均衡
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
   UINT32 tx_pkts_cnt; //发包个数统计
   UINT32 rx_pkts_cnt; //收包个数统计
   UINT32 error_pkts_cnt;  //错包计数
   UINT32 droped_pkts_cnt; //丢包计数
   UINT32 push_cnt;  //反压状态计数
   pcie_device_status_u device_status; //设备状态
   pcie_aer_status_s    pcie_aer_status; //AER错误状态
} pcie_loop_test_result_s;

typedef struct tagPcieDmaChannelAttrs {
    UINT32 dma_chan_en; /*通道使能/关闭状态*/
    UINT32 dma_mode; /* DMA通道工作模式，支持块模式和LL模式*/
    UINT32 channel_status;   /* DMA引擎当前运行状态 */
}pcie_dma_channel_attrs_s;

typedef enum tagPcieDmaChannelStatus
{
    PCIE_DMA_CS_RESERVED = 0,    /* DMA通道的当前状态 ; 0:保留,1:running；2:Halted;3:Stopped*/
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

/*pcie 初始化模式*/
typedef enum tagPcieMode
{
    PCIE_EP_DEVICE = 0x0,
    LEGACY_PCIE_EP_DEVICE = 0x1,
    RP_OF_PCIE_RC = 0x4,
    PCIE_INVALID = 0x100
}pcie_mode_e;

// start-uniBIOS-y00216284-FFF Issuse ID 2014-7-8 >>>
// Desc: 
// NTB初始化数据结构
typedef struct{
    UINT32              PortIndex;
    PCIE_PORT_INFO      PortInfo;
    UINT64              iep_bar01; /*iep bar 01*/
    UINT64              iep_bar23;
    UINT64              iep_bar45;
    UINT64              iep_bar01_xlat; /*NTB_TO_NTB才起作用*/
    UINT64              iep_bar23_xlat; /*iep 地址转换寄存器23*/
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
 函 数 名  : pcie_mode_get
 功能描述  : 获取PCIE模式信息，包括接口类型、link状态、设备link宽度、link速
             度
 输入参数  : UINT32 Port
             pcie_port_info *port_info
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_mode_get(UINT32 Port, PCIE_PORT_INFO *port_info);

/*****************************************************************************
 函 数 名  : pcie_port_ctrl
 功能描述  : 控制对PCIE端口进行使能或关闭
 输入参数  :
            UINT32 Port : pcie控制器端口号
            UINT32 port_ctrl :　0，关闭端口；1：打开端口

 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_ctrl(UINT32 Port, UINT32 port_ctrl);

/*****************************************************************************
 函 数 名  : pcie_link_speed_set
 功能描述  : 设置PCIE的link速率,GEN1.0,GEN2.0或GEN3.0
 输入参数  : UINT32 Port
             pcie_port_gen_e speed
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_link_speed_set(UINT32 Port, PCIE_PORT_GEN speed);

/*****************************************************************************
 函 数 名  : pcie_port_cfg_set
 功能描述  : 通过PCIE端口配置，设备PCIE端口的预加重、去加重、摆幅、均衡等功
             能
 输入参数  : UINT32 Port
             pcie_cfg_params *cfg_params
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_cfg_set(UINT32 Port, pcie_cfg_params_s *cfg_params);

/*****************************************************************************
 函 数 名  : pcie_port_cfg_get
 功能描述  : 获取某个PCIE端口的预加重、去加重、摆幅、均衡等的配置
 输入参数  : UINT32 Port
             pcie_cfg_params *cfg_params
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_cfg_get(UINT32 Port, pcie_cfg_params_s *cfg_params);


/*****************************************************************************
 函 数 名  : pcie_dma_chan_ctl
 功能描述  : PCIE DMA通道使能控制，每个PCIE接口有两个DMA通道
 输入参数  :
            UINT32 Port : pcie控制器端口
            UINT32 channel : DMA通道号，0为读通道，1为写通道，其他值无效.
            UINT32 control : 1，使能DMA通道；0禁止DMA通道

 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_dma_chan_ctl(UINT32 Port,UINT32 channel,UINT32 control);

/*****************************************************************************
 函 数 名  : pcie_dma_chan_attribu_set
 功能描述  : 设置PCIE DMA通道属性
 输入参数  : UINT32 Port
             UINT32 channel
             pcie_dma_channel_attrs_s *dma_attribute
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_dma_chan_attribu_set(UINT32 Port,UINT32 channel, pcie_dma_channel_attrs_s *dma_attribute);

/*****************************************************************************
 函 数 名  : pcie_dma_cur_status_get
 功能描述  : 获取PCIE DMA引擎通道的当前运行状态
 输入参数  : UINT32 Port
             UINT32 channel
             pcie_dma_channel_status_e *dma_channel_status
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_dma_cur_status_get(UINT32 Port, UINT32 channel, pcie_dma_channel_status_e *dma_channel_status);

/*****************************************************************************
 函 数 名  : pcie_dma_int_enable
 功能描述  : PCIE DMA通道的中断使能控制
 输入参数  : UINT32 Port
             UINT32 channel
             pcie_dma_int_type_e int_type
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_dma_int_enable(UINT32 Port, UINT32 channel, pcie_dma_int_type_e int_type);

/*****************************************************************************
 函 数 名  : pcie_dma_int_mask
 功能描述  : PCIE DMA通道的中断屏蔽控制
 输入参数  : UINT32 Port
             UINT32 channel
             pcie_dma_int_type_e int_type
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_dma_int_mask(UINT32 Port, UINT32 channel, pcie_dma_int_type_e int_type);

/*****************************************************************************
 函 数 名  : pcie_dma_tranfer_stop
 功能描述  : PCIE DMA通道的数据传输中止命令接口
 输入参数  : UINT32 Port
             UINT32 channel
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_dma_tranfer_stop(UINT32 Port, UINT32 channel);


/*****************************************************************************
 函 数 名  : pcie_dma_int_status_get
 功能描述  : PCIE DMA中断原因获取
 输入参数  : UINT32 Port
             UINT32 channel
             pcie_dma_int_type_e *dma_int_status
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_dma_int_status_get(UINT32 Port, UINT32 channel, int *dma_int_status);

/*****************************************************************************
 函 数 名  : pcie_dma_int_clear
 功能描述  : 清除某个DMA通道的中断原因寄存器
 输入参数  : UINT32 Port
             UINT32 channel
             pcie_dma_int_type_e dma_int_type
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_dma_int_clear(UINT32 Port, UINT32 channel, pcie_dma_int_type_e dma_int_type);


/*****************************************************************************
 函 数 名  : pcie_dma_read
 功能描述  : PCIE DMA读数据接口
 输入参数  :
            UINT32 Port : pcie控制器端口
            Void *source : 数据传输源地址（可为64位地址）
            Void *dest : 数据传输目的地址（可为64位地址）
            UINT32 transferSize : 传输数据的总长度
            UINT32 burstSize : 一次传输的数据长度

 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 PCIE DMA读数据接口，支持块传输和链式传输，transferSize大小为1B-4GB，根据burstSize
 大小，自动进行链式传输或者一次性的块传输
 此接口为异步接口
 source地址指针指向读数据的源地址，对于非NTB端口，此地址应该落在某个EP的Memroy BAR地址空间里；对于NTB
 模式，此地址应该落在PBAR23、PBAR45定义的地址空间里
 dest地址指针指向读数据的目的地址，此地址应为本地的内存地址空间

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_dma_read(UINT32 Port,void *source, void *dest,UINT32 transfer_size, UINT32 burst_size);
/*****************************************************************************
 函 数 名  : pcie_dma_write
 功能描述  : PCIE DMA写数据接口
 输入参数  :
            UINT32 Port : pcie控制器端口
            Void *source : 数据传输源地址（可为64位地址）
            Void *dest : 数据传输目的地址（可为64位地址）
            UINT32 transferSize : 传输数据的总长度
            UINT32 burstSize : 一次传输的数据长度

 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 PCIE DMA写数据接口，支持块传输和链式传输，transferSize大小为1B-4GB，根据burstSize
 大小，自动进行链式传输或者一次性的块传输
 此接口为异步接口
 source地址指针指向写数据的源地址，此地址应为本地的内存地址空间
 dest地址指针指向写数据的目的地址，对于非NTB端口，此地址应该落在某个EP的Memory BAR地址空间里；对于NTB
 端口，此地址应该落在PBAR23、PBAR45定义的地址空间里。
 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_dma_write(UINT32 Port,void *source, void *dest,UINT32 transfer_size, UINT32 burst_size);

/*****************************************************************************
 函 数 名  : pcie_multicast_cfg_set
 功能描述  : PCIE Multicast初始化配置
 输入参数  : UINT32 Port: pcie控制器端口号
             pcie_multicast_cfg_s *multicast_cfg: multicast配置窗口指针，指向需要配置的multicast窗口，最多16个
             UINT32 winnum : 窗口个数
 输出参数  : 无
 返 回 值  : int
 pcie_multicast_cfg_s，包括multicast的地址窗口（起始地址和长度）、每组窗口对应的映射地址、窗口在进行multi-cast时
 是否要进行地址映射、multicast功能是否需要bypass等，最少要配置一个窗口，最多配置16个窗口
 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_multicast_cfg_set(UINT32 Port,pcie_multicast_cfg_s *multicast_cfg,UINT32 win_num);

/*****************************************************************************
 函 数 名  : pcie_setup_ntb
 功能描述  : 对某个端口进行NTB的初始配置
 输入参数  : UINT32 Port: pcie控制器端口号
             pcie_ntg_cfg *ntb_cfg: NTB配置结构体
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_setup_ntb(UINT32 Port, PCIE_NTB_CFG *ntb_cfg);

/*****************************************************************************
 函 数 名  : pcie_ntb_doorbell_send
 功能描述  : 实现NTB两侧系统之间的Doorbell中断发送功能
 输入参数  :
 输入参数    UINT32 Port : pcie控制器端口号
             UINT32 doorbell : doorbell中断号，支持范围为0-31

 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_ntb_doorbell_send(UINT32 Port,UINT32 doorbell);

/*****************************************************************************
 函 数 名  : pcie_loop_test_start
 功能描述  : 启动PCIE端口的环回测试功能
 输入参数  :
                UINT32 Port : pcie控制器端口号
                UINT32 loop_type : 0:近端环回；1：远端环回

 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_loop_test_start(UINT32 Port, UINT32 loop_type);

/*****************************************************************************
 函 数 名  : pcie_loop_test_stop
 功能描述  : 关闭PCIE端口的环回测试功能
 输入参数  : UINT32 Port : pcie控制器端口号
             UINT32 loop_type : 0:近端环回；1：远端环回
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_loop_test_stop(UINT32 Port, UINT32 loop_type);

/*****************************************************************************
 函 数 名  : pcie_loop_test_get
 功能描述  : 获取PCIE环回测试结果
 输入参数  : UINT32 Port : pcie控制器端口号
             UINT32 loop_type : 0:近端环回；1：远端环回             
 输出参数  : pcie_loop_test_result_s *test_result : 记录PCIE环回测试结果
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_loop_test_get(UINT32 Port, UINT32 loop_type, pcie_loop_test_result_s *test_result);
/*****************************************************************************
 函 数 名  : pcie_port_reset
 功能描述  : PCIE端口复位，复位此PCIE端口下的所有设备，包括端口本身
 输入参数  : UINT32 Port : pcie控制器端口号
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :
 
 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_reset(UINT32 Port);

/*****************************************************************************
 函 数 名  : pcie_port_error_report_enable
 功能描述  : 使能PCIE端口的错误上报功能
 输入参数  : UINT32 Port : pcie控制器端口号
             UINT32 bus ： 总线号
             UINT32 dev ： 设备号
             UINT32 func ： 功能号
             pcie_error_type_e pcie_error : PCIE错误类型，枚举型参数
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_error_report_enable(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func, PCIE_ERROR_TYPE pcie_error);

/*****************************************************************************
 函 数 名  : pcie_port_error_report_disable
 功能描述  : 禁止PCIE端口的错误上报功能
 输入参数  : UINT32 Port : pcie控制器端口号
             UINT32 bus ： 总线号
             UINT32 dev ： 设备号
             UINT32 func ： 功能号
             pcie_error_type_e pcie_error : PCIE错误类型，枚举型参数
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_error_report_disable(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func, PCIE_ERROR_TYPE pcie_error);

/*****************************************************************************
 函 数 名  : pcie_device_error_status_get
 功能描述  : 获取PCIE设备的错误状态（非AER错误）
 输入参数  : UINT32 Port : pcie控制器端口号
             UINT32 bus ： 总线号
             UINT32 dev ： 设备号
             UINT32 func ： 功能号
             UINT32 clear : 读后是否清0，为1表示读后将错误状态清零，否则不清零
 输出参数  : pcie_device_status_u *pcie_stat : PCIE错误状态结构体，记录PCIE的错误状态信息
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_device_error_status_get(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func,UINT32 clear, \
pcie_device_status_u *pcie_stat);
/*****************************************************************************
 函 数 名  : pcie_port_aer_cap_get
 功能描述  : 获取某个PCIE端口设备是否支持AER功能
 输入参数  : UINT32 Port : pcie控制器端口号
             UINT32 bus ： 总线号
             UINT32 dev ： 设备号
             UINT32 func ： 功能号
 输出参数  : UINT32 *aer_cap : 是否支持AER功能，0不支持，1支持
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_aer_cap_get(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func,UINT32 *aer_cap);

/*****************************************************************************
 函 数 名  : pcie_port_aer_status_get
 功能描述  : 获取某个PCIE端口设备所有AER错误信息
 输入参数  : UINT32 Port : pcie控制器端口号
             UINT32 bus ： 总线号 
             UINT32 dev ： 设备号
             UINT32 func ： 功能号
 输出参数  : pcie_uc_aer_status_u *pcie_aer_status : PCIE端口AER错误状态结构体，记录所有的AER错误状态信息
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_aer_status_get(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func,pcie_uc_aer_status_u *pcie_aer_status);
/*****************************************************************************
 函 数 名  : pcie_port_aer_status_clr
 功能描述  : 清除某个PCIE端口设备所有的AER错误状态
 输入参数  : UINT32 Port : pcie控制器端口号
             UINT32 bus ： 总线号
             UINT32 dev ： 设备号
             UINT32 func ： 功能号
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_aer_status_clr(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func);

/*****************************************************************************
 函 数 名  : pcie_port_aer_report_enable
 功能描述  : 使能PCIE端口的AER错误中断上报
 输入参数  : UINT32 Port : pcie控制器端口号
             pcie_error_type_e pcie_aer_type ：AER错误类型
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_aer_report_enable(UINT32 Port, PCIE_ERROR_TYPE pcie_aer_type);


/*****************************************************************************
 函 数 名  : pcie_port_aer_report_disable
 功能描述  : 关闭PCIE端口的AER错误中断上报
 输入参数  : UINT32 Port : pcie控制器端口号
             pcie_error_type_e pcie_aer_type：AER错误类型
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_port_aer_report_disable(UINT32 Port, PCIE_ERROR_TYPE pcie_aer_type);


/*****************************************************************************
 函 数 名  : pcie_cfg_read
 功能描述  : 配置读
 输入参数  : UINT32 Port : pcie控制器端口号
             UINT32 bus ： 总线号
             UINT32 dev ： 设备号
             UINT32 func ： 功能号
             UINT32 regOff : 寄存器偏移
             UINT32 value[] : 数据读出保存地址
             UINT32 length : 读数据长度
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_cfg_read(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func, UINT32 reg_offset, UINT32 * value, UINT32 length);

/*****************************************************************************
 函 数 名  : pcie_cfg_write
 功能描述  : 配置读
 输入参数  : UINT32 Port : pcie控制器端口号
             UINT32 bus ： 总线号
             UINT32 dev ： 设备号
             UINT32 func ： 功能号
             UINT32 regOff : 寄存器偏移
             UINT8 *data  : 待写入的数据地址
             UINT32 length : 数据长度
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_cfg_write(UINT32 Port, UINT32 bus, UINT32 dev, UINT32 func, UINT32 reg_offset, UINT8 * data, UINT32 length);

/*****************************************************************************
 函 数 名  : pcie_mem_read
 功能描述  : memory读
 输入参数  : UINT32 Port : pcie控制器端口号
             void *local_addr : 本地memory空间地址
             void *pcie_mem_addr : PCIE设备memory空间地址
             UINT32 length : 数据长度
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :
 此接口仅适用于PCIE接口，调用者需要保证给的PCIE Memory空间地址合法，此接口会根据给出
 的PCIE Memory空间地址，查找IATU，如果此段空间有通过IATU映射，则软件可以通过IATU映射
 ，访问到此段PCIE Memory空间

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_mem_read(UINT32 Port,void * local_addr, void *pcie_mem_addr,UINT32 length);

/*****************************************************************************
 函 数 名  : pcie_mem_write
 功能描述  : memory写
 输入参数  : UINT32 Port : pcie控制器端口号
             void *local_addr : 本地memory空间地址
             void *pcie_mem_addr : PCIE设备memory空间地址
             UINT32 length : 数据长度
 输出参数  : 无
 返 回 值  : int
 调用函数  :
 被调函数  :
 此接口仅适用于PCIE接口，调用者需要保证给的PCIE Memory空间地址合法，此接口会根据给出
 的PCIE Memory空间地址，查找IATU，如果此段空间有通过IATU映射，则软件可以通过IATU映射
 ，访问到此段PCIE Memory空间

 修改历史      :
  1.日    期   : 2014年7月19日
    作    者   : y00216284
    修改内容   : 新生成函数

*****************************************************************************/
extern int pcie_mem_write(UINT32 Port,void *local_addr , void *pcie_mem_addr,UINT32 length);

#endif
