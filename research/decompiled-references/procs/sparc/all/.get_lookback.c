// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7100
// Name:            .get_lookback
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7100 jmp     cs:off_19068
//
// Resolved target: get_lookback
// Target address:  0x19598
// GOT/IAT slot:    0x19068
// Slot symbol:     off_19068
// Target type:     <no type info>
// ============================================================

void .get_lookback(/* see target signature */)
{
    // Tail-call to get_lookback via GOT/IAT indirection
    return get_lookback(/* forwarded args */);
}

