// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x209D0
// Name:            .skip_spaces
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x209D0 jmp     cs:off_954D0
//
// Resolved target: skip_spaces
// Target address:  0x95F08
// GOT/IAT slot:    0x954D0
// Slot symbol:     off_954D0
// Target type:     <no type info>
// ============================================================

void .skip_spaces(/* see target signature */)
{
    // Tail-call to skip_spaces via GOT/IAT indirection
    return skip_spaces(/* forwarded args */);
}

