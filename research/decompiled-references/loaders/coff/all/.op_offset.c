// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x42E0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x42E0 jmp     cs:off_23158
//
// Resolved target: op_offset
// Target address:  0x23578
// GOT/IAT slot:    0x23158
// Slot symbol:     off_23158
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

