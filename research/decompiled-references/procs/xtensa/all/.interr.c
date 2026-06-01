// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x70C0
// Name:            .interr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x70C0 jmp     cs:off_1D048
//
// Resolved target: interr
// Target address:  0x1D378
// GOT/IAT slot:    0x1D048
// Slot symbol:     off_1D048
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .interr(/* see target signature */)
{
    // Tail-call to interr via GOT/IAT indirection
    return interr(/* forwarded args */);
}

