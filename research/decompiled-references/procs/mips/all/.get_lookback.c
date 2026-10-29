// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19230
// Name:            .get_lookback
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19230 jmp     cs:off_75100
//
// Resolved target: get_lookback
// Target address:  0x75950
// GOT/IAT slot:    0x75100
// Slot symbol:     off_75100
// Target type:     <no type info>
// ============================================================

void .get_lookback(/* see target signature */)
{
    // Tail-call to get_lookback via GOT/IAT indirection
    return get_lookback(/* forwarded args */);
}

