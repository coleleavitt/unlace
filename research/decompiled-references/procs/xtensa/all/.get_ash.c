// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7390
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7390 jmp     cs:off_1D1B0
//
// Resolved target: get_ash
// Target address:  0x1D4F8
// GOT/IAT slot:    0x1D1B0
// Slot symbol:     off_1D1B0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

