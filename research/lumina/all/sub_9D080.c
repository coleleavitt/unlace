// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x9D080
// Name:           sub_9D080
// Function size:  143 bytes (48 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x9D080 push    r13; int
//   0x9D082 mov     r13, rsi
//   0x9D085 push    r12; int
//   0x9D087 push    rbp; __int64
//   0x9D088 mov     ebp, edx
//   0x9D08A push    rbx; int
//   0x9D08B sub     rsp, 18h
//   0x9D08F mov     qword ptr [rsp+38h+var_30], rdi; int
//   0x9D094 mov     edi, 28h ; '('; unsigned __int64
//   0x9D099 call    __Znwm; operator new(ulong)
//   0x9D09E pxor    xmm0, xmm0
//   0x9D0A2 cmp     qword ptr [rsp+38h+var_30], 0
//   0x9D0A8 mov     byte ptr [rax+8], 41h ; 'A'
//   0x9D0AC mov     rbx, rax
//   0x9D0AF mov     r12, rax
//   0x9D0B2 lea     rax, off_238758
//   0x9D0B9 mov     [rbx], rax
//   0x9D0BC mov     qword ptr [rbx+10h], 0
//   0x9D0C4 movups  xmmword ptr [rbx+18h], xmm0
//   0x9D0C8 jz      short loc_9D0E0
//   0x9D0CA lea     rsi, [rsp+38h+var_30]; int
//   0x9D0CF mov     ecx, ebp; int
//   0x9D0D1 mov     rdx, r13; int
//   0x9D0D4 mov     rdi, rbx; int
//   0x9D0D7 call    sub_B5FA0
//   0x9D0DC test    al, al
//   0x9D0DE jz      short loc_9D0F0
//   0x9D0E0 add     rsp, 18h
//   0x9D0E4 mov     rax, r12
//   0x9D0E7 pop     rbx
//   0x9D0E8 pop     rbp
//   0x9D0E9 pop     r12
//   0x9D0EB pop     r13
//   0x9D0ED retn
//   0x9D0EE align 10h
//   0x9D0F0 test    rbx, rbx
//   0x9D0F3 jz      short loc_9D0FE
//   0x9D0F5 mov     rax, [rbx]
//   0x9D0F8 mov     rdi, rbx
//   0x9D0FB call    qword ptr [rax+8]
//   0x9D0FE add     rsp, 18h
//   0x9D102 xor     r12d, r12d
//   0x9D105 pop     rbx
//   0x9D106 mov     rax, r12
//   0x9D109 pop     rbp
//   0x9D10A pop     r12
//   0x9D10C pop     r13
//   0x9D10E retn
// ============================================================

void sub_9D080(/* signature unknown */)
{
    // see disassembly above
}

