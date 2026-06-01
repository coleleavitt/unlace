// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA360
// Name:            .swap_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA360 jmp     cs:off_35198
//
// Resolved target: swap_value
// Target address:  0x357E8
// GOT/IAT slot:    0x35198
// Slot symbol:     off_35198
// Target type:     <no type info>
// ============================================================

void .swap_value(/* see target signature */)
{
    // Tail-call to swap_value via GOT/IAT indirection
    return swap_value(/* forwarded args */);
}

