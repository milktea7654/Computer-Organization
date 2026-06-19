    .section .text
    .global asm_entry

asm_entry:
    li      t0, 0        

    beq     a1, zero, asm_exit  

loop:
    lw      t1, 0(a0)    
    xor     t0, t0, t1   
    addi    a0, a0, 4     
    addi    a1, a1, -1    
    bnez    a1, loop      

asm_exit:
    mv      a0, t0       
    jr      ra            

