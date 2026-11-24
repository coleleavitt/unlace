; 16-bit OMF object (nasm -f obj): a near call into the module, a far call
; and a near call to externals, a segment and a DGROUP offset fixup.
segment _TEXT public class=CODE use16
segment _DATA public class=DATA use16
group DGROUP _DATA

extern _puts
extern far_helper

segment _TEXT
global _sum
_sum:
        push bp
        mov bp, sp
        mov ax, [bp+4]
        add ax, [bp+6]
        pop bp
        ret

global _main
_main:
..start:
        mov ax, seg msg
        mov ds, ax
        push word 5
        push word 7
        call _sum
        add sp, 4
        mov dx, msg wrt DGROUP
        push dx
        call _puts
        add sp, 2
        call far far_helper
        mov ax, [counter wrt DGROUP]
        ret

segment _DATA
msg:     db "hello", 0
counter: dw 3
