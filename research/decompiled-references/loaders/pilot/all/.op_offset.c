// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2100
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2100 jmp     cs:off_8068
//
// Resolved target: op_offset
// Target address:  0x8248
// GOT/IAT slot:    0x8068
// Slot symbol:     off_8068
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

