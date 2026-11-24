; 32-bit OMF object (nasm -f obj, USE32 segments in FLAT): a call to an
; external and an absolute data reference.
segment _TEXT public class=CODE use32 flat
segment _DATA public class=DATA use32 flat

extern _printf

segment _TEXT
global _add3
_add3:
        mov eax, [esp+4]
        add eax, [esp+8]
        add eax, [esp+12]
        ret

global _main32
_main32:
        push dword 3
        push dword 2
        push dword 1
        call _add3
        add esp, 12
        push eax
        push dword fmt
        call _printf
        add esp, 8
        mov eax, [total]
        ret

segment _DATA
fmt:   db "%d", 10, 0
total: dd 6
