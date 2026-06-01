// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA190
// Name:            .reg_finder_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA190 jmp     cs:off_350B0
//
// Resolved target: reg_finder_ctr
// Target address:  0x35700
// GOT/IAT slot:    0x350B0
// Slot symbol:     off_350B0
// Target type:     <no type info>
// ============================================================

void .reg_finder_ctr(/* see target signature */)
{
    // Tail-call to reg_finder_ctr via GOT/IAT indirection
    return reg_finder_ctr(/* forwarded args */);
}

