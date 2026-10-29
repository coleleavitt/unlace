// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2210
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2210 jmp     cs:off_B0F0
//
// Resolved target: set_op_type
// Target address:  0xB388
// GOT/IAT slot:    0xB0F0
// Slot symbol:     off_B0F0
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

