// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22C0
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22C0 jmp     cs:off_7148
//
// Resolved target: file2base
// Target address:  0x7308
// GOT/IAT slot:    0x7148
// Slot symbol:     off_7148
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

