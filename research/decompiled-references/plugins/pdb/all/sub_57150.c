// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x57150
// Name:           sub_57150
// Function size:  599 bytes (140 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x57150 push    r14
//   0x57152 push    r13
//   0x57154 push    r12
//   0x57156 push    rbp
//   0x57157 push    rbx
//   0x57158 sub     rsp, 60h
//   0x5715C mov     rsi, [rdi+260h]
//   0x57163 movzx   edx, word ptr [rdi+26Ah]
//   0x5716A mov     rbx, fs:28h
//   0x57173 mov     [rsp+88h+var_30], rbx
//   0x57178 mov     rbx, rdi
//   0x5717B mov     rdi, rsp
//   0x5717E mov     rax, [rsi]
//   0x57181 call    qword ptr [rax+18h]
//   0x57184 mov     rdi, [rsp+88h+var_88]
//   0x57188 test    rdi, rdi
//   0x5718B jz      loc_572F0
//   0x57191 mov     rax, [rdi]
//   0x57194 mov     r14, rsp
//   0x57197 lea     rsi, [rsp+88h+var_58]
//   0x5719C mov     edx, 1Ch
//   0x571A1 call    qword ptr [rax+30h]
//   0x571A4 mov     r12d, eax
//   0x571A7 test    al, al
//   0x571A9 jnz     short loc_57200
//   0x571AB mov     rdi, [rsp+88h+var_88]; void *
//   0x571AF test    rdi, rdi
//   0x571B2 jz      short loc_571D5
//   0x571B4 mov     rax, [rdi]
//   0x571B7 lea     rdx, sub_54910
//   0x571BE mov     rax, [rax+8]
//   0x571C2 cmp     rax, rdx
//   0x571C5 jnz     loc_57300
//   0x571CB mov     esi, 40h ; '@'; unsigned __int64
//   0x571D0 call    __ZdlPvm; operator delete(void *,ulong)
//   0x571D5 mov     rax, [rsp+88h+var_30]
//   0x571DA sub     rax, fs:28h
//   0x571E3 jnz     loc_5738A
//   0x571E9 add     rsp, 60h
//   0x571ED mov     eax, r12d
//   0x571F0 pop     rbx
//   0x571F1 pop     rbp
//   0x571F2 pop     r12
//   0x571F4 pop     r13
//   0x571F6 pop     r14
//   0x571F8 retn
//   0x571F9 align 20h
//   0x57200 pxor    xmm0, xmm0
//   0x57204 lea     rsi, [rsp+88h+var_78]
//   0x57209 mov     rdx, rsp
//   0x5720C mov     rdi, rbx
//   0x5720F mov     [rsp+88h+var_78], 0
//   0x57218 movups  [rsp+88h+var_70], xmm0
//   0x5721D call    sub_56CE0
//   0x57222 mov     r12d, eax
//   0x57225 test    al, al
//   0x57227 jz      loc_57310
//   0x5722D mov     rsi, [rbx+260h]
//   0x57234 lea     r13, [rsp+88h+var_80]
//   0x57239 movzx   edx, word ptr [rbx+26Ch]
//   0x57240 mov     rdi, r13
//   0x57243 mov     rax, [rsi]
//   0x57246 call    qword ptr [rax+18h]
//   0x57249 mov     rdi, [rsp+88h+var_80]
//   0x5724E test    rdi, rdi
//   0x57251 jz      loc_57350
//   0x57257 cmp     qword ptr [rsp+88h+var_70], 0
//   0x5725D jz      short loc_572A5
//   0x5725F xor     ebp, ebp
//   0x57261 xor     eax, eax
//   0x57263 nop     word ptr [rax+rax+00000000h]
//   0x5726E xchg    ax, ax
//   0x57270 mov     rdx, [rsp+88h+var_78]
//   0x57275 xor     r9d, r9d
//   0x57278 mov     ecx, 1
//   0x5727D xor     esi, esi
//   0x5727F mov     rdi, rbx
//   0x57282 mov     r8d, [rdx+rax*4]
//   0x57286 mov     rdx, r13
//   0x57289 call    sub_69100
//   0x5728E add     ebp, 1
//   0x57291 movsxd  rax, ebp
//   0x57294 cmp     rax, qword ptr [rsp+88h+var_70]
//   0x57299 jb      short loc_57270
//   0x5729B mov     rdi, [rsp+88h+var_80]; void *
//   0x572A0 test    rdi, rdi
//   0x572A3 jz      short loc_572C6
//   0x572A5 mov     rax, [rdi]
//   0x572A8 lea     rdx, sub_54910
//   0x572AF mov     rax, [rax+8]
//   0x572B3 cmp     rax, rdx
//   0x572B6 jnz     loc_57360
//   0x572BC mov     esi, 40h ; '@'; unsigned __int64
//   0x572C1 call    __ZdlPvm; operator delete(void *,ulong)
//   0x572C6 mov     rdi, [rsp+88h+var_78]
//   0x572CB test    rdi, rdi
//   0x572CE jz      loc_571AB
//   0x572D4 mov     qword ptr [rsp+88h+var_70], 0
//   0x572DD call    _qfree
//   0x572E2 jmp     loc_571AB
//   0x572E7 align 10h
//   0x572F0 xor     r12d, r12d
//   0x572F3 jmp     loc_571D5
//   0x572F8 align 20h
//   0x57300 call    rax
//   0x57302 jmp     loc_571D5
//   0x57307 align 10h
//   0x57310 mov     rbx, [rbx+258h]
//   0x57317 cmp     qword ptr [rbx+10h], 1Dh
//   0x5731C mov     rsi, [rbx]
//   0x5731F jbe     short loc_57370
//   0x57321 movdqa  xmm0, cs:xmmword_940E0
//   0x57329 mov     qword ptr [rbx+8], 1Eh
//   0x57331 movups  xmmword ptr [rsi], xmm0
//   0x57334 movdqa  xmm0, cs:xmmword_940F0
//   0x5733C movups  xmmword ptr [rsi+0Dh], xmm0
//   0x57340 mov     rax, [rbx]
//   0x57343 mov     byte ptr [rax+1Dh], 0
//   0x57347 jmp     loc_572C6
//   0x5734C align 10h
//   0x57350 xor     r12d, r12d
//   0x57353 jmp     loc_572C6
//   0x57358 align 20h
//   0x57360 call    rax
//   0x57362 jmp     loc_572C6
//   0x57367 align 10h
//   0x57370 mov     ecx, 1
//   0x57375 mov     edx, 1Eh
//   0x5737A mov     rdi, rbx
//   0x5737D call    _qvector_reserve
//   0x57382 mov     [rbx], rax
//   0x57385 mov     rsi, rax
//   0x57388 jmp     short loc_57321
//   0x5738A call    ___stack_chk_fail
//   0x5738F mov     rbx, rax
//   0x57392 jmp     loc_20380
//   0x57397 mov     rbx, rax
//   0x5739A jmp     loc_2036A
//   0x5739F mov     rbx, rax
//   0x573A2 jmp     loc_20362
// ============================================================

void sub_57150(/* signature unknown */)
{
    // see disassembly above
}

