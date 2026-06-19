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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ PipelineCPU__DOT__memRead_mem;
        CData/*0:0*/ PipelineCPU__DOT__regWrite;
        CData/*0:0*/ PipelineCPU__DOT__regWrite_WB;
        CData/*0:0*/ PipelineCPU__DOT__BrEq;
        CData/*0:0*/ PipelineCPU__DOT__BrLT;
        CData/*3:0*/ PipelineCPU__DOT__ALUCtl;
        CData/*0:0*/ PipelineCPU__DOT__memRead_EX;
        CData/*0:0*/ PipelineCPU__DOT__memWrite_EX;
        CData/*0:0*/ PipelineCPU__DOT__ALUSrc_EX;
        CData/*0:0*/ PipelineCPU__DOT__regWrite_EX;
        CData/*2:0*/ PipelineCPU__DOT__funct3_EX;
        CData/*6:0*/ PipelineCPU__DOT__funct7_EX;
        CData/*1:0*/ PipelineCPU__DOT__memtoReg_EX;
        CData/*1:0*/ PipelineCPU__DOT__ALUOp_EX;
        CData/*0:0*/ PipelineCPU__DOT__memWrite_mem;
        CData/*0:0*/ PipelineCPU__DOT__regWrite_mem;
        CData/*1:0*/ PipelineCPU__DOT__memtoReg_mem;
        CData/*0:0*/ PipelineCPU__DOT__ALU_result_ID;
        CData/*1:0*/ PipelineCPU__DOT__memtoReg_WB;
        CData/*0:0*/ PipelineCPU__DOT__RePC;
        CData/*0:0*/ PipelineCPU__DOT__Flush_HD;
        CData/*1:0*/ PipelineCPU__DOT__EX_ForwardA;
        CData/*1:0*/ PipelineCPU__DOT__EX_ForwardB;
        CData/*1:0*/ PipelineCPU__DOT__ID_ForwardA;
        CData/*1:0*/ PipelineCPU__DOT__ID_ForwardB;
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
        SData/*11:0*/ PipelineCPU__DOT__m_Control__DOT__ctrl;
        IData/*31:0*/ PipelineCPU__DOT__PC_INPUT;
        IData/*31:0*/ PipelineCPU__DOT__PC_IF;
        IData/*31:0*/ PipelineCPU__DOT__inst_WB;
        IData/*31:0*/ PipelineCPU__DOT__write_back;
        IData/*31:0*/ PipelineCPU__DOT__PC_branch;
        IData/*31:0*/ PipelineCPU__DOT__ALU_in;
        IData/*31:0*/ PipelineCPU__DOT__Mux_ALU;
        IData/*31:0*/ PipelineCPU__DOT__mem_data;
        IData/*31:0*/ PipelineCPU__DOT__PC_ID;
        IData/*31:0*/ PipelineCPU__DOT__PC_plus4_ID;
        IData/*31:0*/ PipelineCPU__DOT__inst_ID;
        IData/*31:0*/ PipelineCPU__DOT__PC_plus4_WB;
        IData/*31:0*/ PipelineCPU__DOT__PC_plus4_MEM;
        IData/*31:0*/ PipelineCPU__DOT__imm_ID;
        IData/*31:0*/ PipelineCPU__DOT__PC_EX;
        IData/*31:0*/ PipelineCPU__DOT__PC_plus4_EX;
        IData/*31:0*/ PipelineCPU__DOT__rd1_EX;
        IData/*31:0*/ PipelineCPU__DOT__rd2_EX;
        IData/*31:0*/ PipelineCPU__DOT__imm_EX;
        IData/*31:0*/ PipelineCPU__DOT__ALU_result_EX;
        IData/*31:0*/ PipelineCPU__DOT__inst_EX;
    };
    struct {
        IData/*31:0*/ PipelineCPU__DOT__inst_MEM;
        IData/*31:0*/ PipelineCPU__DOT__PC_mem;
        IData/*31:0*/ PipelineCPU__DOT__ALU_result_mem;
        IData/*31:0*/ PipelineCPU__DOT__rd2_mem;
        IData/*31:0*/ PipelineCPU__DOT__rd_mem;
        IData/*31:0*/ PipelineCPU__DOT__rd_WB;
        IData/*31:0*/ PipelineCPU__DOT__PC_WB;
        IData/*31:0*/ PipelineCPU__DOT__ALU_result_WB;
        IData/*31:0*/ PipelineCPU__DOT__memRdata_WB;
        IData/*31:0*/ PipelineCPU__DOT__PC_muxed;
        IData/*31:0*/ PipelineCPU__DOT__rd1_muxed;
        IData/*31:0*/ PipelineCPU__DOT__rd2_muxed;
        IData/*31:0*/ PipelineCPU__DOT__ForwardA_EX;
        IData/*31:0*/ PipelineCPU__DOT__ForwardB_EX;
        IData/*31:0*/ PipelineCPU__DOT__ForwardA_ID;
        IData/*31:0*/ PipelineCPU__DOT__ForwardB_ID;
        IData/*31:0*/ PipelineCPU__DOT__ForwardA_EX_out;
        IData/*31:0*/ PipelineCPU__DOT__ForwardB_EX_out;
        IData/*31:0*/ PipelineCPU__DOT__ForwardB_MEM_out;
        IData/*31:0*/ PipelineCPU__DOT__RS1E_data;
        IData/*31:0*/ PipelineCPU__DOT__RS2E_data;
        IData/*31:0*/ PipelineCPU__DOT__PC_4_WB;
        IData/*31:0*/ PipelineCPU__DOT__adder_2_src;
        IData/*31:0*/ __Vdly__PipelineCPU__DOT__inst_ID;
        IData/*31:0*/ __Vdly__PipelineCPU__DOT__PC_plus4_ID;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __Vtrigrprev__TOP__PipelineCPU__DOT__ALU_result_mem;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> PipelineCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> PipelineCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 6> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

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
