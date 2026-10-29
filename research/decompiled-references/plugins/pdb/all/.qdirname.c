// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D150
// Name:            .qdirname
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D150 jmp     cs:off_B3090
//
// Resolved target: qdirname
// Target address:  0xB3810
// GOT/IAT slot:    0xB3090
// Slot symbol:     off_B3090
// Target type:     <no type info>
// ============================================================

void .qdirname(/* see target signature */)
{
    // Tail-call to qdirname via GOT/IAT indirection
    return qdirname(/* forwarded args */);
}

