// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x66850
// Name:           sub_66850
// Function size:  151 bytes (49 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x66850 push    r13; int
//   0x66852 mov     r13, rsi
//   0x66855 push    r12; ptr
//   0x66857 push    rbp; int
//   0x66858 mov     ebp, edx
//   0x6685A push    rbx; int
//   0x6685B sub     rsp, 18h
//   0x6685F mov     qword ptr [rsp+38h+var_30], rdi; int
//   0x66864 mov     edi, 30h ; '0'; unsigned __int64
//   0x66869 call    __Znwm; operator new(ulong)
//   0x6686E pxor    xmm0, xmm0
//   0x66872 cmp     qword ptr [rsp+38h+var_30], 0
//   0x66878 mov     byte ptr [rax+8], 24h ; '$'
//   0x6687C mov     rbx, rax
//   0x6687F mov     r12, rax
//   0x66882 lea     rax, off_237398
//   0x66889 mov     [rbx], rax
//   0x6688C mov     qword ptr [rbx+10h], 0
//   0x66894 mov     byte ptr [rbx+28h], 0
//   0x66898 movups  xmmword ptr [rbx+18h], xmm0
//   0x6689C jz      short loc_668B4
//   0x6689E lea     rsi, [rsp+38h+var_30]; int
//   0x668A3 mov     ecx, ebp; int
//   0x668A5 mov     rdx, r13; int
//   0x668A8 mov     rdi, rbx; int
//   0x668AB call    sub_7AEF0
//   0x668B0 test    al, al
//   0x668B2 jz      short loc_668C8
//   0x668B4 add     rsp, 18h
//   0x668B8 mov     rax, r12
//   0x668BB pop     rbx
//   0x668BC pop     rbp
//   0x668BD pop     r12
//   0x668BF pop     r13
//   0x668C1 retn
//   0x668C2 align 8
//   0x668C8 test    rbx, rbx
//   0x668CB jz      short loc_668D6
//   0x668CD mov     rax, [rbx]
//   0x668D0 mov     rdi, rbx
//   0x668D3 call    qword ptr [rax+8]
//   0x668D6 add     rsp, 18h
//   0x668DA xor     r12d, r12d
//   0x668DD pop     rbx
//   0x668DE mov     rax, r12
//   0x668E1 pop     rbp
//   0x668E2 pop     r12
//   0x668E4 pop     r13
//   0x668E6 retn
// ============================================================

void sub_66850(/* signature unknown */)
{
    // see disassembly above
}

