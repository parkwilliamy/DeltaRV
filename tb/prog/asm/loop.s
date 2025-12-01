    .globl _start

    .section .text
_start:
    addi x2, x0, 0
    addi x5, x0, 5
    j    loop1
    

loop1:
    addi x2, x2, 1
    bne x2, x5, loop1
    j    finish
    addi x3, x0, 5
    

finish:
    addi x3, x0, 10