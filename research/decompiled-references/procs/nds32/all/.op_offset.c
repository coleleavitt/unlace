// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8290
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8290 jmp     cs:off_2A130
//
// Resolved target: op_offset
// Target address:  0x2A6A0
// GOT/IAT slot:    0x2A130
// Slot symbol:     off_2A130
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

