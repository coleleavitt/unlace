// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xFE10
// Name:           sub_FE10
// Function size:  320 bytes (75 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xFE10 sub     rsp, 28h
//   0xFE14 mov     rax, fs:28h
//   0xFE1D mov     [rsp+28h+var_10], rax
//   0xFE22 xor     eax, eax
//   0xFE24 movzx   eax, word ptr [rsi+18h]
//   0xFE28 mov     [rsp+28h+var_20], 0
//   0xFE31 mov     [rsp+28h+var_18], 0
//   0xFE3A sub     eax, 2Bh ; '+'; switch 43 cases
//   0xFE3D cmp     ax, 2Ah
//   0xFE41 ja      short def_FE57; jumptable 000000000000FE57 default case, cases 44,46-76,80-83
//   0xFE43 lea     rdx, jpt_FE57
//   0xFE4A movzx   eax, ax
//   0xFE4D mov     rcx, rsi
//   0xFE50 movsxd  rax, ds:(jpt_FE57 - 251D8h)[rdx+rax*4]
//   0xFE54 add     rax, rdx
//   0xFE57 jmp     rax; switch jump
//   0xFE59 align 20h
//   0xFE60 xor     eax, eax; jumptable 000000000000FE57 default case, cases 44,46-76,80-83
//   0xFE62 mov     rdx, [rsp+28h+var_10]
//   0xFE67 sub     rdx, fs:28h
//   0xFE70 jnz     loc_FF29
//   0xFE76 add     rsp, 28h
//   0xFE7A retn
//   0xFE7B align 20h
//   0xFE80 lea     rdx, [rsp+28h+var_18]; jumptable 000000000000FE57 cases 43,45,79
//   0xFE85 lea     rsi, [rsp+28h+var_20]
//   0xFE8A call    sub_21D20
//   0xFE8F cmp     eax, 5
//   0xFE92 jz      short loc_FF10
//   0xFE94 cmp     eax, 6
//   0xFE97 jnz     short def_FE57; jumptable 000000000000FE57 default case, cases 44,46-76,80-83
//   0xFE99 mov     rdi, [rsp+28h+var_20]
//   0xFE9E call    _bitcount
//   0xFEA3 mov     rdx, [rsp+28h+var_18]
//   0xFEA8 lea     eax, [rdx+rax*4]
//   0xFEAB jmp     short loc_FE62
//   0xFEAD align 10h
//   0xFEB0 cmp     byte ptr [rsi+29h], 9; jumptable 000000000000FE57 cases 84,85
//   0xFEB4 jnz     short loc_FF2E
//   0xFEB6 mov     rax, [rsi+58h]
//   0xFEBA mov     rdi, [rsi+30h]
//   0xFEBE shl     rax, 2
//   0xFEC2 mov     [rsp+28h+var_20], rdi
//   0xFEC7 mov     [rsp+28h+var_18], rax
//   0xFECC call    _bitcount
//   0xFED1 mov     rdx, [rsp+28h+var_18]
//   0xFED6 lea     eax, [rdx+rax*4]
//   0xFED9 neg     eax
//   0xFEDB jmp     short loc_FE62
//   0xFEDD align 20h
//   0xFEE0 cmp     byte ptr [rsi+51h], 9; jumptable 000000000000FE57 cases 77,78
//   0xFEE4 jnz     short loc_FF2E
//   0xFEE6 mov     rax, [rsi+30h]
//   0xFEEA mov     rdi, [rsi+58h]
//   0xFEEE shl     rax, 2
//   0xFEF2 mov     [rsp+28h+var_20], rdi
//   0xFEF7 mov     [rsp+28h+var_18], rax
//   0xFEFC call    _bitcount
//   0xFF01 mov     rdx, [rsp+28h+var_18]
//   0xFF06 lea     eax, [rdx+rax*4]
//   0xFF09 jmp     loc_FE62
//   0xFF0E align 10h
//   0xFF10 mov     rdi, [rsp+28h+var_20]
//   0xFF15 call    _bitcount
//   0xFF1A mov     rdx, [rsp+28h+var_18]
//   0xFF1F lea     eax, [rdx+rax*4]
//   0xFF22 neg     eax
//   0xFF24 jmp     loc_FE62
//   0xFF29 call    ___stack_chk_fail
//   0xFF2E mov     rax, [rsp+28h+var_10]
//   0xFF33 sub     rax, fs:28h
//   0xFF3C jnz     short loc_FF29
//   0xFF3E call    sub_E9E0
//   0xFF43 nop     word ptr [rax+rax+00000000h]
//   0xFF4D nop     dword ptr [rax]
// ============================================================

void sub_FE10(/* signature unknown */)
{
    // see disassembly above
}

