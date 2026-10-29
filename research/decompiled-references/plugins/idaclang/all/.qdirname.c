// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30C0
// Name:            .qdirname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30C0 jmp     cs:off_29048
//
// Resolved target: qdirname
// Target address:  0x293F8
// GOT/IAT slot:    0x29048
// Slot symbol:     off_29048
// Target type:     <no type info>
// ============================================================

void .qdirname(/* see target signature */)
{
    // Tail-call to qdirname via GOT/IAT indirection
    return qdirname(/* forwarded args */);
}

