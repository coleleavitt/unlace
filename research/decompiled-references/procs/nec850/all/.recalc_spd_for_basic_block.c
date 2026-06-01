// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9120
// Name:            .recalc_spd_for_basic_block
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9120 jmp     cs:off_2E078
//
// Resolved target: recalc_spd_for_basic_block
// Target address:  0x2E6E8
// GOT/IAT slot:    0x2E078
// Slot symbol:     off_2E078
// Target type:     <no type info>
// ============================================================

void .recalc_spd_for_basic_block(/* see target signature */)
{
    // Tail-call to recalc_spd_for_basic_block via GOT/IAT indirection
    return recalc_spd_for_basic_block(/* forwarded args */);
}

