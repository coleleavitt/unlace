// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7100
// Name:            .recalc_spd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7100 jmp     cs:off_1D068
//
// Resolved target: recalc_spd
// Target address:  0x1D398
// GOT/IAT slot:    0x1D068
// Slot symbol:     off_1D068
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .recalc_spd(/* see target signature */)
{
    // Tail-call to recalc_spd via GOT/IAT indirection
    return recalc_spd(/* forwarded args */);
}

