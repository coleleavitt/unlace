// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6610
// Name:            .get_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6610 jmp     cs:off_2D2F0
//
// Resolved target: get_path
// Target address:  0x2D800
// GOT/IAT slot:    0x2D2F0
// Slot symbol:     off_2D2F0
// Target type:     <no type info>
// ============================================================

void .get_path(/* see target signature */)
{
    // Tail-call to get_path via GOT/IAT indirection
    return get_path(/* forwarded args */);
}

