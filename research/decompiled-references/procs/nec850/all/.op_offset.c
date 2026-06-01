// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9350
// Name:            .op_offset
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9350 jmp     cs:off_2E190
//
// Resolved target: op_offset
// Target address:  0x2E800
// GOT/IAT slot:    0x2E190
// Slot symbol:     off_2E190
// Target type:     <no type info>
// ============================================================

void .op_offset(/* see target signature */)
{
    // Tail-call to op_offset via GOT/IAT indirection
    return op_offset(/* forwarded args */);
}

