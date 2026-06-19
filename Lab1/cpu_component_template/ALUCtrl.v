module ALUCtrl (
    input [1:0] ALUOp,
    input funct7,
    input [2:0] funct3,
    output reg [3:0] ALUCtl
);
    

    always @(*) begin
        case(ALUOp)
            2'b00: begin
                
                ALUCtl = 4'b0010; 
            end
            2'b01: begin
                
                ALUCtl = 4'b0110; 
            end
            2'b10: begin
                
                case({funct7, funct3})
                    4'b0_000: ALUCtl = 4'b0010; 
                    4'b1_000: ALUCtl = 4'b0110; 
                    4'b0_111: ALUCtl = 4'b0000;
                    4'b0_110: ALUCtl = 4'b0001; 
                    4'b0_010: ALUCtl = 4'b0111; 
                    4'b0_100: ALUCtl = 4'b0011; 
                    default:  ALUCtl = 4'bxxxx; 
                endcase
            end
            2'b11: begin
                case(funct3)
                    3'b000: ALUCtl = 4'b0010; 
                    3'b111: ALUCtl = 4'b0000; 
                    3'b110: ALUCtl = 4'b0001; 
                    3'b010: ALUCtl = 4'b0111; 
                    3'b100: ALUCtl = 4'b0011; 
                    default: ALUCtl = 4'bxxxx; 
                endcase
            end
            default: ALUCtl = 4'bxxxx; 
        endcase
    end
endmodule
