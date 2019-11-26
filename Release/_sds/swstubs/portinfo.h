/* File: D:/ljd4/GCRU/Release/_sds/p0/.cf_work/portinfo.h */
#ifndef _SDS_PORTINFO_p_0__H
#define _SDS_PORTINFO_p_0__H

#include "cf_request.h"
#include "accel_irq.h"

#ifdef __cplusplus
extern "C" {
#endif

struct p_0_hwblk_conv2d_1 {
  cf_port_send_t cmd_conv2d_1;
  cf_port_send_t CON_IN2_V;
  cf_port_send_t KER2_V;
  cf_port_receive_t CON_OUT2_V;
  cf_port_send_t BIA2_V;
  cf_port_send_t CON_IN3_V;
  cf_port_send_t KER3_V;
  cf_port_receive_t CON_OUT3_V;
  cf_port_send_t BIA3_V;
  cf_port_send_t CON_IN4_V;
  cf_port_send_t KER4_V;
  cf_port_receive_t CON_OUT4_V;
  cf_port_send_t BIA4_V;
  cf_port_send_t CON_IN5_V;
  cf_port_send_t KER5_V;
  cf_port_receive_t CON_OUT5_V;
  cf_port_send_t BIA5_V;
  cf_port_send_t re_en;
};

extern struct p_0_hwblk_conv2d_1 p_0_hwinst_conv2d_1_1;
void p_0_cf_framework_open(void);
void p_0_cf_framework_close(void);

#ifdef __cplusplus
};
#endif

#endif
