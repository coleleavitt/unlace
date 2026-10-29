// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19140
// Name:            .recalc_spd_for_basic_block
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19140 jmp     cs:off_75088
//
// Resolved target: recalc_spd_for_basic_block
// Target address:  0x758D8
// GOT/IAT slot:    0x75088
// Slot symbol:     off_75088
// Target type:     <no type info>
// ============================================================

void .recalc_spd_for_basic_block(/* see target signature */)
{
    // Tail-call to recalc_spd_for_basic_block via GOT/IAT indirection
    return recalc_spd_for_basic_block(/* forwarded args */);
}

