/*
 * Generated by Bluespec Compiler, version 2023.07 (build 0eb551d)
 * 
 * On Tue Feb 27 09:45:50 CET 2024
 * 
 */
#include "bluesim_primitives.h"
#include "model_mkTb.h"

#include <cstdlib>
#include <time.h>
#include "bluesim_kernel_api.h"
#include "bs_vcd.h"
#include "bs_reset.h"


/* Constructor */
MODEL_mkTb::MODEL_mkTb()
{
  mkTb_instance = NULL;
}

/* Function for creating a new model */
void * new_MODEL_mkTb()
{
  MODEL_mkTb *model = new MODEL_mkTb();
  return (void *)(model);
}

/* Schedule functions */

static void schedule_posedge_CLK(tSimStateHdl simHdl, void *instance_ptr)
       {
	 MOD_mkTb &INST_top = *((MOD_mkTb *)(instance_ptr));
	 tUInt8 DEF_INST_top_INST_mma_DEF_a_serverAdapter_s1_5_BIT_1___d40;
	 tUInt8 DEF_INST_top_INST_mma_DEF_b_serverAdapter_s1_4_BIT_1___d89;
	 tUInt8 DEF_INST_top_INST_mma_DEF_done_a__h3381;
	 tUInt8 DEF_INST_top_INST_mma_DEF_done_b__h3613;
	 tUInt8 DEF_INST_top_INST_mma_DEF_req_a_ready__h3385;
	 tUInt8 DEF_INST_top_INST_mma_DEF_req_b_ready__h3617;
	 tUInt8 DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_ff_i_notFull____d38;
	 tUInt8 DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_beforeDeq_read____d45;
	 tUInt8 DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_enqw_whas____d1;
	 tUInt8 DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_dequeueing_whas____d2;
	 tUInt8 DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_ff_i_notFull____d87;
	 tUInt8 DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_beforeDeq_read____d94;
	 tUInt8 DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_enqw_whas____d51;
	 tUInt8 DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_dequeueing_whas____d52;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_outData_enqueue;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_outData_enqueue;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_outData_dequeue;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_outData_dequeue;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_cnt_finalAdd;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_cnt_finalAdd;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_s1__dreg_update;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_s1__dreg_update;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_stageReadResponseAlways;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_stageReadResponseAlways;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_moveToOutFIFO;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_moveToOutFIFO;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_overRun;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_overRun;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_outData_enqueue;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_outData_enqueue;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_outData_dequeue;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_outData_dequeue;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_cnt_finalAdd;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_cnt_finalAdd;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_s1__dreg_update;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_s1__dreg_update;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_stageReadResponseAlways;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_stageReadResponseAlways;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_moveToOutFIFO;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_moveToOutFIFO;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_overRun;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_overRun;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_process_a;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_process_a;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_process_b;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_process_b;
	 tUInt8 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_mult_inputs;
	 tUInt8 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_mult_inputs;
	 tUInt8 DEF_INST_top_DEF_going__h371;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_inc_ctr;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_inc_ctr;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_start;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_start;
	 tUInt8 DEF_INST_top_DEF_CAN_FIRE_RL_resp;
	 tUInt8 DEF_INST_top_DEF_WILL_FIRE_RL_resp;
	 DEF_INST_top_DEF_CAN_FIRE_RL_inc_ctr = (tUInt8)1u;
	 DEF_INST_top_DEF_WILL_FIRE_RL_inc_ctr = DEF_INST_top_DEF_CAN_FIRE_RL_inc_ctr;
	 DEF_INST_top_DEF_going__h371 = INST_top.INST_going.METH_read();
	 DEF_INST_top_DEF_CAN_FIRE_RL_resp = INST_top.INST_mma.METH_RDY_response() && !DEF_INST_top_DEF_going__h371;
	 DEF_INST_top_DEF_WILL_FIRE_RL_resp = DEF_INST_top_DEF_CAN_FIRE_RL_resp;
	 DEF_INST_top_DEF_CAN_FIRE_RL_start = INST_top.INST_mma.METH_RDY_start() && DEF_INST_top_DEF_going__h371;
	 DEF_INST_top_DEF_WILL_FIRE_RL_start = DEF_INST_top_DEF_CAN_FIRE_RL_start;
	 INST_top.INST_mma.DEF_a_serverAdapter_s1___d35 = INST_top.INST_mma.INST_a_serverAdapter_s1.METH_read();
	 DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_ff_i_notFull____d38 = INST_top.INST_mma.INST_a_serverAdapter_outData_ff.METH_i_notFull();
	 DEF_INST_top_INST_mma_DEF_a_serverAdapter_s1_5_BIT_1___d40 = (tUInt8)((INST_top.INST_mma.DEF_a_serverAdapter_s1___d35) >> 1u);
	 INST_top.INST_mma.DEF_a_serverAdapter_s1_5_BIT_0___d36 = (tUInt8)((tUInt8)1u & (INST_top.INST_mma.DEF_a_serverAdapter_s1___d35));
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_moveToOutFIFO = (!(INST_top.INST_mma.DEF_a_serverAdapter_s1_5_BIT_0___d36) || DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_ff_i_notFull____d38) && DEF_INST_top_INST_mma_DEF_a_serverAdapter_s1_5_BIT_1___d40;
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_moveToOutFIFO = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_moveToOutFIFO;
	 DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_beforeDeq_read____d45 = INST_top.INST_mma.INST_a_serverAdapter_outData_beforeDeq.METH_read();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_overRun = DEF_INST_top_INST_mma_DEF_a_serverAdapter_s1_5_BIT_1___d40 && ((!INST_top.INST_mma.INST_a_serverAdapter_outData_beforeEnq.METH_read() || !DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_beforeDeq_read____d45) || !DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_ff_i_notFull____d38);
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_overRun = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_overRun;
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_s1__dreg_update = (tUInt8)1u;
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_s1__dreg_update = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_s1__dreg_update;
	 INST_top.INST_mma.DEF_b_serverAdapter_s1___d84 = INST_top.INST_mma.INST_b_serverAdapter_s1.METH_read();
	 DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_ff_i_notFull____d87 = INST_top.INST_mma.INST_b_serverAdapter_outData_ff.METH_i_notFull();
	 DEF_INST_top_INST_mma_DEF_b_serverAdapter_s1_4_BIT_1___d89 = (tUInt8)((INST_top.INST_mma.DEF_b_serverAdapter_s1___d84) >> 1u);
	 INST_top.INST_mma.DEF_b_serverAdapter_s1_4_BIT_0___d85 = (tUInt8)((tUInt8)1u & (INST_top.INST_mma.DEF_b_serverAdapter_s1___d84));
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_moveToOutFIFO = (!(INST_top.INST_mma.DEF_b_serverAdapter_s1_4_BIT_0___d85) || DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_ff_i_notFull____d87) && DEF_INST_top_INST_mma_DEF_b_serverAdapter_s1_4_BIT_1___d89;
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_moveToOutFIFO = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_moveToOutFIFO;
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_s1__dreg_update = (tUInt8)1u;
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_s1__dreg_update = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_s1__dreg_update;
	 DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_beforeDeq_read____d94 = INST_top.INST_mma.INST_b_serverAdapter_outData_beforeDeq.METH_read();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_overRun = DEF_INST_top_INST_mma_DEF_b_serverAdapter_s1_4_BIT_1___d89 && ((!INST_top.INST_mma.INST_b_serverAdapter_outData_beforeEnq.METH_read() || !DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_beforeDeq_read____d94) || !DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_ff_i_notFull____d87);
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_overRun = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_overRun;
	 INST_top.INST_mma.DEF_ready_start__h3379 = INST_top.INST_mma.INST_ready_start.METH_read();
	 INST_top.INST_mma.DEF_b__h870 = INST_top.INST_mma.INST_a_serverAdapter_cnt.METH_read();
	 DEF_INST_top_INST_mma_DEF_req_a_ready__h3385 = INST_top.INST_mma.INST_req_a_ready.METH_read();
	 DEF_INST_top_INST_mma_DEF_done_a__h3381 = INST_top.INST_mma.INST_done_a.METH_read();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_process_a = primSLT8(1u,
								    3u,
								    (tUInt8)(INST_top.INST_mma.DEF_b__h870),
								    3u,
								    (tUInt8)3u) && ((INST_top.INST_mma.DEF_ready_start__h3379 && !DEF_INST_top_INST_mma_DEF_done_a__h3381) && !DEF_INST_top_INST_mma_DEF_req_a_ready__h3385);
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_process_a = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_process_a;
	 INST_top.INST_mma.DEF_b__h2343 = INST_top.INST_mma.INST_b_serverAdapter_cnt.METH_read();
	 DEF_INST_top_INST_mma_DEF_req_b_ready__h3617 = INST_top.INST_mma.INST_req_b_ready.METH_read();
	 DEF_INST_top_INST_mma_DEF_done_b__h3613 = INST_top.INST_mma.INST_done_b.METH_read();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_process_b = primSLT8(1u,
								    3u,
								    (tUInt8)(INST_top.INST_mma.DEF_b__h2343),
								    3u,
								    (tUInt8)3u) && ((INST_top.INST_mma.DEF_ready_start__h3379 && !DEF_INST_top_INST_mma_DEF_done_b__h3613) && !DEF_INST_top_INST_mma_DEF_req_b_ready__h3617);
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_process_b = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_process_b;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_inc_ctr)
	   INST_top.RL_inc_ctr();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_overRun)
	   INST_top.INST_mma.RL_a_serverAdapter_overRun();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_moveToOutFIFO)
	   INST_top.INST_mma.RL_a_serverAdapter_moveToOutFIFO();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_overRun)
	   INST_top.INST_mma.RL_b_serverAdapter_overRun();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_moveToOutFIFO)
	   INST_top.INST_mma.RL_b_serverAdapter_moveToOutFIFO();
	 INST_top.INST_mma.DEF_done_all__h3800 = INST_top.INST_mma.INST_done_all.METH_read();
	 DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_enqw_whas____d51 = INST_top.INST_mma.INST_b_serverAdapter_outData_enqw.METH_whas();
	 INST_top.INST_mma.DEF_b_serverAdapter_outData_ff_i_notEmpty____d54 = INST_top.INST_mma.INST_b_serverAdapter_outData_ff.METH_i_notEmpty();
	 DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_enqw_whas____d1 = INST_top.INST_mma.INST_a_serverAdapter_outData_enqw.METH_whas();
	 INST_top.INST_mma.DEF_a_serverAdapter_outData_ff_i_notEmpty____d4 = INST_top.INST_mma.INST_a_serverAdapter_outData_ff.METH_i_notEmpty();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_mult_inputs = ((DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_beforeDeq_read____d45 && (INST_top.INST_mma.DEF_a_serverAdapter_outData_ff_i_notEmpty____d4 || DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_enqw_whas____d1)) && (DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_beforeDeq_read____d94 && (INST_top.INST_mma.DEF_b_serverAdapter_outData_ff_i_notEmpty____d54 || DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_enqw_whas____d51))) && ((DEF_INST_top_INST_mma_DEF_req_a_ready__h3385 && DEF_INST_top_INST_mma_DEF_req_b_ready__h3617) && !(INST_top.INST_mma.DEF_done_all__h3800));
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_mult_inputs = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_mult_inputs;
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_mult_inputs)
	   INST_top.INST_mma.RL_mult_inputs();
	 DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_dequeueing_whas____d2 = INST_top.INST_mma.INST_a_serverAdapter_outData_dequeueing.METH_whas();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_outData_dequeue = DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_dequeueing_whas____d2 && INST_top.INST_mma.DEF_a_serverAdapter_outData_ff_i_notEmpty____d4;
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_outData_dequeue = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_outData_dequeue;
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_outData_enqueue = DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_enqw_whas____d1 && (!DEF_INST_top_INST_mma_DEF_a_serverAdapter_outData_dequeueing_whas____d2 || INST_top.INST_mma.DEF_a_serverAdapter_outData_ff_i_notEmpty____d4);
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_outData_enqueue = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_outData_enqueue;
	 DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_dequeueing_whas____d52 = INST_top.INST_mma.INST_b_serverAdapter_outData_dequeueing.METH_whas();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_outData_dequeue = DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_dequeueing_whas____d52 && INST_top.INST_mma.DEF_b_serverAdapter_outData_ff_i_notEmpty____d54;
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_outData_dequeue = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_outData_dequeue;
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_outData_enqueue = DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_enqw_whas____d51 && (!DEF_INST_top_INST_mma_DEF_b_serverAdapter_outData_dequeueing_whas____d52 || INST_top.INST_mma.DEF_b_serverAdapter_outData_ff_i_notEmpty____d54);
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_outData_enqueue = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_outData_enqueue;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_start)
	   INST_top.RL_start();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_outData_dequeue)
	   INST_top.INST_mma.RL_a_serverAdapter_outData_dequeue();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_outData_enqueue)
	   INST_top.INST_mma.RL_a_serverAdapter_outData_enqueue();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_outData_dequeue)
	   INST_top.INST_mma.RL_b_serverAdapter_outData_dequeue();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_outData_enqueue)
	   INST_top.INST_mma.RL_b_serverAdapter_outData_enqueue();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_process_a)
	   INST_top.INST_mma.RL_process_a();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_stageReadResponseAlways = INST_top.INST_mma.INST_a_serverAdapter_writeWithResp.METH_whas();
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_stageReadResponseAlways = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_stageReadResponseAlways;
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_stageReadResponseAlways)
	   INST_top.INST_mma.RL_a_serverAdapter_stageReadResponseAlways();
	 INST_top.INST_mma.DEF_a_serverAdapter_cnt_3_whas____d13 = INST_top.INST_mma.INST_a_serverAdapter_cnt_3.METH_whas();
	 INST_top.INST_mma.DEF_a_serverAdapter_cnt_2_whas____d11 = INST_top.INST_mma.INST_a_serverAdapter_cnt_2.METH_whas();
	 INST_top.INST_mma.DEF_a_serverAdapter_cnt_1_whas____d10 = INST_top.INST_mma.INST_a_serverAdapter_cnt_1.METH_whas();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_cnt_finalAdd = (INST_top.INST_mma.DEF_a_serverAdapter_cnt_1_whas____d10 || INST_top.INST_mma.DEF_a_serverAdapter_cnt_2_whas____d11) || INST_top.INST_mma.DEF_a_serverAdapter_cnt_3_whas____d13;
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_cnt_finalAdd = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_a_serverAdapter_cnt_finalAdd;
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_cnt_finalAdd)
	   INST_top.INST_mma.RL_a_serverAdapter_cnt_finalAdd();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_a_serverAdapter_s1__dreg_update)
	   INST_top.INST_mma.RL_a_serverAdapter_s1__dreg_update();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_process_b)
	   INST_top.INST_mma.RL_process_b();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_stageReadResponseAlways = INST_top.INST_mma.INST_b_serverAdapter_writeWithResp.METH_whas();
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_stageReadResponseAlways = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_stageReadResponseAlways;
	 if (DEF_INST_top_DEF_WILL_FIRE_RL_resp)
	   INST_top.RL_resp();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_stageReadResponseAlways)
	   INST_top.INST_mma.RL_b_serverAdapter_stageReadResponseAlways();
	 INST_top.INST_mma.DEF_b_serverAdapter_cnt_3_whas____d63 = INST_top.INST_mma.INST_b_serverAdapter_cnt_3.METH_whas();
	 INST_top.INST_mma.DEF_b_serverAdapter_cnt_2_whas____d61 = INST_top.INST_mma.INST_b_serverAdapter_cnt_2.METH_whas();
	 INST_top.INST_mma.DEF_b_serverAdapter_cnt_1_whas____d60 = INST_top.INST_mma.INST_b_serverAdapter_cnt_1.METH_whas();
	 DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_cnt_finalAdd = (INST_top.INST_mma.DEF_b_serverAdapter_cnt_1_whas____d60 || INST_top.INST_mma.DEF_b_serverAdapter_cnt_2_whas____d61) || INST_top.INST_mma.DEF_b_serverAdapter_cnt_3_whas____d63;
	 DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_cnt_finalAdd = DEF_INST_top_INST_mma_DEF_CAN_FIRE_RL_b_serverAdapter_cnt_finalAdd;
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_cnt_finalAdd)
	   INST_top.INST_mma.RL_b_serverAdapter_cnt_finalAdd();
	 if (DEF_INST_top_INST_mma_DEF_WILL_FIRE_RL_b_serverAdapter_s1__dreg_update)
	   INST_top.INST_mma.RL_b_serverAdapter_s1__dreg_update();
	 INST_top.INST_mma.INST_b_serverAdapter_s1_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_b_serverAdapter_writeWithResp.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_b_serverAdapter_cnt_3.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_b_serverAdapter_cnt_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_b_serverAdapter_cnt_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_b_serverAdapter_outData_dequeueing.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_b_serverAdapter_outData_enqw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_b_memory.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_a_serverAdapter_s1_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_a_serverAdapter_writeWithResp.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_a_serverAdapter_cnt_3.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_a_serverAdapter_cnt_2.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_a_serverAdapter_cnt_1.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_a_serverAdapter_outData_dequeueing.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_a_serverAdapter_outData_enqw.clk((tUInt8)1u, (tUInt8)1u);
	 INST_top.INST_mma.INST_a_memory.clk((tUInt8)1u, (tUInt8)1u);
	 if (do_reset_ticks(simHdl))
	 {
	   INST_top.INST_mma.INST_a_serverAdapter_outData_ff.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_mma.INST_a_serverAdapter_cnt.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_a_serverAdapter_s1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_b_serverAdapter_outData_ff.rst_tick_clk((tUInt8)1u);
	   INST_top.INST_mma.INST_b_serverAdapter_cnt.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_b_serverAdapter_s1.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_output_res.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_dim.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_ready_start.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_pos_a.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_pos_b.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_pos_out.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_done_all.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_done_a.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_done_b.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_req_a_ready.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_req_b_ready.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_mma.INST_i.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_ctr.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_going.rst_tick__clk__1((tUInt8)1u);
	   INST_top.INST_i.rst_tick__clk__1((tUInt8)1u);
	 }
       };

