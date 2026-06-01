// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA410
// Name:            .swap_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA410 jmp     cs:off_CA1F0
//
// Resolved target: swap_value
// Target address:  0xD0B20
// GOT/IAT slot:    0xCA1F0
// Slot symbol:     off_CA1F0
// Target type:     <no type info>
// ============================================================

void .swap_value(/* see target signature */)
{
    // Tail-call to swap_value via GOT/IAT indirection
    return swap_value(/* forwarded args */);
}

