// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23B0
// Name:            .segtype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23B0 jmp     cs:off_A1C0
//
// Resolved target: segtype
// Target address:  0xA488
// GOT/IAT slot:    0xA1C0
// Slot symbol:     off_A1C0
// Target type:     <no type info>
// ============================================================

void .segtype(/* see target signature */)
{
    // Tail-call to segtype via GOT/IAT indirection
    return segtype(/* forwarded args */);
}

