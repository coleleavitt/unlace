// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23A0
// Name:            .file2base
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23A0 jmp     cs:off_A1B8
//
// Resolved target: file2base
// Target address:  0xA480
// GOT/IAT slot:    0xA1B8
// Slot symbol:     off_A1B8
// Target type:     <no type info>
// ============================================================

void .file2base(/* see target signature */)
{
    // Tail-call to file2base via GOT/IAT indirection
    return file2base(/* forwarded args */);
}

