// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x56F50
// Name:           sub_56F50
// Function size:  508 bytes (122 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x56F50 push    r14
//   0x56F52 push    r13
//   0x56F54 push    r12
//   0x56F56 push    rbp
//   0x56F57 push    rbx
//   0x56F58 sub     rsp, 30h
//   0x56F5C mov     rbp, fs:28h
//   0x56F65 mov     [rsp+58h+var_30], rbp
//   0x56F6A mov     rbp, rdi
//   0x56F6D mov     rdi, rsp
//   0x56F70 mov     r14, rsp
//   0x56F73 mov     rsi, [rbp+260h]
//   0x56F7A movzx   edx, word ptr [rbp+268h]
//   0x56F81 mov     rax, [rsi]
//   0x56F84 call    qword ptr [rax+18h]
//   0x56F87 pxor    xmm0, xmm0
//   0x56F8B lea     rsi, [rsp+58h+var_48]
//   0x56F90 mov     rdx, rsp
//   0x56F93 mov     rdi, rbp
//   0x56F96 movups  [rsp+58h+var_40], xmm0
//   0x56F9B mov     [rsp+58h+var_48], 0
//   0x56FA4 call    sub_56CE0
//   0x56FA9 mov     r13d, eax
//   0x56FAC test    al, al
//   0x56FAE jz      loc_570B0
//   0x56FB4 mov     rsi, [rbp+260h]
//   0x56FBB lea     r12, [rsp+58h+var_50]
//   0x56FC0 movzx   edx, word ptr [rbp+26Ch]
//   0x56FC7 mov     rdi, r12
//   0x56FCA mov     rax, [rsi]
//   0x56FCD call    qword ptr [rax+18h]
//   0x56FD0 mov     rdi, [rsp+58h+var_50]
//   0x56FD5 test    rdi, rdi
//   0x56FD8 jz      loc_57120
//   0x56FDE cmp     qword ptr [rsp+58h+var_40], 0
//   0x56FE4 jz      short loc_57025
//   0x56FE6 xor     ebx, ebx
//   0x56FE8 xor     eax, eax
//   0x56FEA nop     word ptr [rax+rax+00h]
//   0x56FF0 mov     rdx, [rsp+58h+var_48]
//   0x56FF5 xor     r9d, r9d
//   0x56FF8 mov     ecx, 1
//   0x56FFD xor     esi, esi
//   0x56FFF mov     rdi, rbp
//   0x57002 mov     r8d, [rdx+rax*4]
//   0x57006 mov     rdx, r12
//   0x57009 call    sub_69100
//   0x5700E add     ebx, 1
//   0x57011 movsxd  rax, ebx
//   0x57014 cmp     rax, qword ptr [rsp+58h+var_40]
//   0x57019 jb      short loc_56FF0
//   0x5701B mov     rdi, [rsp+58h+var_50]; void *
//   0x57020 test    rdi, rdi
//   0x57023 jz      short loc_57046
//   0x57025 mov     rax, [rdi]
//   0x57028 lea     rdx, sub_54910
//   0x5702F mov     rax, [rax+8]
//   0x57033 cmp     rax, rdx
//   0x57036 jnz     loc_570F0
//   0x5703C mov     esi, 40h ; '@'; unsigned __int64
//   0x57041 call    __ZdlPvm; operator delete(void *,ulong)
//   0x57046 mov     rdi, [rsp+58h+var_48]
//   0x5704B test    rdi, rdi
//   0x5704E jz      short loc_5705E
//   0x57050 mov     qword ptr [rsp+58h+var_40], 0
//   0x57059 call    _qfree
//   0x5705E mov     rdi, [rsp+58h+var_58]; void *
//   0x57062 test    rdi, rdi
//   0x57065 jz      short loc_57088
//   0x57067 mov     rax, [rdi]
//   0x5706A lea     rdx, sub_54910
//   0x57071 mov     rax, [rax+8]
//   0x57075 cmp     rax, rdx
//   0x57078 jnz     loc_57130
//   0x5707E mov     esi, 40h ; '@'; unsigned __int64
//   0x57083 call    __ZdlPvm; operator delete(void *,ulong)
//   0x57088 mov     rax, [rsp+58h+var_30]
//   0x5708D sub     rax, fs:28h
//   0x57096 jnz     loc_57137
//   0x5709C add     rsp, 30h
//   0x570A0 mov     eax, r13d
//   0x570A3 pop     rbx
//   0x570A4 pop     rbp
//   0x570A5 pop     r12
//   0x570A7 pop     r13
//   0x570A9 pop     r14
//   0x570AB retn
//   0x570AC align 10h
//   0x570B0 mov     rbx, [rbp+258h]
//   0x570B7 cmp     qword ptr [rbx+10h], 1Dh
//   0x570BC mov     rsi, [rbx]
//   0x570BF jbe     short loc_57100
//   0x570C1 movdqa  xmm0, cs:xmmword_940C0
//   0x570C9 mov     qword ptr [rbx+8], 1Eh
//   0x570D1 movups  xmmword ptr [rsi], xmm0
//   0x570D4 movdqa  xmm0, cs:xmmword_940D0
//   0x570DC movups  xmmword ptr [rsi+0Dh], xmm0
//   0x570E0 mov     rax, [rbx]
//   0x570E3 mov     byte ptr [rax+1Dh], 0
//   0x570E7 jmp     loc_57046
//   0x570EC align 10h
//   0x570F0 call    rax
//   0x570F2 jmp     loc_57046
//   0x570F7 align 20h
//   0x57100 mov     ecx, 1
//   0x57105 mov     edx, 1Eh
//   0x5710A mov     rdi, rbx
//   0x5710D call    _qvector_reserve
//   0x57112 mov     [rbx], rax
//   0x57115 mov     rsi, rax
//   0x57118 jmp     short loc_570C1
//   0x5711A align 20h
//   0x57120 xor     r13d, r13d
//   0x57123 jmp     loc_57046
//   0x57128 align 10h
//   0x57130 call    rax
//   0x57132 jmp     loc_57088
//   0x57137 call    ___stack_chk_fail
//   0x5713C mov     rbx, rax
//   0x5713F jmp     loc_2031E
//   0x57144 mov     rbx, rax
//   0x57147 jmp     loc_20326
// ============================================================

void sub_56F50(/* signature unknown */)
{
    // see disassembly above
}

