// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62A0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62A0 jmp     cs:off_1D138
//
// Resolved target: op_offset
// Target address:  0x1D628
// GOT/IAT slot:    0x1D138
// Slot symbol:     off_1D138
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

