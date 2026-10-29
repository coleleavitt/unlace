// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8310
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8310 jmp     cs:off_2A170
//
// Resolved target: op_offset
// Target address:  0x2BB80
// GOT/IAT slot:    0x2A170
// Slot symbol:     off_2A170
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

