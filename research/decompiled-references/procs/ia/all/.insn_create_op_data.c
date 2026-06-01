// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7330
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7330 jmp     cs:off_26180
//
// Resolved target: insn_create_op_data
// Target address:  0x26448
// GOT/IAT slot:    0x26180
// Slot symbol:     off_26180
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

