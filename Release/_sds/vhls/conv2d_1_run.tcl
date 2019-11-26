open_project conv2d_1
set_top conv2d_1
add_files D:/ljd4/GCRU/src/hw8.cpp -cflags "-ID:/ljd4/GCRU/src -Wall -O3 -fmessage-length=0 -D __SDSCC__ -m64 -D HLS_NO_XIL_FPO_LIB -I C:/Xilinx/SDx/2018.3/target/aarch64-linux/include -ID:/ljd4/GCRU/src -D __SDSVHLS__ -D __SDSVHLS_SYNTHESIS__ -I D:/ljd4/GCRU/Release -w"
open_solution "solution" -reset
set_part { xczu9eg-ffvb1156-2-e }
# synthesis directives
create_clock -period 10.001000
config_sdx -target sds
config_interface -m_axi_addr64
config_rtl -reset_level low
source D:/ljd4/GCRU/Release/_sds/vhls/conv2d_1.tcl
# end synthesis directives
config_rtl -prefix a0_
csynth_design
export_design -ipname conv2d_1
exit
