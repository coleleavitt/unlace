// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20290
// Name:            .reg_finder_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20290 jmp     cs:off_95130
//
// Resolved target: reg_finder_ctr
// Target address:  0x95B68
// GOT/IAT slot:    0x95130
// Slot symbol:     off_95130
// Target type:     <no type info>
// ============================================================

void .reg_finder_ctr(/* see target signature */)
{
    // Tail-call to reg_finder_ctr via GOT/IAT indirection
    return reg_finder_ctr(/* forwarded args */);
}

