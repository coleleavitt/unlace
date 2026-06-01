// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16670
// Name:            .pow
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16670 jmp     cs:off_4F320
//
// Resolved target: pow
// Target address:  0x50340
// GOT/IAT slot:    0x4F320
// Slot symbol:     off_4F320
// Target type:     double(double x, double y)
// ============================================================

/* see target sig */ .pow(/* see target signature */)
{
    // Tail-call to pow via GOT/IAT indirection
    return pow(/* forwarded args */);
}

