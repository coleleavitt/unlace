// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x17070
// Name:            .acos
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x17070 jmp     cs:off_4F820
//
// Resolved target: acos
// Target address:  0x50C58
// GOT/IAT slot:    0x4F820
// Slot symbol:     off_4F820
// Target type:     double(double x)
// ============================================================

/* see target sig */ .acos(/* see target signature */)
{
    // Tail-call to acos via GOT/IAT indirection
    return acos(/* forwarded args */);
}

