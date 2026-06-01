// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D630
// Name:            .set_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D630 jmp     cs:off_B3300
//
// Resolved target: set_name
// Target address:  0xB3AA0
// GOT/IAT slot:    0xB3300
// Slot symbol:     off_B3300
// Target type:     <no type info>
// ============================================================

void .set_name(/* see target signature */)
{
    // Tail-call to set_name via GOT/IAT indirection
    return set_name(/* forwarded args */);
}

