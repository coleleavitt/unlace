// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x16B970
// Name:           sub_16B970
// Function size:  85 bytes (25 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x16B970 mov     eax, edi
//   0x16B972 sub     rsp, 8
//   0x16B976 mov     rdi, rsi
//   0x16B979 test    eax, eax
//   0x16B97B jnz     short loc_16B998
//   0x16B97D lea     rcx, interr_exc_t___vtable_at_1764016
//   0x16B984 mov     edi, 17h
//   0x16B989 call    qword ptr [rcx]
//   0x16B98B add     rsp, 8
//   0x16B98F cdqe
//   0x16B991 retn
//   0x16B992 align 8
//   0x16B998 jle     short loc_16B9BD
//   0x16B99A lea     r8, interr_exc_t___vtable_at_1764016
//   0x16B9A1 mov     rcx, rdx
//   0x16B9A4 mov     edi, 18h
//   0x16B9A9 mov     rdx, rsi
//   0x16B9AC xor     eax, eax
//   0x16B9AE mov     esi, 2
//   0x16B9B3 call    qword ptr [r8]
//   0x16B9B6 xor     eax, eax
//   0x16B9B8 add     rsp, 8
//   0x16B9BC retn
//   0x16B9BD mov     rsi, rdx
//   0x16B9C0 call    sub_198E70
// ============================================================

void sub_16B970(/* signature unknown */)
{
    // see disassembly above
}

