// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x25F0
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x25F0 jmp     cs:off_B2E0
//
// Resolved target: file2base
// Target address:  0xB798
// GOT/IAT slot:    0xB2E0
// Slot symbol:     off_B2E0
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

