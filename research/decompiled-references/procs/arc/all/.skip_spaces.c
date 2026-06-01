// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x85B0
// Name:            .skip_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x85B0 jmp     cs:off_2A2C0
//
// Resolved target: skip_spaces
// Target address:  0x2BCD0
// GOT/IAT slot:    0x2A2C0
// Slot symbol:     off_2A2C0
// Target type:     <no type info>
// ============================================================

void .skip_spaces(/* see target signature */)
{
    // Tail-call to skip_spaces via GOT/IAT indirection
    return skip_spaces(/* forwarded args */);
}

