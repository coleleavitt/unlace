// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20590
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20590 jmp     cs:off_952B0
//
// Resolved target: op_offset
// Target address:  0x95CE8
// GOT/IAT slot:    0x952B0
// Slot symbol:     off_952B0
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

