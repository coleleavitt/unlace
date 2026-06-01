// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8280
// Name:            .reg_finder_calc_op_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8280 jmp     cs:off_2A128
//
// Resolved target: reg_finder_calc_op_addr
// Target address:  0x2A698
// GOT/IAT slot:    0x2A128
// Slot symbol:     off_2A128
// Target type:     <no type info>
// ============================================================

void .reg_finder_calc_op_addr(/* see target signature */)
{
    // Tail-call to reg_finder_calc_op_addr via GOT/IAT indirection
    return reg_finder_calc_op_addr(/* forwarded args */);
}

