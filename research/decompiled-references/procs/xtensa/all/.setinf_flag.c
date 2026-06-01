// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7130
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7130 jmp     cs:off_1D080
//
// Resolved target: setinf_flag
// Target address:  0x1D3B0
// GOT/IAT slot:    0x1D080
// Slot symbol:     off_1D080
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

