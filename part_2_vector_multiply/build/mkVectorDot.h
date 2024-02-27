/*
 * Generated by Bluespec Compiler, version 2023.07 (build 0eb551d)
 * 
 * On Tue Feb 27 09:44:13 CET 2024
 * 
 */

/* Generation options: */
#ifndef __mkVectorDot_h__
#define __mkVectorDot_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"


/* Class declaration for the mkVectorDot module */
class MOD_mkVectorDot : public Module {
 
 /* Clock handles */
 private:
  tClock __clk_handle_0;
 
 /* Clock gate handles */
 public:
  tUInt8 *clk_gate[0];
 
 /* Instantiation parameters */
 public:
 
 /* Module state */
 public:
  MOD_BRAM<tUInt8,tUInt32,tUInt8> INST_a_memory;
  MOD_Reg<tUInt8> INST_a_serverAdapter_cnt;
  MOD_Wire<tUInt8> INST_a_serverAdapter_cnt_1;
  MOD_Wire<tUInt8> INST_a_serverAdapter_cnt_2;
  MOD_Wire<tUInt8> INST_a_serverAdapter_cnt_3;
  MOD_Reg<tUInt8> INST_a_serverAdapter_outData_beforeDeq;
  MOD_Reg<tUInt8> INST_a_serverAdapter_outData_beforeEnq;
  MOD_Wire<tUInt8> INST_a_serverAdapter_outData_dequeueing;
  MOD_Wire<tUInt32> INST_a_serverAdapter_outData_enqw;
  MOD_Fifo<tUInt32> INST_a_serverAdapter_outData_ff;
  MOD_Reg<tUInt8> INST_a_serverAdapter_s1;
  MOD_Wire<tUInt8> INST_a_serverAdapter_s1_1;
  MOD_Wire<tUInt8> INST_a_serverAdapter_writeWithResp;
  MOD_BRAM<tUInt8,tUInt32,tUInt8> INST_b_memory;
  MOD_Reg<tUInt8> INST_b_serverAdapter_cnt;
  MOD_Wire<tUInt8> INST_b_serverAdapter_cnt_1;
  MOD_Wire<tUInt8> INST_b_serverAdapter_cnt_2;
  MOD_Wire<tUInt8> INST_b_serverAdapter_cnt_3;
  MOD_Reg<tUInt8> INST_b_serverAdapter_outData_beforeDeq;
  MOD_Reg<tUInt8> INST_b_serverAdapter_outData_beforeEnq;
  MOD_Wire<tUInt8> INST_b_serverAdapter_outData_dequeueing;
  MOD_Wire<tUInt32> INST_b_serverAdapter_outData_enqw;
  MOD_Fifo<tUInt32> INST_b_serverAdapter_outData_ff;
  MOD_Reg<tUInt8> INST_b_serverAdapter_s1;
  MOD_Wire<tUInt8> INST_b_serverAdapter_s1_1;
  MOD_Wire<tUInt8> INST_b_serverAdapter_writeWithResp;
  MOD_Reg<tUInt8> INST_dim;
  MOD_Reg<tUInt8> INST_done_a;
  MOD_Reg<tUInt8> INST_done_all;
  MOD_Reg<tUInt8> INST_done_b;
  MOD_Reg<tUInt8> INST_i;
  MOD_Reg<tUInt32> INST_output_res;
  MOD_Reg<tUInt8> INST_pos_a;
  MOD_Reg<tUInt8> INST_pos_b;
  MOD_Reg<tUInt8> INST_pos_out;
  MOD_Reg<tUInt8> INST_ready_start;
  MOD_Reg<tUInt8> INST_req_a_ready;
  MOD_Reg<tUInt8> INST_req_b_ready;
 
 /* Constructor */
 public:
  MOD_mkVectorDot(tSimStateHdl simHdl, char const *name, Module *parent);
 
 /* Symbol init methods */
 private:
  void init_symbols_0();
 
 /* Reset signal definitions */
 private:
  tUInt8 PORT_RST_N;
 
