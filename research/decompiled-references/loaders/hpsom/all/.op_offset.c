// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10B0
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10B0 jmp     cs:off_5040
//
// Resolved target: op_offset
// Target address:  0x51E0
// GOT/IAT slot:    0x5040
// Slot symbol:     off_5040
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

