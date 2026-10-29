// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x201E0
// Name:            .recalc_spd_for_basic_block
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x201E0 jmp     cs:off_950D8
//
// Resolved target: recalc_spd_for_basic_block
// Target address:  0x95B08
// GOT/IAT slot:    0x950D8
// Slot symbol:     off_950D8
// Target type:     <no type info>
// ============================================================

void .recalc_spd_for_basic_block(/* see target signature */)
{
    // Tail-call to recalc_spd_for_basic_block via GOT/IAT indirection
    return recalc_spd_for_basic_block(/* forwarded args */);
}

