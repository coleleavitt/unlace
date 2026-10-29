// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6150
// Name:            .reg_finder_ctr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6150 jmp     cs:off_24090
//
// Resolved target: reg_finder_ctr
// Target address:  0x25E60
// GOT/IAT slot:    0x24090
// Slot symbol:     off_24090
// Target type:     <no type info>
// ============================================================

void .reg_finder_ctr(/* see target signature */)
{
    // Tail-call to reg_finder_ctr via GOT/IAT indirection
    return reg_finder_ctr(/* forwarded args */);
}

