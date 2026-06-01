// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6180
// Name:            .get_lookback
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6180 jmp     cs:off_240A8
//
// Resolved target: get_lookback
// Target address:  0x25E78
// GOT/IAT slot:    0x240A8
// Slot symbol:     off_240A8
// Target type:     <no type info>
// ============================================================

void .get_lookback(/* see target signature */)
{
    // Tail-call to get_lookback via GOT/IAT indirection
    return get_lookback(/* forwarded args */);
}

