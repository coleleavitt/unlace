// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x102A0
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x102A0 jmp     cs:off_2E138
//
// Resolved target: insn_create_op_data
// Target address:  0x36DC0
// GOT/IAT slot:    0x2E138
// Slot symbol:     off_2E138
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

