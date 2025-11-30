    .globl _start

    .section .text
_start:
    
    la    x5, my_data              # x5 = base address of .data section (0x5000)
    li    x1, 0xfee1dead       # x1 = 0xfee1dead
    li    x6, 0xdeadbeef       # x6 = 0xdeadbeef
    li    x7, 0xbaadf00d       # x7 = 0xbaadf00d
    li    x8, 0xbabecafe       # x8 = 0xbabecafe
    sw    x1, 0(x5)            # mem[0x5000] = x1
    sw    x6, 4(x5)            # mem[0x5004] = x6
    sh    x7, 8(x5)            # mem[0x5008] = x7[15:0]
    sh    x8, 10(x5)           # mem[0x5010] = x8[15:0]

    # load store tests begin

    lw    x10, 0(x5)
    sw    x10, 12(x5)

    lb    x12, 4(x5)
    sh    x12, 16(x5)

    lh    x14, 16(x5)
    add   x15, x14, x12
    add   x16, x15, x14
    add   x17, x15, x15
    
    
    .section .data
my_data:
    .word 0                 # reserve 4 bytes for x4
    .word 0                 # reserve 4 bytes for x6
    .hword 0                # reserve 2 bytes for x7
    .hword 0                # reserve 2 bytes for x8
    .word 0                 # reserve 4 bytes for x10
    .hword 0                # reserve 2 bytes for x12





