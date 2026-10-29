// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D20
// Name:            .reg_finder_make_rfop
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D20 jmp     cs:off_95678
//
// Resolved target: reg_finder_make_rfop
// Target address:  0x960C8
// GOT/IAT slot:    0x95678
// Slot symbol:     off_95678
// Target type:     <no type info>
// ============================================================

void .reg_finder_make_rfop(/* see target signature */)
{
    // Tail-call to reg_finder_make_rfop via GOT/IAT indirection
    return reg_finder_make_rfop(/* forwarded args */);
}

