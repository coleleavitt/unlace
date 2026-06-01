// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7640
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7640 jmp     cs:off_19308
//
// Resolved target: insn_create_op_data
// Target address:  0x19848
// GOT/IAT slot:    0x19308
// Slot symbol:     off_19308
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

