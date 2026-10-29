// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x84C0
// Name:            .set_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x84C0 jmp     cs:off_2A248
//
// Resolved target: set_op_type
// Target address:  0x2BC58
// GOT/IAT slot:    0x2A248
// Slot symbol:     off_2A248
// Target type:     <no type info>
// ============================================================

void .set_op_type(/* see target signature */)
{
    // Tail-call to set_op_type via GOT/IAT indirection
    return set_op_type(/* forwarded args */);
}

