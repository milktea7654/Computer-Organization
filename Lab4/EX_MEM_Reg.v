module EX_MEM_Reg(
    input wire clk,
    input wire rst,

    input wire [31:0] pc_i,
    input wire [31:0] ALUOut_i,
    input wire [31:0] rd2_i,
    input wire [31:0] inst_i,
    input wire [1:0] memtoReg_i,
    input wire memRead_i,
    input wire memWrite_i,
    input wire regWrite_i,

    output reg  [31:0] pc_o,
    output reg  [31:0] ALUOut_o,
    output reg  [31:0] rd2_o,
    output reg  [31:0] inst_o,
    output reg [1:0] memtoReg_o,
    output reg memRead_o,
    output reg memWrite_o,
    output reg regWrite_o

);

always @(negedge clk, negedge rst) begin
    if (~rst) begin
        ALUOut_o     <= 32'b0;
        rd2_o        <= 32'b0;
        pc_o         <= 32'b0;
        inst_o       <= 32'b0;
        memRead_o    <= 1'b0;
        memWrite_o   <= 1'b0;
        memtoReg_o   <= 2'b00;
        regWrite_o   <= 1'b0;
        
    end else begin
        ALUOut_o     <= ALUOut_i;
        rd2_o        <= rd2_i;
        pc_o         <= pc_i;
        inst_o       <= inst_i;
        memRead_o    <= memRead_i;
        memWrite_o   <= memWrite_i;
        memtoReg_o   <= memtoReg_i;
        regWrite_o   <= regWrite_i;

    end
end

endmodule
