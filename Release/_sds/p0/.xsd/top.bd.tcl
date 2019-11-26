

#---------------------------
# Constant blocks
#---------------------------

#---------------------------
# Platform Parameters for zcu102
#---------------------------
set ps_e [get_bd_cell /ps_e]
    
set_property -dict [ list \
  CONFIG.PSU__USE__M_AXI_GP0 1 \
  CONFIG.PSU__USE__S_AXI_GP2 1 \
  CONFIG.PSU__USE__S_AXI_GP3 1 \
  CONFIG.PSU__USE__S_AXI_GP4 1 \
  CONFIG.PSU__USE__S_AXI_GP5 1 \
  ] $ps_e
set xlconcat_0 [get_bd_cell /xlconcat_0]
    
set_property -dict [ list \
  CONFIG.NUM_PORTS 8 \
  ] $xlconcat_0
set xlconcat_1 [get_bd_cell /xlconcat_1]
    
set_property -dict [ list \
  CONFIG.NUM_PORTS 8 \
  ] $xlconcat_1

#---------------------------
# Instantiating dm_0
#---------------------------
set dm_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_0]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_0

#---------------------------
# Instantiating dm_1
#---------------------------
set dm_1 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_1]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_1

#---------------------------
# Instantiating dm_2
#---------------------------
set dm_2 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_2]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_2

#---------------------------
# Instantiating dm_3
#---------------------------
set dm_3 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_3]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_3

#---------------------------
# Instantiating dm_4
#---------------------------
set dm_4 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_4]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_4

#---------------------------
# Instantiating dm_5
#---------------------------
set dm_5 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_5]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_5

#---------------------------
# Instantiating dm_6
#---------------------------
set dm_6 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_6]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_6

#---------------------------
# Instantiating dm_7
#---------------------------
set dm_7 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_7]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_7

#---------------------------
# Instantiating dm_8
#---------------------------
set dm_8 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_8]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_8

#---------------------------
# Instantiating dm_9
#---------------------------
set dm_9 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_9]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_9

#---------------------------
# Instantiating dm_10
#---------------------------
set dm_10 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_10]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_10

#---------------------------
# Instantiating dm_11
#---------------------------
set dm_11 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_11]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {1} \
  CONFIG.C_INCLUDE_S2MM {0} \
  CONFIG.C_INCLUDE_MM2S_SF {1} \
  CONFIG.C_INCLUDE_MM2S_DRE {1} \
  CONFIG.C_MM2S_BURST_SIZE {64} \
  CONFIG.C_M_AXI_MM2S_DATA_WIDTH {64} \
  CONFIG.C_M_AXIS_MM2S_TDATA_WIDTH {64} \
  ] $dm_11

#---------------------------
# Instantiating dm_12
#---------------------------
set dm_12 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_12]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {0} \
  CONFIG.C_INCLUDE_S2MM {1} \
  CONFIG.C_INCLUDE_S2MM_SF {1} \
  CONFIG.C_INCLUDE_S2MM_DRE {1} \
  CONFIG.C_S2MM_BURST_SIZE {64} \
  CONFIG.C_M_AXI_S2MM_DATA_WIDTH {64} \
  CONFIG.C_S_AXIS_S2MM_TDATA_WIDTH {64} \
  ] $dm_12

#---------------------------
# Instantiating dm_13
#---------------------------
set dm_13 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_13]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {0} \
  CONFIG.C_INCLUDE_S2MM {1} \
  CONFIG.C_INCLUDE_S2MM_SF {1} \
  CONFIG.C_INCLUDE_S2MM_DRE {1} \
  CONFIG.C_S2MM_BURST_SIZE {64} \
  CONFIG.C_M_AXI_S2MM_DATA_WIDTH {64} \
  CONFIG.C_S_AXIS_S2MM_TDATA_WIDTH {64} \
  ] $dm_13

