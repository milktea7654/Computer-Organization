    .section .text
    .global asm_dp

asm_dp:
    addi    sp, sp, -40       
    sw      ra, 36(sp)
    sw      s0, 32(sp)
    sw      s3, 28(sp)
    addi    s0, sp, 40

   
    li      s1, 1                       

In:
    li      t3, 6
    bge     s2, t3, following     

    
    slli    t3, s2, 1       
    slli    t3, t3, 2          
    add     t4, a0, t3        

    lw      t0, 0(t4)          
    lw      t1, 4(t4)          

    blt     s1, t0, pass

   
    slli    t3, s1, 2
    add     t3, a2, t3         
    lw      s3, 0(t3)         

    
    sub     t4, s1, t0        
    slli    t4, t4, 2
    add     t4, a2, t4         
    lw      t2, 0(t4)         

    add     t2, t2, t1

    bge     s3, t2, pass
    sw      t2, 0(t3)

Out:
    bgt     s1, a1, finish       

    li      s2, 0    

pass:
    addi    s2, s2, 1
    j       In

finish:
   lw      s3, 28(sp)
    lw      s0, 32(sp)
    lw      ra, 36(sp)
    addi    sp, sp, 40
    jr      ra

following:
    addi    s1, s1, 1
    j       Out

