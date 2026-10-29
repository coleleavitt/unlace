// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8660
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8660 jmp     cs:off_2A318
//
// Resolved target: insn_create_op_data
// Target address:  0x2A898
// GOT/IAT slot:    0x2A318
// Slot symbol:     off_2A318
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

