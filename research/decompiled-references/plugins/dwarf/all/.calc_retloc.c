// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA8C0
// Name:            .calc_retloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA8C0 jmp     cs:off_CA448
//
// Resolved target: calc_retloc
// Target address:  0xD0D88
// GOT/IAT slot:    0xCA448
// Slot symbol:     off_CA448
// Target type:     <no type info>
// ============================================================

void .calc_retloc(/* see target signature */)
{
    // Tail-call to calc_retloc via GOT/IAT indirection
    return calc_retloc(/* forwarded args */);
}

