// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20570
// Name:            .reg_finder_calc_op_addr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20570 jmp     cs:off_952A0
//
// Resolved target: reg_finder_calc_op_addr
// Target address:  0x95CD8
// GOT/IAT slot:    0x952A0
// Slot symbol:     off_952A0
// Target type:     <no type info>
// ============================================================

void .reg_finder_calc_op_addr(/* see target signature */)
{
    // Tail-call to reg_finder_calc_op_addr via GOT/IAT indirection
    return reg_finder_calc_op_addr(/* forwarded args */);
}

