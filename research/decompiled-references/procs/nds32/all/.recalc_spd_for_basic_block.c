// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8130
// Name:            .recalc_spd_for_basic_block
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8130 jmp     cs:off_2A080
//
// Resolved target: recalc_spd_for_basic_block
// Target address:  0x2A5F0
// GOT/IAT slot:    0x2A080
// Slot symbol:     off_2A080
// Target type:     <no type info>
// ============================================================

void .recalc_spd_for_basic_block(/* see target signature */)
{
    // Tail-call to recalc_spd_for_basic_block via GOT/IAT indirection
    return recalc_spd_for_basic_block(/* forwarded args */);
}

