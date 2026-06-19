    .section .text
    .global fibo_asm

fibo_asm:
    addi    sp, sp, -20      
    sw      ra, 16(sp)      
    sw      s0, 12(sp)    
    sw      s1, 8(sp)       

    mv      s0, a0         


    li      t0, 0
    beq     s0, t0, if0

    li      t0, 1
    beq     s0, t0, if1


    addi    a0, s0, -1     
    jal     ra, fibo_asm  
    mv      s1, a0         

  
    addi    a0, s0, -2     
    jal     ra, fibo_asm   


    add     a0, s1, a0

    j       ELSE

if0:
    li      a0, 0         
    j       ELSE

if1:
    li      a0, 1        
    j       ELSE

ELSE:
    lw      ra, 16(sp)   
    lw      s0, 12(sp)    
    lw      s1, 8(sp)      
    addi    sp, sp, 20     
    jr      ra            

