// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20CB0
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20CB0 jmp     cs:off_95640
//
// Resolved target: insn_create_op_data
// Target address:  0x96088
// GOT/IAT slot:    0x95640
// Slot symbol:     off_95640
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

