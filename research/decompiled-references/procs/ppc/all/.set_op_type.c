// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20800
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20800 jmp     cs:off_953E8
//
// Resolved target: set_op_type
// Target address:  0x95E20
// GOT/IAT slot:    0x953E8
// Slot symbol:     off_953E8
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

