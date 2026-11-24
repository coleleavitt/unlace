; The code segment of hello.exe (nasm -f bin): every far call and the
; segment load carry an NE relocation, their stored words 0xFFFF chain ends
; except where build.py links two sites of one import.
bits 16
start:
        mov ax, 0xffff          ; SEGMENT: selector of segment 2 (the data)
        mov ds, ax
        push word [6]           ; the count word of segment 2
site_kernel1:
        call 0xffff:0xffff      ; KERNEL ordinal 91 (head of a two-site chain)
site_user:
        call 0xffff:0xffff      ; USER!MESSAGEBOX, by name
site_helper:
        call 0xffff:0xffff      ; HELPER, through movable entry ordinal 1
site_kernel2:
        call 0xffff:0xffff      ; KERNEL ordinal 91 again (the chain's tail)
        retf
helper:
        mov ax, [6]
        retf
