// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VPipelineCPU.h for the primary calling header

#ifndef VERILATED_VPIPELINECPU___024ROOT_H_
#define VERILATED_VPIPELINECPU___024ROOT_H_  // guard

#include "verilated.h"

class VPipelineCPU__Syms;

class VPipelineCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(start,0,0);
    CData/*0:0*/ PipelineCPU__DOT__memRead_mem;
    CData/*0:0*/ PipelineCPU__DOT__BrEq;
    CData/*0:0*/ PipelineCPU__DOT__BrLT;
    CData/*3:0*/ PipelineCPU__DOT__ALUCtl;
    CData/*4:0*/ PipelineCPU__DOT__rd;
    CData/*0:0*/ PipelineCPU__DOT__ALUSrc_ID;
    CData/*0:0*/ PipelineCPU__DOT__regWrite_ID;
    CData/*1:0*/ PipelineCPU__DOT__PCSel_ID;
    CData/*1:0*/ PipelineCPU__DOT__ALUOp_ID;
    CData/*4:0*/ PipelineCPU__DOT__rs_WB_EX;
    CData/*4:0*/ PipelineCPU__DOT__rs_WB_mem;
    CData/*4:0*/ PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o;
    CData/*2:0*/ PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__ctrl_WB_o;
    CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v0;
    CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
    CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v1;
    CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
    CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v2;
    CData/*6:0*/ __Vdlyvdim0__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    CData/*7:0*/ __Vdlyvval__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    CData/*0:0*/ __Vdlyvset__PipelineCPU__DOT__m_DataMemory__DOT__data_memory__v4;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__start;
    CData/*0:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__memRead_mem;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ PipelineCPU__DOT__PC_INPUT;
    IData/*31:0*/ PipelineCPU__DOT__PC_IF;
    IData/*31:0*/ PipelineCPU__DOT__rd1;
    IData/*31:0*/ PipelineCPU__DOT__rd2;
    IData/*31:0*/ PipelineCPU__DOT__ALU_in;
    IData/*31:0*/ PipelineCPU__DOT__mem_data;
    IData/*31:0*/ PipelineCPU__DOT__PC_ID;
    IData/*31:0*/ PipelineCPU__DOT__PC_plus4_ID;
    IData/*31:0*/ PipelineCPU__DOT__inst_ID;
    IData/*31:0*/ PipelineCPU__DOT__imm_ID;
    IData/*31:0*/ PipelineCPU__DOT__PC_EX;
    IData/*31:0*/ PipelineCPU__DOT__rd1_EX;
    IData/*31:0*/ PipelineCPU__DOT__rd2_EX;
    IData/*31:0*/ PipelineCPU__DOT__imm_EX;
    IData/*31:0*/ PipelineCPU__DOT__ALU_result_EX;
    IData/*31:0*/ PipelineCPU__DOT__PC_mem;
    IData/*31:0*/ PipelineCPU__DOT__ALU_result_mem;
    IData/*31:0*/ PipelineCPU__DOT__rd2_mem;
    IData/*31:0*/ PipelineCPU__DOT__rd_mem;
    IData/*31:0*/ PipelineCPU__DOT__PC_WB;
    IData/*31:0*/ PipelineCPU__DOT__ALU_result_WB;
    IData/*31:0*/ PipelineCPU__DOT__memRdata_WB;
    IData/*17:0*/ PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o;
    IData/*17:0*/ PipelineCPU__DOT____Vcellinp__m_ID_EX_Reg__ctrl_IDEX_i;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__ALU_result_mem;
    IData/*31:0*/ __VactIterCount;
    VL_OUT(r[32],31,0);
    VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
    VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
    VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
    VlUnpacked<CData/*0:0*/, 8> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    VPipelineCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VPipelineCPU___024root(VPipelineCPU__Syms* symsp, const char* v__name);
    ~VPipelineCPU___024root();
    VL_UNCOPYABLE(VPipelineCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
