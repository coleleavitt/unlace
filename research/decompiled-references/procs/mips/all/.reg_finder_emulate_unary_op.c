// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B10
// Name:            .reg_finder_emulate_unary_op
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B10 jmp     cs:off_75570
//
// Resolved target: reg_finder_emulate_unary_op
// Target address:  0x75DD0
// GOT/IAT slot:    0x75570
// Slot symbol:     off_75570
// Target type:     <no type info>
// ============================================================

void .reg_finder_emulate_unary_op(/* see target signature */)
{
    // Tail-call to reg_finder_emulate_unary_op via GOT/IAT indirection
    return reg_finder_emulate_unary_op(/* forwarded args */);
}

