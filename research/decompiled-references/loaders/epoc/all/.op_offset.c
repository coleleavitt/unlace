// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31F0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31F0 jmp     cs:off_130E0
//
// Resolved target: op_offset
// Target address:  0x137D0
// GOT/IAT slot:    0x130E0
// Slot symbol:     off_130E0
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

