// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x14160
// Name:           sub_14160
// Function size:  147 bytes (41 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x14160 push    rbx
//   0x14161 sub     rsp, 10h
//   0x14165 mov     rax, fs:28h
//   0x1416E mov     [rsp+18h+var_10], rax
//   0x14173 xor     eax, eax
//   0x14175 cmp     rsi, 56h ; 'V'
//   0x14179 jz      short loc_141C0
//   0x1417B cmp     rsi, 5Eh ; '^'
//   0x1417F jz      short loc_141A0
//   0x14181 mov     rax, [rsp+18h+var_10]
//   0x14186 sub     rax, fs:28h
//   0x1418F jnz     short loc_141EE
//   0x14191 add     rsp, 10h
//   0x14195 xor     eax, eax
//   0x14197 pop     rbx
//   0x14198 retn
//   0x14199 align 20h
//   0x141A0 mov     eax, [rdx]
//   0x141A2 cmp     eax, 2Fh ; '/'
//   0x141A5 ja      short loc_141E0
//   0x141A7 mov     ecx, eax
//   0x141A9 add     eax, 8
//   0x141AC add     rcx, [rdx+10h]
//   0x141B0 mov     [rdx], eax
//   0x141B2 mov     rdi, [rcx]
//   0x141B5 call    sub_31A30
//   0x141BA jmp     short loc_14181
//   0x141BC align 20h
//   0x141C0 mov     rbx, rdi
//   0x141C3 lea     rdi, [rsp+18h+var_12]
//   0x141C8 call    sub_319A0
//   0x141CD mov     rax, [rbx+10h]
//   0x141D1 movzx   edx, [rsp+18h+var_11]
//   0x141D6 mov     [rax+2C2h], dl
//   0x141DC jmp     short loc_14181
//   0x141DE align 20h
//   0x141E0 mov     rcx, [rdx+8]
//   0x141E4 lea     rax, [rcx+8]
//   0x141E8 mov     [rdx+8], rax
//   0x141EC jmp     short loc_141B2
//   0x141EE call    ___stack_chk_fail
// ============================================================

void sub_14160(/* signature unknown */)
{
    // see disassembly above
}

