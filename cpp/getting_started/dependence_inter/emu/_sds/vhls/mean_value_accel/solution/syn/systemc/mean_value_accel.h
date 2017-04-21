// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _mean_value_accel_HH_
#define _mean_value_accel_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "mean_value_accel_cud.h"
#include "mean_value_accel_bkb.h"
#include "mean_value_accel_in_r_m_axi.h"
#include "mean_value_accel_out_r_m_axi.h"

namespace ap_rtl {

template<unsigned int C_M_AXI_IN_R_ADDR_WIDTH = 32,
         unsigned int C_M_AXI_IN_R_ID_WIDTH = 1,
         unsigned int C_M_AXI_IN_R_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_IN_R_DATA_WIDTH = 32,
         unsigned int C_M_AXI_IN_R_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_IN_R_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_IN_R_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_IN_R_BUSER_WIDTH = 1,
         unsigned int C_M_AXI_OUT_R_ADDR_WIDTH = 32,
         unsigned int C_M_AXI_OUT_R_ID_WIDTH = 1,
         unsigned int C_M_AXI_OUT_R_AWUSER_WIDTH = 1,
         unsigned int C_M_AXI_OUT_R_DATA_WIDTH = 32,
         unsigned int C_M_AXI_OUT_R_WUSER_WIDTH = 1,
         unsigned int C_M_AXI_OUT_R_ARUSER_WIDTH = 1,
         unsigned int C_M_AXI_OUT_R_RUSER_WIDTH = 1,
         unsigned int C_M_AXI_OUT_R_BUSER_WIDTH = 1>
struct mean_value_accel : public sc_module {
    // Port declarations 99
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst_n;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_logic > m_axi_in_r_AWVALID;
    sc_in< sc_logic > m_axi_in_r_AWREADY;
    sc_out< sc_uint<C_M_AXI_IN_R_ADDR_WIDTH> > m_axi_in_r_AWADDR;
    sc_out< sc_uint<C_M_AXI_IN_R_ID_WIDTH> > m_axi_in_r_AWID;
    sc_out< sc_lv<8> > m_axi_in_r_AWLEN;
    sc_out< sc_lv<3> > m_axi_in_r_AWSIZE;
    sc_out< sc_lv<2> > m_axi_in_r_AWBURST;
    sc_out< sc_lv<2> > m_axi_in_r_AWLOCK;
    sc_out< sc_lv<4> > m_axi_in_r_AWCACHE;
    sc_out< sc_lv<3> > m_axi_in_r_AWPROT;
    sc_out< sc_lv<4> > m_axi_in_r_AWQOS;
    sc_out< sc_lv<4> > m_axi_in_r_AWREGION;
    sc_out< sc_uint<C_M_AXI_IN_R_AWUSER_WIDTH> > m_axi_in_r_AWUSER;
    sc_out< sc_logic > m_axi_in_r_WVALID;
    sc_in< sc_logic > m_axi_in_r_WREADY;
    sc_out< sc_uint<C_M_AXI_IN_R_DATA_WIDTH> > m_axi_in_r_WDATA;
    sc_out< sc_uint<C_M_AXI_IN_R_DATA_WIDTH/8> > m_axi_in_r_WSTRB;
    sc_out< sc_logic > m_axi_in_r_WLAST;
    sc_out< sc_uint<C_M_AXI_IN_R_ID_WIDTH> > m_axi_in_r_WID;
    sc_out< sc_uint<C_M_AXI_IN_R_WUSER_WIDTH> > m_axi_in_r_WUSER;
    sc_out< sc_logic > m_axi_in_r_ARVALID;
    sc_in< sc_logic > m_axi_in_r_ARREADY;
    sc_out< sc_uint<C_M_AXI_IN_R_ADDR_WIDTH> > m_axi_in_r_ARADDR;
    sc_out< sc_uint<C_M_AXI_IN_R_ID_WIDTH> > m_axi_in_r_ARID;
    sc_out< sc_lv<8> > m_axi_in_r_ARLEN;
    sc_out< sc_lv<3> > m_axi_in_r_ARSIZE;
    sc_out< sc_lv<2> > m_axi_in_r_ARBURST;
    sc_out< sc_lv<2> > m_axi_in_r_ARLOCK;
    sc_out< sc_lv<4> > m_axi_in_r_ARCACHE;
    sc_out< sc_lv<3> > m_axi_in_r_ARPROT;
    sc_out< sc_lv<4> > m_axi_in_r_ARQOS;
    sc_out< sc_lv<4> > m_axi_in_r_ARREGION;
    sc_out< sc_uint<C_M_AXI_IN_R_ARUSER_WIDTH> > m_axi_in_r_ARUSER;
    sc_in< sc_logic > m_axi_in_r_RVALID;
    sc_out< sc_logic > m_axi_in_r_RREADY;
    sc_in< sc_uint<C_M_AXI_IN_R_DATA_WIDTH> > m_axi_in_r_RDATA;
    sc_in< sc_logic > m_axi_in_r_RLAST;
    sc_in< sc_uint<C_M_AXI_IN_R_ID_WIDTH> > m_axi_in_r_RID;
    sc_in< sc_uint<C_M_AXI_IN_R_RUSER_WIDTH> > m_axi_in_r_RUSER;
    sc_in< sc_lv<2> > m_axi_in_r_RRESP;
    sc_in< sc_logic > m_axi_in_r_BVALID;
    sc_out< sc_logic > m_axi_in_r_BREADY;
    sc_in< sc_lv<2> > m_axi_in_r_BRESP;
    sc_in< sc_uint<C_M_AXI_IN_R_ID_WIDTH> > m_axi_in_r_BID;
    sc_in< sc_uint<C_M_AXI_IN_R_BUSER_WIDTH> > m_axi_in_r_BUSER;
    sc_out< sc_logic > m_axi_out_r_AWVALID;
    sc_in< sc_logic > m_axi_out_r_AWREADY;
    sc_out< sc_uint<C_M_AXI_OUT_R_ADDR_WIDTH> > m_axi_out_r_AWADDR;
    sc_out< sc_uint<C_M_AXI_OUT_R_ID_WIDTH> > m_axi_out_r_AWID;
    sc_out< sc_lv<8> > m_axi_out_r_AWLEN;
    sc_out< sc_lv<3> > m_axi_out_r_AWSIZE;
    sc_out< sc_lv<2> > m_axi_out_r_AWBURST;
    sc_out< sc_lv<2> > m_axi_out_r_AWLOCK;
    sc_out< sc_lv<4> > m_axi_out_r_AWCACHE;
    sc_out< sc_lv<3> > m_axi_out_r_AWPROT;
    sc_out< sc_lv<4> > m_axi_out_r_AWQOS;
    sc_out< sc_lv<4> > m_axi_out_r_AWREGION;
    sc_out< sc_uint<C_M_AXI_OUT_R_AWUSER_WIDTH> > m_axi_out_r_AWUSER;
    sc_out< sc_logic > m_axi_out_r_WVALID;
    sc_in< sc_logic > m_axi_out_r_WREADY;
    sc_out< sc_uint<C_M_AXI_OUT_R_DATA_WIDTH> > m_axi_out_r_WDATA;
    sc_out< sc_uint<C_M_AXI_OUT_R_DATA_WIDTH/8> > m_axi_out_r_WSTRB;
    sc_out< sc_logic > m_axi_out_r_WLAST;
    sc_out< sc_uint<C_M_AXI_OUT_R_ID_WIDTH> > m_axi_out_r_WID;
    sc_out< sc_uint<C_M_AXI_OUT_R_WUSER_WIDTH> > m_axi_out_r_WUSER;
    sc_out< sc_logic > m_axi_out_r_ARVALID;
    sc_in< sc_logic > m_axi_out_r_ARREADY;
    sc_out< sc_uint<C_M_AXI_OUT_R_ADDR_WIDTH> > m_axi_out_r_ARADDR;
    sc_out< sc_uint<C_M_AXI_OUT_R_ID_WIDTH> > m_axi_out_r_ARID;
    sc_out< sc_lv<8> > m_axi_out_r_ARLEN;
    sc_out< sc_lv<3> > m_axi_out_r_ARSIZE;
    sc_out< sc_lv<2> > m_axi_out_r_ARBURST;
    sc_out< sc_lv<2> > m_axi_out_r_ARLOCK;
    sc_out< sc_lv<4> > m_axi_out_r_ARCACHE;
    sc_out< sc_lv<3> > m_axi_out_r_ARPROT;
    sc_out< sc_lv<4> > m_axi_out_r_ARQOS;
    sc_out< sc_lv<4> > m_axi_out_r_ARREGION;
    sc_out< sc_uint<C_M_AXI_OUT_R_ARUSER_WIDTH> > m_axi_out_r_ARUSER;
    sc_in< sc_logic > m_axi_out_r_RVALID;
    sc_out< sc_logic > m_axi_out_r_RREADY;
    sc_in< sc_uint<C_M_AXI_OUT_R_DATA_WIDTH> > m_axi_out_r_RDATA;
    sc_in< sc_logic > m_axi_out_r_RLAST;
    sc_in< sc_uint<C_M_AXI_OUT_R_ID_WIDTH> > m_axi_out_r_RID;
    sc_in< sc_uint<C_M_AXI_OUT_R_RUSER_WIDTH> > m_axi_out_r_RUSER;
    sc_in< sc_lv<2> > m_axi_out_r_RRESP;
    sc_in< sc_logic > m_axi_out_r_BVALID;
    sc_out< sc_logic > m_axi_out_r_BREADY;
    sc_in< sc_lv<2> > m_axi_out_r_BRESP;
    sc_in< sc_uint<C_M_AXI_OUT_R_ID_WIDTH> > m_axi_out_r_BID;
    sc_in< sc_uint<C_M_AXI_OUT_R_BUSER_WIDTH> > m_axi_out_r_BUSER;
    sc_in< sc_lv<32> > in_offset;
    sc_in< sc_lv<32> > out_offset;
    sc_in< sc_lv<32> > size;
    sc_signal< sc_logic > ap_var_for_const0;
    sc_signal< sc_logic > ap_var_for_const5;
    sc_signal< sc_lv<32> > ap_var_for_const6;
    sc_signal< sc_lv<1> > ap_var_for_const1;
    sc_signal< sc_lv<3> > ap_var_for_const2;
    sc_signal< sc_lv<2> > ap_var_for_const3;
    sc_signal< sc_lv<4> > ap_var_for_const4;
    sc_signal< sc_lv<4> > ap_var_for_const7;


