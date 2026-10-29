// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D6A0
// Name:            .swap64
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D6A0 jmp     cs:off_B3338
//
// Resolved target: swap64
// Target address:  0xB3AD8
// GOT/IAT slot:    0xB3338
// Slot symbol:     off_B3338
// Target type:     <no type info>
// ============================================================

void .swap64(/* see target signature */)
{
    // Tail-call to swap64 via GOT/IAT indirection
    return swap64(/* forwarded args */);
}

