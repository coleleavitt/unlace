// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3390
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3390 jmp     cs:off_141B0
//
// Resolved target: set_name
// Target address:  0x147A0
// GOT/IAT slot:    0x141B0
// Slot symbol:     off_141B0
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

