// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19B40
// Name:            .clr_op_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19B40 jmp     cs:off_75588
//
// Resolved target: clr_op_type
// Target address:  0x75DE8
// GOT/IAT slot:    0x75588
// Slot symbol:     off_75588
// Target type:     <no type info>
// ============================================================

void .clr_op_type(/* see target signature */)
{
    // Tail-call to clr_op_type via GOT/IAT indirection
    return clr_op_type(/* forwarded args */);
}

