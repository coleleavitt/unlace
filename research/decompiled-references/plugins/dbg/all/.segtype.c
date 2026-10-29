// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35E0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35E0 jmp     cs:off_132D8
//
// Resolved target: segtype
// Target address:  0x13678
// GOT/IAT slot:    0x132D8
// Slot symbol:     off_132D8
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

