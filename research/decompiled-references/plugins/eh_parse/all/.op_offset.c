// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6320
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6320 jmp     cs:off_2F178
//
// Resolved target: op_offset
// Target address:  0x2F7E8
// GOT/IAT slot:    0x2F178
// Slot symbol:     off_2F178
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

