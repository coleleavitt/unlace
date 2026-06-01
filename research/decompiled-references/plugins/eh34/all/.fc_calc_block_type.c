// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6750
// Name:            .fc_calc_block_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6750 jmp     cs:off_8D390
//
// Resolved target: fc_calc_block_type
// Target address:  0x8D958
// GOT/IAT slot:    0x8D390
// Slot symbol:     off_8D390
// Target type:     <no type info>
// ============================================================

void .fc_calc_block_type(/* see target signature */)
{
    // Tail-call to fc_calc_block_type via GOT/IAT indirection
    return fc_calc_block_type(/* forwarded args */);
}

