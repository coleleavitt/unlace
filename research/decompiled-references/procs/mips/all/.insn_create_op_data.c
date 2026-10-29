// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B30
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B30 jmp     cs:off_75580
//
// Resolved target: insn_create_op_data
// Target address:  0x75DE0
// GOT/IAT slot:    0x75580
// Slot symbol:     off_75580
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

