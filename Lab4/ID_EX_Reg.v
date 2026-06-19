module ID_EX_Reg(
    input  wire         clk,
    input  wire         rst,
    
    input  wire [31:0]  PC_IDEX_i,
    input  wire [31:0]  rd1_IDEX_i,
    input  wire [31:0]  rd2_IDEX_i,
    input  wire [31:0]  imm_IDEX_i,  
    input  wire [31:0]  inst_id_i,
    input  wire [1:0] memtoReg_i,
    input  wire [1:0] AlUop_i,
    input  wire ALUsrc_i,
    input  wire Flush_HD,
    input  wire memread_i,
    input  wire memWrite_i,
    input  wire regWrite_i,

    output reg [31:0]   PC_IDEX_o,
    output reg [31:0]   rd1_IDEX_o,
    output reg [31:0]   rd2_IDEX_o,
    output reg [31:0]   imm_IDEX_o,
    output reg [31:0]   inst_id_o,

    output reg [1:0] memtoReg_o,
    output reg [1:0] AlUop_o,
    output reg ALUsrc_o,
    output memread_o,
    output reg memWrite_o,
    output reg regWrite_o



);

always @(negedge clk or negedge rst) begin
    if (~rst) begin
        PC_IDEX_o        <= 32'b0;
        rd1_IDEX_o       <= 32'b0;
        rd2_IDEX_o       <= 32'b0;
        imm_IDEX_o       <= 32'b0;
        inst_id_o        <= 32'b00000000000000000000000000010011;
        AlUop_o          <= 2'b00;
        memtoReg_o       <= 2'b0;
        ALUsrc_o         <= 1'b0;
        memread_o        <= 1'b0;
        memWrite_o       <= 1'b0;
        regWrite_o       <= 1'b0;        
        
    end else if (Flush_HD) begin
        PC_IDEX_o        <= 32'b0;
        rd1_IDEX_o       <= 32'b0;
        rd2_IDEX_o       <= 32'b0;
        imm_IDEX_o       <= 32'b0;
        inst_id_o        <= 32'b00000000000000000000000000010011;
        AlUop_o          <= 2'b00;
        memtoReg_o       <= 2'b0;
        ALUsrc_o         <= 1'b0;
        memread_o        <= 1'b0;
        memWrite_o       <= 1'b0;
        regWrite_o       <= 1'b0;  
    end else begin 
        PC_IDEX_o        <= PC_IDEX_i;
        rd1_IDEX_o       <= rd1_IDEX_i;
        rd2_IDEX_o       <= rd2_IDEX_i;
        imm_IDEX_o       <= imm_IDEX_i;
        inst_id_o        <= inst_id_i;
        AlUop_o          <= AlUop_i;
        memtoReg_o       <= memtoReg_i;
        ALUsrc_o         <= ALUsrc_i;
        memread_o        <= memread_i;
        memWrite_o       <= memWrite_i;
        regWrite_o       <= regWrite_i;  
    end
end

endmodule
