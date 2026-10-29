// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91D0
// Name:            .reg_finder_dtr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91D0 jmp     cs:off_2E0D0
//
// Resolved target: reg_finder_dtr
// Target address:  0x2E740
// GOT/IAT slot:    0x2E0D0
// Slot symbol:     off_2E0D0
// Target type:     <no type info>
// ============================================================

void .reg_finder_dtr(/* see target signature */)
{
    // Tail-call to reg_finder_dtr via GOT/IAT indirection
    return reg_finder_dtr(/* forwarded args */);
}

