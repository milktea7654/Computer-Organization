module SingleCycleCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// The rst signal is active low, which means the module will reset if the rst signal is zero.
// And you should follow this design.

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module

wire rst_n = start; // start=0 時 reset，start=1 時執行
wire [31:0] PC_INPUT, PC;

wire [6:0] opcode = inst[6:0];
wire [2:0] funct3 = inst[14:12];
wire [6:0] funct7 = inst[31:25];
wire [4:0] rs1 = inst[19:15];
wire [4:0] rs2 = inst[24:20];
wire [4:0] rd  = inst[11:7];
wire memRead, memWrite, ALUSrc, regWrite;
wire [1:0] memtoReg, PCSel, ALUOp;

wire [31:0] PC_plus4;
wire [31:0] rd1, rd2, write_back;


wire BrEq, BrLT;
wire [31:0] imm;
wire [31:0] shifted_imm;
wire [31:0] pc_j_to;
wire [31:0] pc_branch;
wire [31:0] ALU_in2;
wire [3:0] ALUCtl;
wire [31:0] ALU_result;
wire zero;


wire [31:0] mem_data;

PC m_PC(
    .clk(clk),
    .rst(rst_n), 
    .pc_i(PC_INPUT),
    .pc_o(PC)
);

Adder m_Adder_1(
    .a(4),
    .b(PC),
    .sum(PC_plus4)
);

wire [31:0] inst;
InstructionMemory m_InstMem(
    .readAddr(PC),
    .inst(inst)
);

Control m_Control(
    .opcode(opcode),
    .funct3(funct3),
    .BrEq(BrEq),
    .BrLT(BrLT),
    .memRead(memRead),
    .memtoReg(memtoReg),
    .ALUOp(ALUOp),
    .memWrite(memWrite),
    .ALUSrc(ALUSrc),
    .regWrite(regWrite),
    .PCSel(PCSel)
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(rst_n), 
    .regWrite(regWrite),
    .readReg1(rs1),
    .readReg2(rs2),
    .writeReg(rd),
    .writeData(write_back),
    .readData1(rd1),
    .readData2(rd2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

BranchComp m_BranchComp(
    .A(rd1),
    .B(rd2),
    .BrEq(BrEq),
    .BrLT(BrLT)
);

ImmGen m_ImmGen(
    .inst(inst),
    .imm(imm)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(imm),
    .o(shifted_imm)
);

Adder m_Adder_2(
    .a(PC),
    .b(imm),
    .sum(pc_branch)
);

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel),
    .s0(PC_plus4),
    .s1(pc_branch),
    .s2(ALU_result),
    .out(PC_INPUT)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc),
    .s0(rd2),
    .s1(imm),
    .out(ALU_in2)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp),
    .funct7(funct7),
    .funct3(funct3),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(rd1),
    .B(ALU_in2),
    .ALUOut(ALU_result),
    .zero(zero)
);

DataMemory m_DataMemory(
    .rst(rst_n),
    .clk(clk),
    .memWrite(memWrite),
    .memRead(memRead),
    .address(ALU_result),
    .writeData(rd2),
    .readData(mem_data)
);


Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg),
    .s0(ALU_result),
    .s1(mem_data),
    .s2(PC_plus4),
    .out(write_back)
);

endmodule
