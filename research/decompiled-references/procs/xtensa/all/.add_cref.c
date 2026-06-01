// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7410
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7410 jmp     cs:off_1D1F0
//
// Resolved target: add_cref
// Target address:  0x1D538
// GOT/IAT slot:    0x1D1F0
// Slot symbol:     off_1D1F0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

