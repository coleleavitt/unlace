// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x198E70
// Name:           sub_198E70
// Function size:  92 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x198E70 sub     rsp, 8
//   0x198E74 test    rdi, rdi
//   0x198E77 jz      short loc_198E9D
//   0x198E79 lea     rax, interr_exc_t___vtable_at_1764016
//   0x198E80 mov     r8, [rax]
//   0x198E83 test    r8, r8
//   0x198E86 jz      short loc_198EB1
//   0x198E88 mov     rcx, rsi
//   0x198E8B mov     rdx, rdi
//   0x198E8E mov     esi, 3
//   0x198E93 mov     edi, 18h
//   0x198E98 xor     eax, eax
//   0x198E9A call    r8
//   0x198E9D lea     rax, unk_2439A8
//   0x198EA4 mov     edi, 1; status
//   0x198EA9 add     dword ptr [rax], 1
//   0x198EAC call    sub_198E30
//   0x198EB1 call    sub_19D9B0
//   0x198EB6 mov     rax, cs:stderr_ptr
//   0x198EBD mov     edi, 0Ah
//   0x198EC2 mov     rsi, [rax]
//   0x198EC5 call    sub_1982E0
//   0x198ECA jmp     short loc_198E9D
// ============================================================

void sub_198E70(/* signature unknown */)
{
    // see disassembly above
}

