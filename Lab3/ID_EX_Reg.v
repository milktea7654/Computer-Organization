module ID_EX_Reg(
    input  wire        clk,
    input  wire        rst,
    
    input  wire [31:0]  PC_IDEX_i,
    input  wire [31:0]  rd1_IDEX_i,
    input  wire [31:0]  rd2_IDEX_i,
    input  wire [31:0]  imm_IDEX_i,
    input  wire [17:0]  ctrl_IDEX_i,  
    input  wire [4:0]   rd_IDEX_i,

    output reg [31:0]  PC_IDEX_o,
    output reg [31:0]  rd1_IDEX_o,
    output reg [31:0]  rd2_IDEX_o,
    output reg [31:0]  imm_IDEX_o,
    output reg [17:0]  ctrl_IDEX_o,
    output reg [4:0]   rd_IDEX_o
);

always @(posedge clk or negedge rst) begin
    if (~rst) begin
        PC_IDEX_o        <= 32'b0;
        rd1_IDEX_o       <= 32'b0;
        rd2_IDEX_o       <= 32'b0;
        imm_IDEX_o       <= 32'b0;
        ctrl_IDEX_o      <= 18'b0;
        rd_IDEX_o        <= 5'b0;
    end else begin
        PC_IDEX_o        <= PC_IDEX_i;
        rd1_IDEX_o       <= rd1_IDEX_i;
        rd2_IDEX_o       <= rd2_IDEX_i;
        imm_IDEX_o       <= imm_IDEX_i;
        ctrl_IDEX_o      <= ctrl_IDEX_i;
        rd_IDEX_o        <= rd_IDEX_i;

    end
end

endmodule
