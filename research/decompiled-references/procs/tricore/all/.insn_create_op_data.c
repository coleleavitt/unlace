// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66F0
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66F0 jmp     cs:off_24360
//
// Resolved target: insn_create_op_data
// Target address:  0x26140
// GOT/IAT slot:    0x24360
// Slot symbol:     off_24360
// Target type:     <no type info>
// ============================================================

void .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

