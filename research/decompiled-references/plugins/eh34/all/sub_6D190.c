// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x6D190
// Name:           sub_6D190
// Function size:  49 bytes (14 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x6D190 movzx   eax, byte ptr [rdi+98h]
//   0x6D197 test    al, al
//   0x6D199 jnz     short locret_6D1C0
//   0x6D19B mov     rdx, cs:callui_ptr
//   0x6D1A2 push    rbx
//   0x6D1A3 lea     rsi, [rdi+58h]
//   0x6D1A7 mov     rbx, rdi
//   0x6D1AA mov     edi, 7Fh
//   0x6D1AF call    qword ptr [rdx]
//   0x6D1B1 mov     [rbx+98h], al
//   0x6D1B7 pop     rbx
//   0x6D1B8 retn
//   0x6D1B9 align 20h
//   0x6D1C0 retn
// ============================================================

void sub_6D190(/* signature unknown */)
{
    // see disassembly above
}