#---------------------------
# Instantiating dm_14
#---------------------------
set dm_14 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_14]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {0} \
  CONFIG.C_INCLUDE_S2MM {1} \
  CONFIG.C_INCLUDE_S2MM_SF {1} \
  CONFIG.C_INCLUDE_S2MM_DRE {1} \
  CONFIG.C_S2MM_BURST_SIZE {64} \
  CONFIG.C_M_AXI_S2MM_DATA_WIDTH {64} \
  CONFIG.C_S_AXIS_S2MM_TDATA_WIDTH {64} \
  ] $dm_14

#---------------------------
# Instantiating dm_15
#---------------------------
set dm_15 [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_dma:7.1 dm_15]
  
set_property -dict [ list \
  CONFIG.C_ADDR_WIDTH {36} \
  CONFIG.C_DLYTMR_RESOLUTION {1250} \
  CONFIG.C_SG_LENGTH_WIDTH {26} \
  CONFIG.C_INCLUDE_SG {0} \
  CONFIG.C_INCLUDE_MM2S {0} \
  CONFIG.C_INCLUDE_S2MM {1} \
  CONFIG.C_INCLUDE_S2MM_SF {1} \
  CONFIG.C_INCLUDE_S2MM_DRE {1} \
  CONFIG.C_S2MM_BURST_SIZE {64} \
  CONFIG.C_M_AXI_S2MM_DATA_WIDTH {64} \
  CONFIG.C_S_AXIS_S2MM_TDATA_WIDTH {64} \
  ] $dm_15

#---------------------------
# Instantiating conv2d_1_1
#---------------------------
set conv2d_1_1 [create_bd_cell -type ip -vlnv xilinx.com:hls:conv2d_1:1.0 conv2d_1_1]
  

#---------------------------
# Instantiating conv2d_1_1_if
#---------------------------
set conv2d_1_1_if [create_bd_cell -type ip -vlnv xilinx.com:ip:adapter_v3_0:1.0 conv2d_1_1_if]
  
set_property -dict [ list \
  CONFIG.S_AXIS_FIFO_0_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_0_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_0_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_0_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_1_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_1_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_1_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_1_DEPTH {1024} \
  CONFIG.M_AXIS_FIFO_0_WIDTH {16} \
  CONFIG.M_AXIS_FIFO_0_BYTE_WIDTH {16} \
  CONFIG.M_AXIS_FIFO_0_DMWIDTH {16} \
  CONFIG.M_AXIS_FIFO_0_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_2_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_2_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_2_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_2_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_3_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_3_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_3_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_3_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_4_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_4_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_4_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_4_DEPTH {1024} \
  CONFIG.M_AXIS_FIFO_1_WIDTH {16} \
  CONFIG.M_AXIS_FIFO_1_BYTE_WIDTH {16} \
  CONFIG.M_AXIS_FIFO_1_DMWIDTH {16} \
  CONFIG.M_AXIS_FIFO_1_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_5_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_5_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_5_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_5_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_6_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_6_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_6_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_6_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_7_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_7_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_7_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_7_DEPTH {1024} \
  CONFIG.M_AXIS_FIFO_2_WIDTH {16} \
  CONFIG.M_AXIS_FIFO_2_BYTE_WIDTH {16} \
  CONFIG.M_AXIS_FIFO_2_DMWIDTH {16} \
  CONFIG.M_AXIS_FIFO_2_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_8_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_8_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_8_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_8_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_9_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_9_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_9_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_9_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_10_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_10_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_10_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_10_DEPTH {1024} \
  CONFIG.M_AXIS_FIFO_3_WIDTH {16} \
  CONFIG.M_AXIS_FIFO_3_BYTE_WIDTH {16} \
  CONFIG.M_AXIS_FIFO_3_DMWIDTH {16} \
  CONFIG.M_AXIS_FIFO_3_DEPTH {1024} \
  CONFIG.S_AXIS_FIFO_11_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_11_BYTE_WIDTH {16} \
  CONFIG.S_AXIS_FIFO_11_DMWIDTH {16} \
  CONFIG.S_AXIS_FIFO_11_DEPTH {1024} \
  CONFIG.C_INPUT_SCALAR_0_WIDTH {32} \
  CONFIG.C_NUM_INPUT_FIFOs {12} \
  CONFIG.C_NUM_OUTPUT_FIFOs {4} \
  CONFIG.C_N_INPUT_SCALARS {1} \
  ] $conv2d_1_1_if