 /* Port definitions */
 public:
 
 /* Publicly accessible definitions */
 public:
  tUInt8 DEF_done_all__h3800;
  tUInt8 DEF_ready_start__h3379;
  tUInt8 DEF_b__h2343;
  tUInt8 DEF_b__h870;
  tUInt8 DEF_b_serverAdapter_s1___d84;
  tUInt8 DEF_a_serverAdapter_s1___d35;
  tUInt8 DEF_b_serverAdapter_cnt_3_whas____d63;
  tUInt8 DEF_b_serverAdapter_cnt_2_whas____d61;
  tUInt8 DEF_b_serverAdapter_cnt_1_whas____d60;
  tUInt8 DEF_b_serverAdapter_outData_ff_i_notEmpty____d54;
  tUInt8 DEF_a_serverAdapter_cnt_3_whas____d13;
  tUInt8 DEF_a_serverAdapter_cnt_2_whas____d11;
  tUInt8 DEF_a_serverAdapter_cnt_1_whas____d10;
  tUInt8 DEF_a_serverAdapter_outData_ff_i_notEmpty____d4;
  tUInt8 DEF_b_serverAdapter_s1_4_BIT_0___d85;
  tUInt8 DEF_a_serverAdapter_s1_5_BIT_0___d36;
 
 /* Local definitions */
 private:
  tUInt32 DEF_x_wget__h1852;
  tUInt32 DEF_x_wget__h376;
  tUInt32 DEF_x__h4049;
  tUInt8 DEF_x__h4101;
  tUInt8 DEF_x__h3712;
  tUInt8 DEF_x__h3707;
  tUInt32 DEF_x__h1950;
  tUInt32 DEF_x__h474;
  tUInt8 DEF__0_CONCAT_DONTCARE___d26;
  tUInt8 DEF_y__h3710;
  tUInt8 DEF_x__h3711;
  tUInt8 DEF_y__h3706;
 
 /* Rules */
 public:
  void RL_a_serverAdapter_outData_enqueue();
  void RL_a_serverAdapter_outData_dequeue();
  void RL_a_serverAdapter_cnt_finalAdd();
  void RL_a_serverAdapter_s1__dreg_update();
  void RL_a_serverAdapter_stageReadResponseAlways();
  void RL_a_serverAdapter_moveToOutFIFO();
  void RL_a_serverAdapter_overRun();
  void RL_b_serverAdapter_outData_enqueue();
  void RL_b_serverAdapter_outData_dequeue();
  void RL_b_serverAdapter_cnt_finalAdd();
  void RL_b_serverAdapter_s1__dreg_update();
  void RL_b_serverAdapter_stageReadResponseAlways();
  void RL_b_serverAdapter_moveToOutFIFO();
  void RL_b_serverAdapter_overRun();
  void RL_process_a();
  void RL_process_b();
  void RL_mult_inputs();
 
 /* Methods */
 public:
  void METH_start(tUInt8 ARG_start_dim_in, tUInt8 ARG_start_i);
  tUInt8 METH_RDY_start();
  tUInt32 METH_response();
  tUInt8 METH_RDY_response();
 
 /* Reset routines */
 public:
  void reset_RST_N(tUInt8 ARG_rst_in);
 
 /* Static handles to reset routines */
 public:
 
 /* Pointers to reset fns in parent module for asserting output resets */
 private:
 
 /* Functions for the parent module to register its reset fns */
 public:
 
 /* Functions to set the elaborated clock id */
 public:
  void set_clk_0(char const *s);
 
 /* State dumping routine */
 public:
  void dump_state(unsigned int indent);
 
 /* VCD dumping routines */
 public:
  unsigned int dump_VCD_defs(unsigned int levels);
  void dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mkVectorDot &backing);
  void vcd_defs(tVCDDumpType dt, MOD_mkVectorDot &backing);
  void vcd_prims(tVCDDumpType dt, MOD_mkVectorDot &backing);
};

#endif /* ifndef __mkVectorDot_h__ */
