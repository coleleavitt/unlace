// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D790
// Name:            .lread
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D790 jmp     cs:off_B33B0
//
// Resolved target: lread
// Target address:  0xB3B50
// GOT/IAT slot:    0xB33B0
// Slot symbol:     off_B33B0
// Target type:     <no type info>
// ============================================================

void .lread(/* see target signature */)
{
    // Tail-call to lread via GOT/IAT indirection
    return lread(/* forwarded args */);
}

