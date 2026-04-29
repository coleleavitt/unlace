// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x111030
// Name:           sub_111030
// Function size:  220 bytes (60 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x111030 push    r13
//   0x111032 mov     rcx, rsi
//   0x111035 mov     rsi, rdi
//   0x111038 push    r12
//   0x11103A push    rbp
//   0x11103B push    rbx
//   0x11103C sub     rsp, 58h
//   0x111040 mov     rbp, fs:28h
//   0x111049 mov     [rsp+78h+var_30], rbp
//   0x11104E mov     rbp, rdx
//   0x111051 lea     r12, [rsp+78h+var_68]
//   0x111056 lea     rdx, [rsp+78h+var_74]
//   0x11105B mov     [rsp+78h+var_68], 0
//   0x111064 mov     rdi, r12
//   0x111067 mov     [rsp+78h+var_60], 0
//   0x11106C call    sub_1DFF30
//   0x111071 mov     ebx, eax
//   0x111073 test    al, al
//   0x111075 jnz     short loc_111098
//   0x111077 mov     rax, [rsp+78h+var_30]
//   0x11107C sub     rax, fs:28h
//   0x111085 jnz     short loc_1110FF
//   0x111087 add     rsp, 58h
//   0x11108B mov     eax, ebx
//   0x11108D pop     rbx
//   0x11108E pop     rbp
//   0x11108F pop     r12
//   0x111091 pop     r13
//   0x111093 retn
//   0x111094 align 8
//   0x111098 mov     eax, [rsp+78h+var_74]
//   0x11109C lea     r13, [rsp+78h+var_58]
//   0x1110A1 pxor    xmm0, xmm0
//   0x1110A5 xor     ecx, ecx
//   0x1110A7 mov     rdx, r12
//   0x1110AA mov     rsi, r13
//   0x1110AD mov     rdi, rbp
//   0x1110B0 movups  [rsp+78h+var_50], xmm0
//   0x1110B5 mov     [rsp+78h+var_58], 0
//   0x1110BD mov     [rsp+78h+var_54], eax
//   0x1110C1 mov     [rsp+78h+var_40], 0
//   0x1110CA call    sub_1E0180
//   0x1110CF test    al, al
//   0x1110D1 jz      short loc_1110F0
//   0x1110D3 lea     rsi, [rsp+78h+var_70]
//   0x1110D8 mov     rdi, r13
//   0x1110DB call    sub_312AF0
//   0x1110E0 test    al, al
//   0x1110E2 jz      short loc_1110F0
//   0x1110E4 cmp     [rsp+78h+var_70], 0
//   0x1110EA setz    bl
//   0x1110ED jmp     short loc_1110F2
//   0x1110EF align 10h
//   0x1110F0 xor     ebx, ebx
//   0x1110F2 mov     rdi, r13
//   0x1110F5 call    sub_312B80
//   0x1110FA jmp     loc_111077
//   0x1110FF call    ___stack_chk_fail
//   0x111104 mov     rbx, rax
//   0x111107 jmp     loc_36D6A
// ============================================================

void sub_111030(/* signature unknown */)
{
    // see disassembly above
}

