// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x7B20
// Name:           sub_7B20
// Function size:  90 bytes (32 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x7B20 push    rbp
//   0x7B21 mov     rbp, rdi
//   0x7B24 mov     edi, 0Bh
//   0x7B29 push    rbx
//   0x7B2A mov     rbx, rsi
//   0x7B2D mov     esi, 1
//   0x7B32 sub     rsp, 8
//   0x7B36 call    _getinf_flag
//   0x7B3B test    al, al
//   0x7B3D jz      short loc_7B6E
//   0x7B3F xor     eax, eax
//   0x7B41 test    rbx, rbx
//   0x7B44 jz      short loc_7B50
//   0x7B46 add     rsp, 8
//   0x7B4A pop     rbx
//   0x7B4B pop     rbp
//   0x7B4C retn
//   0x7B4D align 10h
//   0x7B50 xor     esi, esi
//   0x7B52 mov     rdi, rbp
//   0x7B55 call    sub_BA40
//   0x7B5A xor     esi, esi
//   0x7B5C mov     rdi, rbp
//   0x7B5F call    sub_1A000
//   0x7B64 xor     esi, esi
//   0x7B66 mov     rdi, rbp
//   0x7B69 call    sub_19EF0
//   0x7B6E add     rsp, 8
//   0x7B72 mov     eax, 1
//   0x7B77 pop     rbx
//   0x7B78 pop     rbp
//   0x7B79 retn
// ============================================================

void sub_7B20(/* signature unknown */)
{
    // see disassembly above
}

