#include "cf_lib.h"
#include "cf_request.h"
#include "accel_info.h"
#include "sds_lib.h"
#include "sds_trace.h"
#include "portinfo.h"
#include <stdio.h>  // for printf
#include <stdlib.h> // for exit
#include "xlnk_core_cf.h"
#include "axi_dma_simple_dm.h"
#include "axi_lite_dm.h"
#include "sysport_info.h"

sysport_info_t _sds_sysportp_0_ps_e_S_AXI_HP0_FPD = {
  .name = "ps_e_S_AXI_HP0_FPD",
  .id = 1,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

sysport_info_t _sds_sysportp_0_ps_e_S_AXI_HP1_FPD = {
  .name = "ps_e_S_AXI_HP1_FPD",
  .id = 2,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

sysport_info_t _sds_sysportp_0_ps_e_S_AXI_HP2_FPD = {
  .name = "ps_e_S_AXI_HP2_FPD",
  .id = 3,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

sysport_info_t _sds_sysportp_0_ps_e_S_AXI_HP3_FPD = {
  .name = "ps_e_S_AXI_HP3_FPD",
  .id = 4,
  .address_space = 0,
  .cmd_type = sysport_commands_type_non_coherent,
};

accel_info_t _sds_p_0_conv2d_1_1 = {
  .device_id = 16,
  .phys_base_addr = 0xa0000000,
  .addr_range = 0x10000,
  .func_name = "conv2d_1_1",
  .ip_type = "axis_acc_adapter",
};

axi_dma_simple_info_t p_0_dm_0 = {
  .name = "dm_0",
  .phys_base_addr = 0xa0010000,
  .addr_range = 0x1000,
  .device_id = 0,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP3_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_1 = {
  .name = "dm_1",
  .phys_base_addr = 0xa0011000,
  .addr_range = 0x1000,
  .device_id = 1,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP2_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_2 = {
  .name = "dm_2",
  .phys_base_addr = 0xa0018000,
  .addr_range = 0x1000,
  .device_id = 2,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP1_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_3 = {
  .name = "dm_3",
  .phys_base_addr = 0xa0019000,
  .addr_range = 0x1000,
  .device_id = 3,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP0_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_4 = {
  .name = "dm_4",
  .phys_base_addr = 0xa001a000,
  .addr_range = 0x1000,
  .device_id = 4,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP3_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_5 = {
  .name = "dm_5",
  .phys_base_addr = 0xa001b000,
  .addr_range = 0x1000,
  .device_id = 5,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP2_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_6 = {
  .name = "dm_6",
  .phys_base_addr = 0xa001c000,
  .addr_range = 0x1000,
  .device_id = 6,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP1_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_7 = {
  .name = "dm_7",
  .phys_base_addr = 0xa001d000,
  .addr_range = 0x1000,
  .device_id = 7,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP0_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_8 = {
  .name = "dm_8",
  .phys_base_addr = 0xa001e000,
  .addr_range = 0x1000,
  .device_id = 8,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP3_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_9 = {
  .name = "dm_9",
  .phys_base_addr = 0xa001f000,
  .addr_range = 0x1000,
  .device_id = 9,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP2_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_10 = {
  .name = "dm_10",
  .phys_base_addr = 0xa0012000,
  .addr_range = 0x1000,
  .device_id = 10,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP1_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_11 = {
  .name = "dm_11",
  .phys_base_addr = 0xa0013000,
  .addr_range = 0x1000,
  .device_id = 11,
  .dir = XLNK_DMA_TO_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP0_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_12 = {
  .name = "dm_12",
  .phys_base_addr = 0xa0014000,
  .addr_range = 0x1000,
  .device_id = 12,
  .dir = XLNK_DMA_FROM_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP3_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_13 = {
  .name = "dm_13",
  .phys_base_addr = 0xa0015000,
  .addr_range = 0x1000,
  .device_id = 13,
  .dir = XLNK_DMA_FROM_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP2_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_14 = {
  .name = "dm_14",
  .phys_base_addr = 0xa0016000,
  .addr_range = 0x1000,
  .device_id = 14,
  .dir = XLNK_DMA_FROM_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP1_FPD,
  .data_width = 64,
};

axi_dma_simple_info_t p_0_dm_15 = {
  .name = "dm_15",
  .phys_base_addr = 0xa0017000,
  .addr_range = 0x1000,
  .device_id = 15,
  .dir = XLNK_DMA_FROM_DEV,
  .irq = -1,
  .data_sysport = &_sds_sysportp_0_ps_e_S_AXI_HP0_FPD,
  .data_width = 64,
};

int p_0_hwinst_conv2d_1_1_cmd_conv2d_1_sg_list[] = {0x8};

axi_lite_info_t p_0_hwinst_conv2d_1_1_cmd_conv2d_1_info = {
  .phys_base_addr = 0xa0000000,
  .data_reg_offset = p_0_hwinst_conv2d_1_1_cmd_conv2d_1_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x0,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_SG |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NOCHECK) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_NOCHECK),
  .acc_info = &_sds_p_0_conv2d_1_1,
};

int p_0_hwinst_conv2d_1_1_re_en_sg_list[] = {0xc};

axi_lite_info_t p_0_hwinst_conv2d_1_1_re_en_info = {
  .phys_base_addr = 0xa0000000,
  .data_reg_offset = p_0_hwinst_conv2d_1_1_re_en_sg_list,
  .data_reg_sg_size = 1,
  .write_status_reg_offset = 0x40c,
  .read_status_reg_offset = 0x0,
  .config = XLNK_AXI_LITE_KEYHOLE |
    XLNK_AXI_LITE_STAT_REG_READ(XLNK_AXI_LITE_STAT_REG_NONE) |
    XLNK_AXI_LITE_STAT_REG_WRITE(XLNK_AXI_LITE_STAT_REG_QUEUING),
  .acc_info = &_sds_p_0_conv2d_1_1,
};

struct p_0_hwblk_conv2d_1 p_0_hwinst_conv2d_1_1 = {
  .cmd_conv2d_1 = { .base = { .channel_info = &p_0_hwinst_conv2d_1_1_cmd_conv2d_1_info}, 
    .send_i = &axi_lite_send },
  .CON_IN2_V = { .base = { .channel_info = &p_0_dm_0},
    .send_i = &axi_dma_simple_send_i },
  .KER2_V = { .base = { .channel_info = &p_0_dm_1},
    .send_i = &axi_dma_simple_send_i },
  .CON_OUT2_V = { .base = { .channel_info = &p_0_dm_15},
    .receive_ref_i = 0,
    .receive_i = &axi_dma_simple_recv_i },
  .BIA2_V = { .base = { .channel_info = &p_0_dm_2},
    .send_i = &axi_dma_simple_send_i },
  .CON_IN3_V = { .base = { .channel_info = &p_0_dm_3},
    .send_i = &axi_dma_simple_send_i },
  .KER3_V = { .base = { .channel_info = &p_0_dm_4},
    .send_i = &axi_dma_simple_send_i },
  .CON_OUT3_V = { .base = { .channel_info = &p_0_dm_14},
    .receive_ref_i = 0,
    .receive_i = &axi_dma_simple_recv_i },
  .BIA3_V = { .base = { .channel_info = &p_0_dm_5},
    .send_i = &axi_dma_simple_send_i },
  .CON_IN4_V = { .base = { .channel_info = &p_0_dm_6},
    .send_i = &axi_dma_simple_send_i },
  .KER4_V = { .base = { .channel_info = &p_0_dm_7},
    .send_i = &axi_dma_simple_send_i },
  .CON_OUT4_V = { .base = { .channel_info = &p_0_dm_13},
    .receive_ref_i = 0,
    .receive_i = &axi_dma_simple_recv_i },
  .BIA4_V = { .base = { .channel_info = &p_0_dm_8},
    .send_i = &axi_dma_simple_send_i },
  .CON_IN5_V = { .base = { .channel_info = &p_0_dm_9},
    .send_i = &axi_dma_simple_send_i },
  .KER5_V = { .base = { .channel_info = &p_0_dm_10},
    .send_i = &axi_dma_simple_send_i },
  .CON_OUT5_V = { .base = { .channel_info = &p_0_dm_12},
    .receive_ref_i = 0,
    .receive_i = &axi_dma_simple_recv_i },
  .BIA5_V = { .base = { .channel_info = &p_0_dm_11},
    .send_i = &axi_dma_simple_send_i },
  .re_en = { .base = { .channel_info = &p_0_hwinst_conv2d_1_1_re_en_info}, 
    .send_i = &axi_lite_send },
};

extern void pfm_hook_init(void);
extern void pfm_hook_shutdown(void);
void p_0_init_pl(void)
{
  sysport_open(&_sds_sysportp_0_ps_e_S_AXI_HP0_FPD);
  sysport_open(&_sds_sysportp_0_ps_e_S_AXI_HP1_FPD);
  sysport_open(&_sds_sysportp_0_ps_e_S_AXI_HP2_FPD);
  sysport_open(&_sds_sysportp_0_ps_e_S_AXI_HP3_FPD);
  axi_dma_simple_open(&p_0_dm_0);
  axi_dma_simple_open(&p_0_dm_1);
  axi_dma_simple_open(&p_0_dm_2);
  axi_dma_simple_open(&p_0_dm_3);
  axi_dma_simple_open(&p_0_dm_4);
  axi_dma_simple_open(&p_0_dm_5);
  axi_dma_simple_open(&p_0_dm_6);
  axi_dma_simple_open(&p_0_dm_7);
  axi_dma_simple_open(&p_0_dm_8);
  axi_dma_simple_open(&p_0_dm_9);
  axi_dma_simple_open(&p_0_dm_10);
  axi_dma_simple_open(&p_0_dm_11);
  axi_dma_simple_open(&p_0_dm_12);
  axi_dma_simple_open(&p_0_dm_13);
  axi_dma_simple_open(&p_0_dm_14);
  axi_dma_simple_open(&p_0_dm_15);
  axi_lite_open(&p_0_hwinst_conv2d_1_1_cmd_conv2d_1_info);
  axi_lite_open(&p_0_hwinst_conv2d_1_1_re_en_info);
  _sds_p_0_conv2d_1_1.arg_dm_id[0] = p_0_hwinst_conv2d_1_1_cmd_conv2d_1_info.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[1] = p_0_dm_0.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[2] = p_0_dm_1.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[3] = p_0_dm_15.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[4] = p_0_dm_2.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[5] = p_0_dm_3.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[6] = p_0_dm_4.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[7] = p_0_dm_14.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[8] = p_0_dm_5.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[9] = p_0_dm_6.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[10] = p_0_dm_7.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[11] = p_0_dm_13.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[12] = p_0_dm_8.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[13] = p_0_dm_9.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[14] = p_0_dm_10.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[15] = p_0_dm_12.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[16] = p_0_dm_11.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id[17] = p_0_hwinst_conv2d_1_1_re_en_info.dm_id;
  _sds_p_0_conv2d_1_1.arg_dm_id_count = 18;
  accel_open(&_sds_p_0_conv2d_1_1);
}

void p_0_shutdown_pl()
{
  accel_close(&_sds_p_0_conv2d_1_1);
  axi_dma_simple_close(&p_0_dm_0);
  axi_dma_simple_close(&p_0_dm_1);
  axi_dma_simple_close(&p_0_dm_2);
  axi_dma_simple_close(&p_0_dm_3);
  axi_dma_simple_close(&p_0_dm_4);
  axi_dma_simple_close(&p_0_dm_5);
  axi_dma_simple_close(&p_0_dm_6);
  axi_dma_simple_close(&p_0_dm_7);
  axi_dma_simple_close(&p_0_dm_8);
  axi_dma_simple_close(&p_0_dm_9);
  axi_dma_simple_close(&p_0_dm_10);
  axi_dma_simple_close(&p_0_dm_11);
  axi_dma_simple_close(&p_0_dm_12);
  axi_dma_simple_close(&p_0_dm_13);
  axi_dma_simple_close(&p_0_dm_14);
  axi_dma_simple_close(&p_0_dm_15);
  axi_lite_close(&p_0_hwinst_conv2d_1_1_cmd_conv2d_1_info);
  axi_lite_close(&p_0_hwinst_conv2d_1_1_re_en_info);
  sysport_close(&_sds_sysportp_0_ps_e_S_AXI_HP0_FPD);
  sysport_close(&_sds_sysportp_0_ps_e_S_AXI_HP1_FPD);
  sysport_close(&_sds_sysportp_0_ps_e_S_AXI_HP2_FPD);
  sysport_close(&_sds_sysportp_0_ps_e_S_AXI_HP3_FPD);
}


void p_0_cf_framework_open(void) __attribute__((constructor));
void p_0_cf_framework_close(void) __attribute__((destructor));
void p_0_cf_framework_open(void)
{
  if (xlnkOpen()) {
    cf_context_init();
    xlnkCounterMap(1199880126);
    pfm_hook_init();
    sds_trace_setup(0x0);
  }
  p_0_init_pl();
}

#ifdef PERF_EST
void add_sw_estimates();
#endif

void p_0_cf_framework_close(void)
{
  p_0_shutdown_pl();
  if(xlnkDecrementRef()) {
    sds_trace_cleanup();
    pfm_hook_shutdown();
    xlnkClose(1, NULL);
  }
#ifdef PERF_EST
  add_sw_estimates();
  apf_perf_estimation_exit();
#endif
}
