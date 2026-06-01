// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6A30
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6A30 jmp     cs:off_2F500
//
// Resolved target: segtype
// Target address:  0x2FB90
// GOT/IAT slot:    0x2F500
// Slot symbol:     off_2F500
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

