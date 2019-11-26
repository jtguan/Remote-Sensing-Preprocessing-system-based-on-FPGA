# ==============================================================
# File generated on Mon Nov 25 19:24:47 +0800 2019
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files D:/ljd4/GCRU/src/hw8.cpp -cflags {-ID:/ljd4/GCRU/src -Wall -O3 -fmessage-length=0 -D__SDSCC__ -m64 -DHLS_NO_XIL_FPO_LIB -IC:/Xilinx/SDx/2018.3/target/aarch64-linux/include -ID:/ljd4/GCRU/src -D__SDSVHLS__ -D__SDSVHLS_SYNTHESIS__ -ID:/ljd4/GCRU/Release -w}
set_part xczu9eg-ffvb1156-2-e
create_clock -name default -period 10.001000
set_clock_uncertainty 27% default
config_sdx -target=sds
config_sdx -optimization_level=0
config_export -vivado_phys_opt=none
config_bind -effort=medium
config_schedule -effort=medium
config_schedule -relax_ii_for_timing=0
config_rtl -auto_prefix=1
config_rtl -reset_level=low
config_rtl -prefix=a0_
config_interface -m_axi_addr64=1
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_interface conv2d_1 
set_directive_latency conv2d_1 -min 1