#---------------------------
# Instantiating axi_ic_ps_e_M_AXI_HPM0_FPD
#---------------------------
set axi_ic_ps_e_M_AXI_HPM0_FPD [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_ic_ps_e_M_AXI_HPM0_FPD]
  
set_property -dict [ list \
  CONFIG.NUM_MI {17} \
  CONFIG.NUM_SI {1} \
  CONFIG.STRATEGY {2} \
  CONFIG.M00_HAS_REGSLICE {1} \
  CONFIG.M01_HAS_REGSLICE {1} \
  CONFIG.M02_HAS_REGSLICE {1} \
  CONFIG.M03_HAS_REGSLICE {1} \
  CONFIG.M04_HAS_REGSLICE {1} \
  CONFIG.M05_HAS_REGSLICE {1} \
  CONFIG.M06_HAS_REGSLICE {1} \
  CONFIG.M07_HAS_REGSLICE {1} \
  CONFIG.M08_HAS_REGSLICE {1} \
  CONFIG.M09_HAS_REGSLICE {1} \
  CONFIG.M10_HAS_REGSLICE {1} \
  CONFIG.M11_HAS_REGSLICE {1} \
  CONFIG.M12_HAS_REGSLICE {1} \
  CONFIG.M13_HAS_REGSLICE {1} \
  CONFIG.M14_HAS_REGSLICE {1} \
  CONFIG.M15_HAS_REGSLICE {1} \
  CONFIG.M16_HAS_REGSLICE {1} \
  CONFIG.S00_HAS_REGSLICE {1} \
  ] $axi_ic_ps_e_M_AXI_HPM0_FPD

#---------------------------
# Instantiating axi_ic_ps_e_S_AXI_HP3_FPD
#---------------------------
set axi_ic_ps_e_S_AXI_HP3_FPD [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_ic_ps_e_S_AXI_HP3_FPD]
  
set_property -dict [ list \
  CONFIG.NUM_MI {1} \
  CONFIG.NUM_SI {4} \
  CONFIG.STRATEGY {2} \
  CONFIG.M00_HAS_REGSLICE {1} \
  CONFIG.M00_HAS_DATA_FIFO {2} \
  CONFIG.S00_HAS_REGSLICE {1} \
  CONFIG.S00_HAS_DATA_FIFO {2} \
  CONFIG.S01_HAS_REGSLICE {1} \
  CONFIG.S01_HAS_DATA_FIFO {2} \
  CONFIG.S02_HAS_REGSLICE {1} \
  CONFIG.S02_HAS_DATA_FIFO {2} \
  CONFIG.S03_HAS_REGSLICE {1} \
  CONFIG.S03_HAS_DATA_FIFO {2} \
  ] $axi_ic_ps_e_S_AXI_HP3_FPD

#---------------------------
# Instantiating axi_ic_ps_e_S_AXI_HP2_FPD
#---------------------------
set axi_ic_ps_e_S_AXI_HP2_FPD [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_ic_ps_e_S_AXI_HP2_FPD]
  
set_property -dict [ list \
  CONFIG.NUM_MI {1} \
  CONFIG.NUM_SI {4} \
  CONFIG.STRATEGY {2} \
  CONFIG.M00_HAS_REGSLICE {1} \
  CONFIG.M00_HAS_DATA_FIFO {2} \
  CONFIG.S00_HAS_REGSLICE {1} \
  CONFIG.S00_HAS_DATA_FIFO {2} \
  CONFIG.S01_HAS_REGSLICE {1} \
  CONFIG.S01_HAS_DATA_FIFO {2} \
  CONFIG.S02_HAS_REGSLICE {1} \
  CONFIG.S02_HAS_DATA_FIFO {2} \
  CONFIG.S03_HAS_REGSLICE {1} \
  CONFIG.S03_HAS_DATA_FIFO {2} \
  ] $axi_ic_ps_e_S_AXI_HP2_FPD

