// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7170
// Name:            .getseg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7170 jmp     cs:off_1D0A0
//
// Resolved target: getseg
// Target address:  0x1D3D0
// GOT/IAT slot:    0x1D0A0
// Slot symbol:     off_1D0A0
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .getseg(/* see target signature */)
{
    // Tail-call to getseg via GOT/IAT indirection
    return getseg(/* forwarded args */);
}

