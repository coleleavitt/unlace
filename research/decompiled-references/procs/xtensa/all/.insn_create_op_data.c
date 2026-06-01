// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7340
// Name:            .insn_create_op_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7340 jmp     cs:off_1D188
//
// Resolved target: insn_create_op_data
// Target address:  0x1D4C8
// GOT/IAT slot:    0x1D188
// Slot symbol:     off_1D188
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .insn_create_op_data(/* see target signature */)
{
    // Tail-call to insn_create_op_data via GOT/IAT indirection
    return insn_create_op_data(/* forwarded args */);
}

