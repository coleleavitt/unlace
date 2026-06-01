// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7160
// Name:            .match_jpt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7160 jmp     cs:off_1D098
//
// Resolved target: match_jpt
// Target address:  0x1D3C8
// GOT/IAT slot:    0x1D098
// Slot symbol:     off_1D098
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .match_jpt(/* see target signature */)
{
    // Tail-call to match_jpt via GOT/IAT indirection
    return match_jpt(/* forwarded args */);
}

