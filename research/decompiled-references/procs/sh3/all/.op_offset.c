// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5270
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5270 jmp     cs:off_15120
//
// Resolved target: op_offset
// Target address:  0x161B0
// GOT/IAT slot:    0x15120
// Slot symbol:     off_15120
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