#---------------------------
# Instantiating axi_ic_ps_e_S_AXI_HP0_FPD
#---------------------------
set axi_ic_ps_e_S_AXI_HP0_FPD [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_ic_ps_e_S_AXI_HP0_FPD]
  
set_property -dict [ list \
  CONFIG.NUM_MI {1} \
  CONFIG.NUM_SI {4} \
  CONFIG.STRATEGY {2} \
  CONFIG.M00_HAS_REGSLICE {1} \
  CONFIG.M00_HAS_DATA_FIFO {2} \
  CONFIG.S00_HAS_REGSLICE {1} \
  CONFIG.S00_HAS_DATA_FIFO {2} \
  CONFIG.S01_HAS_REGSLICE {1} \
  CONFIG.S01_HAS_DATA_FIFO {2} \
  CONFIG.S02_HAS_REGSLICE {1} \
  CONFIG.S02_HAS_DATA_FIFO {2} \
  CONFIG.S03_HAS_REGSLICE {1} \
  CONFIG.S03_HAS_DATA_FIFO {2} \
  ] $axi_ic_ps_e_S_AXI_HP0_FPD

#---------------------------
# Instantiating axi_ic_ps_e_S_AXI_HP1_FPD
#---------------------------
set axi_ic_ps_e_S_AXI_HP1_FPD [create_bd_cell -type ip -vlnv xilinx.com:ip:axi_interconnect:2.1 axi_ic_ps_e_S_AXI_HP1_FPD]
  
set_property -dict [ list \
  CONFIG.NUM_MI {1} \
  CONFIG.NUM_SI {4} \
  CONFIG.STRATEGY {2} \
  CONFIG.M00_HAS_REGSLICE {1} \
  CONFIG.M00_HAS_DATA_FIFO {2} \
  CONFIG.S00_HAS_REGSLICE {1} \
  CONFIG.S00_HAS_DATA_FIFO {2} \
  CONFIG.S01_HAS_REGSLICE {1} \
  CONFIG.S01_HAS_DATA_FIFO {2} \
  CONFIG.S02_HAS_REGSLICE {1} \
  CONFIG.S02_HAS_DATA_FIFO {2} \
  CONFIG.S03_HAS_REGSLICE {1} \
  CONFIG.S03_HAS_DATA_FIFO {2} \
  ] $axi_ic_ps_e_S_AXI_HP1_FPD

#---------------------------
# Instantiating axis_dwc_dm_0_tx_0
#---------------------------
set axis_dwc_dm_0_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_0_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_0_tx_0

#---------------------------
# Instantiating axis_dwc_dm_1_tx_0
#---------------------------
set axis_dwc_dm_1_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_1_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_1_tx_0

#---------------------------
# Instantiating axis_dwc_dm_2_tx_0
#---------------------------
set axis_dwc_dm_2_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_2_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_2_tx_0

#---------------------------
# Instantiating axis_dwc_dm_3_tx_0
#---------------------------
set axis_dwc_dm_3_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_3_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_3_tx_0

#---------------------------
# Instantiating axis_dwc_dm_4_tx_0
#---------------------------
set axis_dwc_dm_4_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_4_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_4_tx_0

#---------------------------
# Instantiating axis_dwc_dm_5_tx_0
#---------------------------
set axis_dwc_dm_5_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_5_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_5_tx_0

#---------------------------
# Instantiating axis_dwc_dm_6_tx_0
#---------------------------
set axis_dwc_dm_6_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_6_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_6_tx_0

#---------------------------
# Instantiating axis_dwc_dm_7_tx_0
#---------------------------
set axis_dwc_dm_7_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_7_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_7_tx_0

#---------------------------
# Instantiating axis_dwc_dm_8_tx_0
#---------------------------
set axis_dwc_dm_8_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_8_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_8_tx_0

