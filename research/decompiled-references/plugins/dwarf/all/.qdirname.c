// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA170
// Name:            .qdirname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA170 jmp     cs:off_CA0A0
//
// Resolved target: qdirname
// Target address:  0xD09C8
// GOT/IAT slot:    0xCA0A0
// Slot symbol:     off_CA0A0
// Target type:     <no type info>
// ============================================================

void .qdirname(/* see target signature */)
{
    // Tail-call to qdirname via GOT/IAT indirection
    return qdirname(/* forwarded args */);
}

