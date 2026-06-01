// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA130
// Name:            .recalc_spd_for_basic_block
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA130 jmp     cs:off_35080
//
// Resolved target: recalc_spd_for_basic_block
// Target address:  0x356D0
// GOT/IAT slot:    0x35080
// Slot symbol:     off_35080
// Target type:     <no type info>
// ============================================================

void .recalc_spd_for_basic_block(/* see target signature */)
{
    // Tail-call to recalc_spd_for_basic_block via GOT/IAT indirection
    return recalc_spd_for_basic_block(/* forwarded args */);
}