#---------------------------
# Instantiating axis_dwc_dm_9_tx_0
#---------------------------
set axis_dwc_dm_9_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_9_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_9_tx_0

#---------------------------
# Instantiating axis_dwc_dm_10_tx_0
#---------------------------
set axis_dwc_dm_10_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_10_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_10_tx_0

#---------------------------
# Instantiating axis_dwc_dm_11_tx_0
#---------------------------
set axis_dwc_dm_11_tx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_11_tx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {2} \
  CONFIG.S_TDATA_NUM_BYTES {8} \
  ] $axis_dwc_dm_11_tx_0

#---------------------------
# Instantiating axis_dwc_dm_12_rx_0
#---------------------------
set axis_dwc_dm_12_rx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_12_rx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {8} \
  CONFIG.S_TDATA_NUM_BYTES {2} \
  ] $axis_dwc_dm_12_rx_0

#---------------------------
# Instantiating axis_dwc_dm_13_rx_0
#---------------------------
set axis_dwc_dm_13_rx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_13_rx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {8} \
  CONFIG.S_TDATA_NUM_BYTES {2} \
  ] $axis_dwc_dm_13_rx_0

#---------------------------
# Instantiating axis_dwc_dm_14_rx_0
#---------------------------
set axis_dwc_dm_14_rx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_14_rx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {8} \
  CONFIG.S_TDATA_NUM_BYTES {2} \
  ] $axis_dwc_dm_14_rx_0

#---------------------------
# Instantiating axis_dwc_dm_15_rx_0
#---------------------------
set axis_dwc_dm_15_rx_0 [create_bd_cell -type ip -vlnv xilinx.com:ip:axis_dwidth_converter:1.1 axis_dwc_dm_15_rx_0]
  
set_property -dict [ list \
  CONFIG.M_TDATA_NUM_BYTES {8} \
  CONFIG.S_TDATA_NUM_BYTES {2} \
  ] $axis_dwc_dm_15_rx_0

#---------------------------
# Instantiating sds_irq_const
#---------------------------
set sds_irq_const [create_bd_cell -type ip -vlnv xilinx.com:ip:xlconstant:1.1 sds_irq_const]
  
set_property -dict [ list \
  CONFIG.CONST_WIDTH {1} \
  CONFIG.CONST_VAL {0} \
  ] $sds_irq_const

#---------------------------
# Connectivity
#---------------------------
connect_bd_net  \
  [get_bd_pins -auto_enable /conv2d_1_1_if/ap_clk] \
  [get_bd_pins -auto_enable /conv2d_1_1/ap_clk] \

connect_bd_net  \
  [get_bd_pins -auto_enable /conv2d_1_1_if/ap_resetn] \
  [get_bd_pins -auto_enable /conv2d_1_1/ap_rst_n] \

connect_bd_net  \
  [get_bd_pins -auto_enable /conv2d_1_1_if/ap_iscalar_0_dout] \
  [get_bd_pins -auto_enable /conv2d_1_1/re_en] \

