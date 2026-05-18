// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x689D0
// Name:           sub_689D0
// Function size:  196 bytes (60 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x689D0 push    r13
//   0x689D2 mov     r13, rsi
//   0x689D5 push    r12
//   0x689D7 push    rbp
//   0x689D8 mov     ebp, edx
//   0x689DA push    rbx
//   0x689DB sub     rsp, 18h
//   0x689DF mov     [rsp+38h+var_30], rdi
//   0x689E4 mov     edi, 40h ; '@'; unsigned __int64
//   0x689E9 call    __Znwm; operator new(ulong)
//   0x689EE pxor    xmm0, xmm0
//   0x689F2 cmp     [rsp+38h+var_30], 0
//   0x689F8 mov     byte ptr [rax+8], 0Fh
//   0x689FC mov     rbx, rax
//   0x689FF mov     r12, rax
//   0x68A02 lea     rax, off_236FA8
//   0x68A09 mov     [rbx], rax
//   0x68A0C mov     qword ptr [rbx+10h], 0
//   0x68A14 mov     qword ptr [rbx+28h], 0
//   0x68A1C movups  xmmword ptr [rbx+18h], xmm0
//   0x68A20 movups  xmmword ptr [rbx+30h], xmm0
//   0x68A24 jz      short loc_68A3C
//   0x68A26 lea     rsi, [rsp+38h+var_30]
//   0x68A2B mov     ecx, ebp
//   0x68A2D mov     rdx, r13
//   0x68A30 mov     rdi, rbx
//   0x68A33 call    sub_778F0
//   0x68A38 test    al, al
//   0x68A3A jz      short loc_68A50
//   0x68A3C add     rsp, 18h
//   0x68A40 mov     rax, r12
//   0x68A43 pop     rbx
//   0x68A44 pop     rbp
//   0x68A45 pop     r12
//   0x68A47 pop     r13
//   0x68A49 retn
//   0x68A4A align 10h
//   0x68A50 test    rbx, rbx
//   0x68A53 jz      short loc_68A7D
//   0x68A55 mov     rax, [rbx]
//   0x68A58 lea     rdx, sub_67300
//   0x68A5F mov     rdi, rbx
//   0x68A62 mov     rax, [rax+8]
//   0x68A66 cmp     rax, rdx
//   0x68A69 jnz     short loc_68A90
//   0x68A6B call    sub_67250
//   0x68A70 mov     esi, 40h ; '@'; unsigned __int64
//   0x68A75 mov     rdi, rbx; void *
//   0x68A78 call    __ZdlPvm; operator delete(void *,ulong)
//   0x68A7D add     rsp, 18h
//   0x68A81 xor     r12d, r12d
//   0x68A84 pop     rbx
//   0x68A85 mov     rax, r12
//   0x68A88 pop     rbp
//   0x68A89 pop     r12
//   0x68A8B pop     r13
//   0x68A8D retn
//   0x68A8E align 10h
//   0x68A90 call    rax
//   0x68A92 jmp     short loc_68A7D
// ============================================================

void sub_689D0(/* signature unknown */)
{
    // see disassembly above
}