/* Model creation/destruction functions */

void MODEL_mkTb::create_model(tSimStateHdl simHdl, bool master)
{
  sim_hdl = simHdl;
  init_reset_request_counters(sim_hdl);
  mkTb_instance = new MOD_mkTb(sim_hdl, "top", NULL);
  bk_get_or_define_clock(sim_hdl, "CLK");
  if (master)
  {
    bk_alter_clock(sim_hdl, bk_get_clock_by_name(sim_hdl, "CLK"), CLK_LOW, false, 0llu, 5llu, 5llu);
    bk_use_default_reset(sim_hdl);
  }
  bk_set_clock_event_fn(sim_hdl,
			bk_get_clock_by_name(sim_hdl, "CLK"),
			schedule_posedge_CLK,
			NULL,
			(tEdgeDirection)(POSEDGE));
  (mkTb_instance->INST_mma.INST_a_memory.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_a_serverAdapter_outData_ff.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_a_serverAdapter_outData_enqw.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_a_serverAdapter_outData_dequeueing.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_a_serverAdapter_cnt_1.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_a_serverAdapter_cnt_2.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_a_serverAdapter_cnt_3.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_a_serverAdapter_writeWithResp.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_a_serverAdapter_s1_1.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_b_memory.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_b_serverAdapter_outData_ff.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_b_serverAdapter_outData_enqw.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_b_serverAdapter_outData_dequeueing.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_b_serverAdapter_cnt_1.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_b_serverAdapter_cnt_2.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_b_serverAdapter_cnt_3.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_b_serverAdapter_writeWithResp.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.INST_b_serverAdapter_s1_1.set_clk_0)("CLK");
  (mkTb_instance->INST_mma.set_clk_0)("CLK");
  (mkTb_instance->set_clk_0)("CLK");
}
void MODEL_mkTb::destroy_model()
{
  delete mkTb_instance;
  mkTb_instance = NULL;
}
void MODEL_mkTb::reset_model(bool asserted)
{
  (mkTb_instance->reset_RST_N)(asserted ? (tUInt8)0u : (tUInt8)1u);
}
void * MODEL_mkTb::get_instance()
{
  return mkTb_instance;
}

/* Fill in version numbers */
void MODEL_mkTb::get_version(char const **name, char const **build)
{
  *name = "2023.07";
  *build = "0eb551d";
}

/* Get the model creation time */
time_t MODEL_mkTb::get_creation_time()
{
  
  /* Tue Feb 27 08:45:50 UTC 2024 */
  return 1709023550llu;
}

/* State dumping function */
void MODEL_mkTb::dump_state()
{
  (mkTb_instance->dump_state)(0u);
}

/* VCD dumping functions */
MOD_mkTb & mkTb_backing(tSimStateHdl simHdl)
{
  static MOD_mkTb *instance = NULL;
  if (instance == NULL)
  {
    vcd_set_backing_instance(simHdl, true);
    instance = new MOD_mkTb(simHdl, "top", NULL);
    vcd_set_backing_instance(simHdl, false);
  }
  return *instance;
}
void MODEL_mkTb::dump_VCD_defs()
{
  (mkTb_instance->dump_VCD_defs)(vcd_depth(sim_hdl));
}
void MODEL_mkTb::dump_VCD(tVCDDumpType dt)
{
  (mkTb_instance->dump_VCD)(dt, vcd_depth(sim_hdl), mkTb_backing(sim_hdl));
}