connect_bd_net  \
  [get_bd_pins -auto_enable /clk_wiz_0/clk_out2] \
  [get_bd_pins -auto_enable /ps_e/maxihpm0_fpd_aclk] \
  [get_bd_pins -auto_enable /ps_e/saxihp3_fpd_aclk] \
  [get_bd_pins -auto_enable /ps_e/saxihp2_fpd_aclk] \
  [get_bd_pins -auto_enable /ps_e/saxihp0_fpd_aclk] \
  [get_bd_pins -auto_enable /ps_e/saxihp1_fpd_aclk] \
  [get_bd_pins -auto_enable /dm_0/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_0/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_1/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_1/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_2/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_2/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_3/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_3/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_4/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_4/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_5/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_5/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_6/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_6/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_7/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_7/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_8/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_8/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_9/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_9/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_10/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_10/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_11/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_11/m_axi_mm2s_aclk] \
  [get_bd_pins -auto_enable /dm_12/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_12/m_axi_s2mm_aclk] \
  [get_bd_pins -auto_enable /dm_13/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_13/m_axi_s2mm_aclk] \
  [get_bd_pins -auto_enable /dm_14/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_14/m_axi_s2mm_aclk] \
  [get_bd_pins -auto_enable /dm_15/s_axi_lite_aclk] \
  [get_bd_pins -auto_enable /dm_15/m_axi_s2mm_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axi_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_0_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_1_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/m_axis_fifo_0_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_2_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_3_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_4_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/m_axis_fifo_1_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_5_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_6_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_7_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/m_axis_fifo_2_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_8_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_9_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_10_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/m_axis_fifo_3_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_11_aclk] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/acc_aclk] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/S00_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M00_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M01_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M02_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M03_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M04_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M05_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M06_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M07_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M08_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M09_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M10_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M11_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M12_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M13_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M14_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M15_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M16_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S00_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S01_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S02_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S03_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S00_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S01_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S02_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S03_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S00_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S01_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S02_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S03_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S00_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S01_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S02_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S03_ACLK] \
  [get_bd_pins -auto_enable /axis_dwc_dm_0_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_1_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_2_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_3_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_4_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_5_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_6_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_7_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_8_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_9_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_10_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_11_tx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_12_rx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_13_rx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_14_rx_0/aclk] \
  [get_bd_pins -auto_enable /axis_dwc_dm_15_rx_0/aclk] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/M00_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/M00_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/M00_ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/ACLK] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/M00_ACLK] \

connect_bd_net  \
  [get_bd_pins -auto_enable /proc_sys_reset_1/interconnect_aresetn] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/S00_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M00_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M01_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M02_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M03_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M04_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M05_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M06_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M07_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M08_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M09_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M10_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M11_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M12_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M13_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M14_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M15_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M16_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/M00_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S00_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S01_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S02_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S03_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/M00_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S00_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S01_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S02_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S03_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/M00_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S00_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S01_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S02_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S03_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/M00_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S00_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S01_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S02_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S03_ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/ARESETN] \
  [get_bd_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/ARESETN] \

connect_bd_net  \
  [get_bd_pins -auto_enable /proc_sys_reset_1/peripheral_aresetn] \
  [get_bd_pins -auto_enable /dm_0/axi_resetn] \
  [get_bd_pins -auto_enable /dm_0/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_1/axi_resetn] \
  [get_bd_pins -auto_enable /dm_1/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_2/axi_resetn] \
  [get_bd_pins -auto_enable /dm_2/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_3/axi_resetn] \
  [get_bd_pins -auto_enable /dm_3/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_4/axi_resetn] \
  [get_bd_pins -auto_enable /dm_4/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_5/axi_resetn] \
  [get_bd_pins -auto_enable /dm_5/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_6/axi_resetn] \
  [get_bd_pins -auto_enable /dm_6/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_7/axi_resetn] \
  [get_bd_pins -auto_enable /dm_7/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_8/axi_resetn] \
  [get_bd_pins -auto_enable /dm_8/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_9/axi_resetn] \
  [get_bd_pins -auto_enable /dm_9/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_10/axi_resetn] \
  [get_bd_pins -auto_enable /dm_10/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_11/axi_resetn] \
  [get_bd_pins -auto_enable /dm_11/mm2s_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_12/axi_resetn] \
  [get_bd_pins -auto_enable /dm_12/s2mm_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_13/axi_resetn] \
  [get_bd_pins -auto_enable /dm_13/s2mm_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_14/axi_resetn] \
  [get_bd_pins -auto_enable /dm_14/s2mm_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /dm_15/axi_resetn] \
  [get_bd_pins -auto_enable /dm_15/s2mm_prmry_resetn_out_n] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axi_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_0_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_1_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/m_axis_fifo_0_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_2_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_3_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_4_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/m_axis_fifo_1_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_5_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_6_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_7_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/m_axis_fifo_2_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_8_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_9_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_10_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/m_axis_fifo_3_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/s_axis_fifo_11_aresetn] \
  [get_bd_pins -auto_enable /conv2d_1_1_if/acc_aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_0_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_1_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_2_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_3_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_4_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_5_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_6_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_7_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_8_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_9_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_10_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_11_tx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_12_rx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_13_rx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_14_rx_0/aresetn] \
  [get_bd_pins -auto_enable /axis_dwc_dm_15_rx_0/aresetn] \

