// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33B0
// Name:            .qlread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33B0 jmp     cs:off_141C0
//
// Resolved target: qlread
// Target address:  0x147B0
// GOT/IAT slot:    0x141C0
// Slot symbol:     off_141C0
// Target type:     <no type info>
// ============================================================

void .qlread(/* see target signature */)
{
    // Tail-call to qlread via GOT/IAT indirection
    return qlread(/* forwarded args */);
}

