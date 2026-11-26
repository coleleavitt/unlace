# Fixture for the int3-sealed call no-return rule (noreturntrap, unlace#837):
# the statically linked VC++ 2008 CRT's _exit / abort / terminate chain, laid out
# the way SLABHIDDevice.dll has it (doexit 0x1000734d, _exit 0x1000742f, abort
# 0x1000d2e0, terminate 0x1000a972, unexpected 0x1000a9ab, _inconsistency
# 0x1000a9be), plus a returning routine one sealed site would wrongly convict.
#
# Build:
#   i686-w64-mingw32-gcc -nostdlib -s -Wl,-e,_start -o noreturntrap_i686.exe \
#       noreturntrap.s -lkernel32
#
# doexit returns only when its third argument is nonzero; exit_ is
# doexit(code, 1, 0), so its body proves nothing. abort_ ends call exit_ ;
# int3 ; int3 with handler_owner starting after the pad; raise_ calls exit_
# where its fall-through is a join. terminate's code follows handler_owner and
# is reached only by the jmp of unexpected_ and inconsistency_, so it is no
# function entry. logmsg returns: fatal_log ends call logmsg ; int3, but
# user_logmsg continues after its call to logmsg.

        .intel_syntax noprefix
        .text

doexit:
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp+16], 0
        jne     1f
        push    dword ptr [ebp+8]
        call    dword ptr [__imp__ExitProcess@4]
1:      pop     ebp
        ret

exit_:
        push    0
        push    1
        push    dword ptr [esp+12]
        call    doexit
        add     esp, 12
        ret

raise_:
        push    ebp
        mov     ebp, esp
        cmp     dword ptr [ebp+8], 22
        jne     1f
        push    3
        call    exit_
1:      mov     eax, dword ptr [ebp+8]
        pop     ebp
        ret

abort_:
        push    22
        call    raise_
        add     esp, 4
        push    3
        call    exit_
        int3
        int3

handler_owner:
        mov     eax, 1
        ret

terminate_code:
        push    ebx
        mov     eax, dword ptr [hook]
        test    eax, eax
        je      1f
        call    eax
1:      call    abort_
        pop     ebx
        ret

unexpected_:
        mov     eax, dword ptr [hook2]
        test    eax, eax
        je      1f
        call    eax
1:      jmp     terminate_code

inconsistency_:
        mov     eax, dword ptr [hook3]
        test    eax, eax
        je      1f
        call    eax
1:      jmp     terminate_code

user_inconsistency:
        mov     eax, dword ptr [esp+4]
        test    eax, eax
        jns     1f
        call    inconsistency_
1:      lea     eax, [eax+eax*2]
        ret

user_unexpected:
        mov     eax, dword ptr [esp+4]
        test    eax, eax
        jne     1f
        call    unexpected_
1:      ret

logmsg:
        mov     eax, dword ptr [esp+4]
        ret

fatal_log:
        push    7
        call    logmsg
        int3

user_logmsg:
        push    dword ptr [esp+4]
        call    logmsg
        add     esp, 4
        inc     eax
        ret

        .globl  _start
_start:
        call    handler_owner
        push    -5
        call    user_inconsistency
        add     esp, 4
        push    0
        call    user_unexpected
        add     esp, 4
        push    22
        call    raise_
        add     esp, 4
        push    2
        call    user_logmsg
        add     esp, 4
        call    fatal_log
        push    0
        call    dword ptr [__imp__ExitProcess@4]

        .data
hook:   .long   0
hook2:  .long   0
hook3:  .long   0
