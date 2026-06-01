// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23B0
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23B0 jmp     cs:off_81C0
//
// Resolved target: file2base
// Target address:  0x8438
// GOT/IAT slot:    0x81C0
// Slot symbol:     off_81C0
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