connect_bd_net  \
  [get_bd_pins -auto_enable /sds_irq_const/dout] \
  [get_bd_pins -auto_enable /xlconcat_0/In0] \
  [get_bd_pins -auto_enable /xlconcat_0/In1] \
  [get_bd_pins -auto_enable /xlconcat_0/In2] \
  [get_bd_pins -auto_enable /xlconcat_0/In3] \
  [get_bd_pins -auto_enable /xlconcat_0/In4] \
  [get_bd_pins -auto_enable /xlconcat_0/In5] \
  [get_bd_pins -auto_enable /xlconcat_0/In6] \
  [get_bd_pins -auto_enable /xlconcat_0/In7] \
  [get_bd_pins -auto_enable /xlconcat_1/In0] \
  [get_bd_pins -auto_enable /xlconcat_1/In1] \
  [get_bd_pins -auto_enable /xlconcat_1/In2] \
  [get_bd_pins -auto_enable /xlconcat_1/In3] \
  [get_bd_pins -auto_enable /xlconcat_1/In4] \
  [get_bd_pins -auto_enable /xlconcat_1/In5] \
  [get_bd_pins -auto_enable /xlconcat_1/In6] \
  [get_bd_pins -auto_enable /xlconcat_1/In7] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/ap_ctrl] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/ap_ctrl] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/CON_IN2_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_0] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/KER2_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_1] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/CON_OUT2_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_OARG_0] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/BIA2_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_2] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/CON_IN3_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_3] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/KER3_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_4] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/CON_OUT3_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_OARG_1] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/BIA3_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_5] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/CON_IN4_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_6] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/KER4_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_7] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/CON_OUT4_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_OARG_2] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/BIA4_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_8] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/CON_IN5_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_9] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/KER5_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_10] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/CON_OUT5_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_OARG_3] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1/BIA5_V] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/AP_FIFO_IARG_11] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /ps_e/M_AXI_HPM0_FPD] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/S00_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/M00_AXI] \
  [get_bd_intf_pins -auto_enable /ps_e/S_AXI_HP3_FPD] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/M00_AXI] \
  [get_bd_intf_pins -auto_enable /ps_e/S_AXI_HP2_FPD] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/M00_AXI] \
  [get_bd_intf_pins -auto_enable /ps_e/S_AXI_HP0_FPD] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/M00_AXI] \
  [get_bd_intf_pins -auto_enable /ps_e/S_AXI_HP1_FPD] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M00_AXI] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M01_AXI] \
  [get_bd_intf_pins -auto_enable /dm_0/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_0/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S00_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_0/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_0_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_0_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_0] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M02_AXI] \
  [get_bd_intf_pins -auto_enable /dm_1/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_1/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S00_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_1/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_1_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_1_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_1] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M03_AXI] \
  [get_bd_intf_pins -auto_enable /dm_2/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_2/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S00_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_2/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_2_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_2_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_2] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M04_AXI] \
  [get_bd_intf_pins -auto_enable /dm_3/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_3/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S00_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_3/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_3_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_3_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_3] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M05_AXI] \
  [get_bd_intf_pins -auto_enable /dm_4/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_4/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S01_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_4/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_4_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_4_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_4] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M06_AXI] \
  [get_bd_intf_pins -auto_enable /dm_5/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_5/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S01_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_5/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_5_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_5_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_5] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M07_AXI] \
  [get_bd_intf_pins -auto_enable /dm_6/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_6/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S01_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_6/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_6_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_6_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_6] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M08_AXI] \
  [get_bd_intf_pins -auto_enable /dm_7/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_7/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S01_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_7/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_7_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_7_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_7] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M09_AXI] \
  [get_bd_intf_pins -auto_enable /dm_8/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_8/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S02_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_8/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_8_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_8_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_8] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M10_AXI] \
  [get_bd_intf_pins -auto_enable /dm_9/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_9/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S02_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_9/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_9_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_9_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_9] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M11_AXI] \
  [get_bd_intf_pins -auto_enable /dm_10/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_10/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S02_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_10/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_10_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_10_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_10] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M12_AXI] \
  [get_bd_intf_pins -auto_enable /dm_11/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_11/M_AXI_MM2S] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S02_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_11/M_AXIS_MM2S] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_11_tx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_11_tx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/S_AXIS_FIFO_11] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M13_AXI] \
  [get_bd_intf_pins -auto_enable /dm_12/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_12/M_AXI_S2MM] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP3_FPD/S03_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/M_AXIS_FIFO_3] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_12_rx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_12_rx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /dm_12/S_AXIS_S2MM] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M14_AXI] \
  [get_bd_intf_pins -auto_enable /dm_13/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_13/M_AXI_S2MM] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP2_FPD/S03_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/M_AXIS_FIFO_2] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_13_rx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_13_rx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /dm_13/S_AXIS_S2MM] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M15_AXI] \
  [get_bd_intf_pins -auto_enable /dm_14/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_14/M_AXI_S2MM] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP1_FPD/S03_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/M_AXIS_FIFO_1] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_14_rx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_14_rx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /dm_14/S_AXIS_S2MM] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_M_AXI_HPM0_FPD/M16_AXI] \
  [get_bd_intf_pins -auto_enable /dm_15/S_AXI_LITE] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /dm_15/M_AXI_S2MM] \
  [get_bd_intf_pins -auto_enable /axi_ic_ps_e_S_AXI_HP0_FPD/S03_AXI] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /conv2d_1_1_if/M_AXIS_FIFO_0] \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_15_rx_0/S_AXIS] \

