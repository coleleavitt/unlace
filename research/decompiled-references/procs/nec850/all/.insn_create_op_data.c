// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9810
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9810 jmp     cs:off_2E3F0
//
// Resolved target: insn_create_op_data
// Target address:  0x2EA70
// GOT/IAT slot:    0x2E3F0
// Slot symbol:     off_2E3F0
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

