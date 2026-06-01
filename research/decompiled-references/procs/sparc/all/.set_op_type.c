// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7410
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7410 jmp     cs:off_191F0
//
// Resolved target: set_op_type
// Target address:  0x19720
// GOT/IAT slot:    0x191F0
// Slot symbol:     off_191F0
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