    // Module declarations
    mean_value_accel(sc_module_name name);
    SC_HAS_PROCESS(mean_value_accel);

    ~mean_value_accel();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    mean_value_accel_in_r_m_axi<32,32,5,16,16,16,16,C_M_AXI_IN_R_ID_WIDTH,C_M_AXI_IN_R_ADDR_WIDTH,C_M_AXI_IN_R_DATA_WIDTH,C_M_AXI_IN_R_AWUSER_WIDTH,C_M_AXI_IN_R_ARUSER_WIDTH,C_M_AXI_IN_R_WUSER_WIDTH,C_M_AXI_IN_R_RUSER_WIDTH,C_M_AXI_IN_R_BUSER_WIDTH,C_M_AXI_IN_R_USER_VALUE,C_M_AXI_IN_R_PROT_VALUE,C_M_AXI_IN_R_CACHE_VALUE>* mean_value_accel_in_r_m_axi_U;
    mean_value_accel_out_r_m_axi<32,32,5,16,16,16,16,C_M_AXI_OUT_R_ID_WIDTH,C_M_AXI_OUT_R_ADDR_WIDTH,C_M_AXI_OUT_R_DATA_WIDTH,C_M_AXI_OUT_R_AWUSER_WIDTH,C_M_AXI_OUT_R_ARUSER_WIDTH,C_M_AXI_OUT_R_WUSER_WIDTH,C_M_AXI_OUT_R_RUSER_WIDTH,C_M_AXI_OUT_R_BUSER_WIDTH,C_M_AXI_OUT_R_USER_VALUE,C_M_AXI_OUT_R_PROT_VALUE,C_M_AXI_OUT_R_CACHE_VALUE>* mean_value_accel_out_r_m_axi_U;
    mean_value_accel_bkb* local_buffer_U;
    mean_value_accel_cud<1,2,34,32,65>* mean_value_accel_cud_U1;
    sc_signal< sc_logic > ap_rst_n_inv;
    sc_signal< sc_lv<30> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > in_r_blk_n_AR;
    sc_signal< sc_logic > in_r_blk_n_R;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > tmp_reg_640;
    sc_signal< sc_logic > out_r_blk_n_AW;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > out_r_blk_n_W;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter2;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<1> > tmp_13_reg_779;
    sc_signal< sc_lv<1> > ap_reg_pp1_iter1_tmp_13_reg_779;
    sc_signal< sc_logic > out_r_blk_n_B;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > in_r_AWREADY;
    sc_signal< sc_logic > in_r_WREADY;
    sc_signal< sc_logic > in_r_ARVALID;
    sc_signal< sc_logic > in_r_ARREADY;
    sc_signal< sc_logic > in_r_RVALID;
    sc_signal< sc_logic > in_r_RREADY;
    sc_signal< sc_lv<32> > in_r_RDATA;
    sc_signal< sc_logic > in_r_RLAST;
    sc_signal< sc_lv<1> > in_r_RID;
    sc_signal< sc_lv<1> > in_r_RUSER;
    sc_signal< sc_lv<2> > in_r_RRESP;
    sc_signal< sc_logic > in_r_BVALID;
    sc_signal< sc_lv<2> > in_r_BRESP;
    sc_signal< sc_lv<1> > in_r_BID;
    sc_signal< sc_lv<1> > in_r_BUSER;
    sc_signal< sc_logic > out_r_AWVALID;
    sc_signal< sc_logic > out_r_AWREADY;
    sc_signal< sc_logic > out_r_WVALID;
    sc_signal< sc_logic > out_r_WREADY;
    sc_signal< sc_logic > out_r_ARREADY;
    sc_signal< sc_logic > out_r_RVALID;
    sc_signal< sc_lv<32> > out_r_RDATA;
    sc_signal< sc_logic > out_r_RLAST;
    sc_signal< sc_lv<1> > out_r_RID;
    sc_signal< sc_lv<1> > out_r_RUSER;
    sc_signal< sc_lv<2> > out_r_RRESP;
    sc_signal< sc_logic > out_r_BVALID;
    sc_signal< sc_logic > out_r_BREADY;
    sc_signal< sc_lv<2> > out_r_BRESP;
    sc_signal< sc_lv<1> > out_r_BID;
    sc_signal< sc_lv<1> > out_r_BUSER;
    sc_signal< sc_lv<31> > i_reg_245;
    sc_signal< sc_lv<31> > i2_reg_268;
    sc_signal< sc_lv<32> > local_buffer_q0;
    sc_signal< sc_lv<32> > reg_303;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<32> > local_buffer_q1;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< bool > ap_block_state27_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state28_pp1_stage0_iter1;
    sc_signal< bool > ap_block_state29_pp1_stage0_iter2;
    sc_signal< sc_logic > ap_sig_ioackin_out_r_WREADY;
    sc_signal< bool > ap_block_state29_io;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<32> > grp_fu_279_p2;
    sc_signal< sc_lv<32> > reg_309;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<31> > reg_313;
    sc_signal< sc_logic > ap_sig_ioackin_in_r_ARREADY;
    sc_signal< sc_lv<32> > out_addr_reg_630;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > i_cast_fu_374_p1;
    sc_signal< sc_lv<32> > i_cast_reg_635;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state9_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state10_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > ap_reg_pp0_iter1_i_cast_reg_635;
    sc_signal< sc_lv<1> > tmp_fu_378_p2;
    sc_signal< sc_lv<1> > ap_reg_pp0_iter1_tmp_reg_640;
    sc_signal< sc_lv<31> > i_1_fu_383_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<32> > in_addr_read_reg_649;
    sc_signal< sc_lv<32> > tmp_2_fu_389_p2;
    sc_signal< sc_lv<32> > tmp_2_reg_654;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<32> > i1_cast_fu_394_p1;
    sc_signal< sc_lv<32> > i1_cast_reg_665;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<13> > tmp_26_fu_403_p1;
    sc_signal< sc_lv<13> > tmp_26_reg_673;
    sc_signal< sc_lv<1> > tmp_3_fu_398_p2;
    sc_signal< sc_lv<31> > i_2_fu_418_p2;
    sc_signal< sc_lv<31> > i_2_reg_688;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<32> > local_buffer_load_2_reg_703;
    sc_signal< sc_lv<32> > tmp_7_fu_434_p2;
    sc_signal< sc_lv<32> > tmp_7_reg_708;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<1> > tmp_27_reg_713;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<65> > grp_fu_451_p2;
    sc_signal< sc_lv<65> > mul_reg_724;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<31> > tmp_29_reg_729;
    sc_signal< sc_lv<32> > tmp_20_fu_486_p1;
    sc_signal< sc_lv<32> > tmp_20_reg_734;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<32> > neg_ti_fu_496_p2;
    sc_signal< sc_lv<32> > neg_ti_reg_739;
    sc_signal< sc_lv<1> > tmp_30_reg_744;
    sc_signal< sc_lv<32> > p_neg_t5_fu_522_p2;
    sc_signal< sc_lv<32> > p_neg_t5_reg_749;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<13> > tmp_31_fu_539_p1;
    sc_signal< sc_lv<13> > tmp_31_reg_759;
    sc_signal< sc_lv<1> > tmp_32_reg_769;
    sc_signal< sc_lv<32> > p_neg_t_fu_557_p2;
    sc_signal< sc_lv<32> > p_neg_t_reg_774;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<1> > tmp_13_fu_588_p2;
    sc_signal< sc_lv<31> > i_3_fu_593_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state8;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_sig_ioackin_out_r_AWREADY;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state27;
    sc_signal< sc_lv<11> > local_buffer_address0;
    sc_signal< sc_logic > local_buffer_ce0;
    sc_signal< sc_logic > local_buffer_we0;
    sc_signal< sc_lv<32> > local_buffer_d0;
    sc_signal< sc_lv<11> > local_buffer_address1;
    sc_signal< sc_logic > local_buffer_ce1;
    sc_signal< sc_logic > local_buffer_we1;
    sc_signal< sc_lv<32> > local_buffer_d1;
    sc_signal< sc_lv<31> > i1_reg_256;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<32> > tmp_4_cast_fu_413_p1;
    sc_signal< sc_lv<32> > i_2_cast_fu_424_p1;
    sc_signal< sc_lv<32> > tmp_9_cast_fu_513_p1;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<32> > tmp_5_cast_fu_548_p1;
    sc_signal< sc_lv<32> > tmp_12_cast_fu_579_p1;
    sc_signal< sc_lv<32> > tmp_14_cast_fu_609_p1;
    sc_signal< sc_lv<32> > tmp_18_fu_343_p1;
    sc_signal< sc_lv<32> > tmp_6_fu_364_p1;
    sc_signal< sc_logic > ap_reg_ioackin_in_r_ARREADY;
    sc_signal< sc_logic > ap_reg_ioackin_out_r_AWREADY;
    sc_signal< sc_logic > ap_reg_ioackin_out_r_WREADY;
    sc_signal< bool > ap_block_pp1_stage0_01001;
    sc_signal< sc_lv<32> > tmp_8_fu_502_p3;
    sc_signal< sc_lv<32> > tmp_11_fu_567_p3;
    sc_signal< sc_lv<32> > grp_fu_317_p2;
    sc_signal< sc_lv<30> > in_offset1_fu_333_p4;
    sc_signal< sc_lv<30> > out_offset3_fu_354_p4;
    sc_signal< sc_lv<13> > tmp_4_fu_407_p2;
    sc_signal< sc_lv<32> > tmp1_fu_429_p2;
    sc_signal< sc_lv<34> > grp_fu_451_p0;
    sc_signal< sc_lv<65> > neg_mul_fu_467_p2;
    sc_signal< sc_lv<31> > tmp_28_fu_472_p4;
    sc_signal< sc_lv<32> > tmp_19_fu_482_p1;
    sc_signal< sc_lv<32> > tmp_21_fu_489_p3;
    sc_signal< sc_lv<13> > tmp_9_fu_508_p2;
    sc_signal< sc_lv<31> > grp_fu_323_p4;
    sc_signal< sc_lv<32> > tmp_22_fu_518_p1;
    sc_signal< sc_lv<32> > tmp_23_fu_528_p1;
    sc_signal< sc_lv<13> > tmp_5_fu_542_p2;
    sc_signal< sc_lv<32> > tmp_24_fu_553_p1;
    sc_signal< sc_lv<32> > tmp_25_fu_563_p1;
    sc_signal< sc_lv<13> > tmp_12_fu_574_p2;
    sc_signal< sc_lv<32> > i2_cast_fu_584_p1;
    sc_signal< sc_lv<13> > tmp_33_fu_599_p1;
    sc_signal< sc_lv<13> > tmp_14_fu_603_p2;
    sc_signal< sc_lv<30> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<30> ap_ST_fsm_state1;
    static const sc_lv<30> ap_ST_fsm_state2;
    static const sc_lv<30> ap_ST_fsm_state3;
    static const sc_lv<30> ap_ST_fsm_state4;
    static const sc_lv<30> ap_ST_fsm_state5;
    static const sc_lv<30> ap_ST_fsm_state6;
    static const sc_lv<30> ap_ST_fsm_state7;
    static const sc_lv<30> ap_ST_fsm_pp0_stage0;
    static const sc_lv<30> ap_ST_fsm_state11;
    static const sc_lv<30> ap_ST_fsm_state12;
    static const sc_lv<30> ap_ST_fsm_state13;
    static const sc_lv<30> ap_ST_fsm_state14;
    static const sc_lv<30> ap_ST_fsm_state15;
    static const sc_lv<30> ap_ST_fsm_state16;
    static const sc_lv<30> ap_ST_fsm_state17;
    static const sc_lv<30> ap_ST_fsm_state18;
    static const sc_lv<30> ap_ST_fsm_state19;
    static const sc_lv<30> ap_ST_fsm_state20;
    static const sc_lv<30> ap_ST_fsm_state21;
    static const sc_lv<30> ap_ST_fsm_state22;
    static const sc_lv<30> ap_ST_fsm_state23;
    static const sc_lv<30> ap_ST_fsm_state24;
    static const sc_lv<30> ap_ST_fsm_state25;
    static const sc_lv<30> ap_ST_fsm_state26;
    static const sc_lv<30> ap_ST_fsm_pp1_stage0;
    static const sc_lv<30> ap_ST_fsm_state30;
    static const sc_lv<30> ap_ST_fsm_state31;
    static const sc_lv<30> ap_ST_fsm_state32;
    static const sc_lv<30> ap_ST_fsm_state33;
    static const sc_lv<30> ap_ST_fsm_state34;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1D;
    static const int C_M_AXI_IN_R_USER_VALUE;
    static const int C_M_AXI_IN_R_PROT_VALUE;
    static const int C_M_AXI_IN_R_CACHE_VALUE;
    static const int C_M_AXI_DATA_WIDTH;
    static const int C_M_AXI_OUT_R_USER_VALUE;
    static const int C_M_AXI_OUT_R_PROT_VALUE;
    static const int C_M_AXI_OUT_R_CACHE_VALUE;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_400;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_FFFFFFFF;
    static const sc_lv<13> ap_const_lv13_1FFF;
    static const sc_lv<65> ap_const_lv65_155555556;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<65> ap_const_lv65_0;
    static const sc_lv<13> ap_const_lv13_400;
    static const sc_lv<13> ap_const_lv13_1FFE;
    static const sc_lv<13> ap_const_lv13_3FF;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const5();
    void thread_ap_var_for_const6();
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const2();
    void thread_ap_var_for_const3();
    void thread_ap_var_for_const4();
    void thread_ap_var_for_const7();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_01001();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_state10_pp0_stage0_iter2();
    void thread_ap_block_state27_pp1_stage0_iter0();
    void thread_ap_block_state28_pp1_stage0_iter1();
    void thread_ap_block_state29_io();
    void thread_ap_block_state29_pp1_stage0_iter2();
    void thread_ap_block_state8_pp0_stage0_iter0();
    void thread_ap_block_state9_pp0_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state8();
    void thread_ap_condition_pp1_exit_iter0_state27();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_ready();
    void thread_ap_rst_n_inv();
    void thread_ap_sig_ioackin_in_r_ARREADY();
    void thread_ap_sig_ioackin_out_r_AWREADY();
    void thread_ap_sig_ioackin_out_r_WREADY();
    void thread_grp_fu_279_p2();
    void thread_grp_fu_317_p2();
    void thread_grp_fu_323_p4();
    void thread_grp_fu_451_p0();
    void thread_i1_cast_fu_394_p1();
    void thread_i2_cast_fu_584_p1();
    void thread_i_1_fu_383_p2();
    void thread_i_2_cast_fu_424_p1();
    void thread_i_2_fu_418_p2();
    void thread_i_3_fu_593_p2();
    void thread_i_cast_fu_374_p1();
    void thread_in_offset1_fu_333_p4();
    void thread_in_r_ARVALID();
    void thread_in_r_RREADY();
    void thread_in_r_blk_n_AR();
    void thread_in_r_blk_n_R();
    void thread_local_buffer_address0();
    void thread_local_buffer_address1();
    void thread_local_buffer_ce0();
    void thread_local_buffer_ce1();
    void thread_local_buffer_d0();
    void thread_local_buffer_d1();
    void thread_local_buffer_we0();
    void thread_local_buffer_we1();
    void thread_neg_mul_fu_467_p2();
    void thread_neg_ti_fu_496_p2();
    void thread_out_offset3_fu_354_p4();
    void thread_out_r_AWVALID();
    void thread_out_r_BREADY();
    void thread_out_r_WVALID();
    void thread_out_r_blk_n_AW();
    void thread_out_r_blk_n_B();
    void thread_out_r_blk_n_W();
    void thread_p_neg_t5_fu_522_p2();
    void thread_p_neg_t_fu_557_p2();
    void thread_tmp1_fu_429_p2();
    void thread_tmp_11_fu_567_p3();
    void thread_tmp_12_cast_fu_579_p1();
    void thread_tmp_12_fu_574_p2();
    void thread_tmp_13_fu_588_p2();
    void thread_tmp_14_cast_fu_609_p1();
    void thread_tmp_14_fu_603_p2();
    void thread_tmp_18_fu_343_p1();
    void thread_tmp_19_fu_482_p1();
    void thread_tmp_20_fu_486_p1();
    void thread_tmp_21_fu_489_p3();
    void thread_tmp_22_fu_518_p1();
    void thread_tmp_23_fu_528_p1();
    void thread_tmp_24_fu_553_p1();
    void thread_tmp_25_fu_563_p1();
    void thread_tmp_26_fu_403_p1();
    void thread_tmp_28_fu_472_p4();
    void thread_tmp_2_fu_389_p2();
    void thread_tmp_31_fu_539_p1();
    void thread_tmp_33_fu_599_p1();
    void thread_tmp_3_fu_398_p2();
    void thread_tmp_4_cast_fu_413_p1();
    void thread_tmp_4_fu_407_p2();
    void thread_tmp_5_cast_fu_548_p1();
    void thread_tmp_5_fu_542_p2();
    void thread_tmp_6_fu_364_p1();
    void thread_tmp_7_fu_434_p2();
    void thread_tmp_8_fu_502_p3();
    void thread_tmp_9_cast_fu_513_p1();
    void thread_tmp_9_fu_508_p2();
    void thread_tmp_fu_378_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
