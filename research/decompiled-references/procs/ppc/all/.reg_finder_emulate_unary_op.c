// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C90
// Name:            .reg_finder_emulate_unary_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C90 jmp     cs:off_95630
//
// Resolved target: reg_finder_emulate_unary_op
// Target address:  0x96078
// GOT/IAT slot:    0x95630
// Slot symbol:     off_95630
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_unary_op(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_unary_op via GOT/IAT indirection
    return reg_finder_emulate_unary_op(/* forwarded args */);
}

