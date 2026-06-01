// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7650
// Name:            .clr_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7650 jmp     cs:off_19310
//
// Resolved target: clr_op_type
// Target address:  0x19850
// GOT/IAT slot:    0x19310
// Slot symbol:     off_19310
// Target type:     <no type info>
// ============================================================

void .clr_op_type(/* see target signature */)
{
    // Tail-call to clr_op_type via GOT/IAT indirection
    return clr_op_type(/* forwarded args */);
}