connect_bd_intf_net \
  [get_bd_intf_pins -auto_enable /axis_dwc_dm_15_rx_0/M_AXIS] \
  [get_bd_intf_pins -auto_enable /dm_15/S_AXIS_S2MM] \


#---------------------------
# Create Stream Map file
#---------------------------
set stream_subsystems [get_bd_cells * -hierarchical -quiet -filter {VLNV =~ "*:*:sdx_stream_subsystem:*"}]
if {[string length $stream_subsystems] > 0} {    
  set xml_file $output_dir/qdma_stream_map.xml
  set fp [open ${xml_file} w]
  puts $fp "<?xml version=\"1.0\" encoding=\"UTF-8\"?>"
  puts $fp "<xd:streamMap xmlns:xd=\"http://www.xilinx.com/xd\">"
  foreach stream_ss [get_bd_cells * -hierarchical -quiet -filter {VLNV =~ "*:*:sdx_stream_subsystem:*"}] {
    set instance [string trimleft $stream_ss /]
    foreach ss_intf [get_bd_intf_pins $stream_ss/* -quiet -filter {NAME=~"S??_AXIS"}] {
      set pin_name [get_property NAME $ss_intf]
      set route_id [sdx_stream_subsystem::get_routeid $ss_intf]
      set flow_id [sdx_stream_subsystem::get_flowid $ss_intf]
      puts $fp "  <xd:streamRoute xd:instanceRef=\"$instance\" xd:portRef=\"$pin_name\" xd:route=\"$route_id\" xd:flow=\"$flow_id\"/>"
    }
    foreach ss_intf [get_bd_intf_pins $stream_ss/* -quiet -filter {NAME=~"M??_AXIS"}] {
      set pin_name [get_property NAME $ss_intf]
      set route_id [sdx_stream_subsystem::get_routeid $ss_intf]
      set flow_id [sdx_stream_subsystem::get_flowid $ss_intf]
      puts $fp "  <xd:streamRoute xd:instanceRef=\"$instance\" xd:portRef=\"$pin_name\" xd:route=\"$route_id\" xd:flow=\"$flow_id\"/>"
    }
  }
  puts $fp "</xd:streamMap>"
  close $fp
}

