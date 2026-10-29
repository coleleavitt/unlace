// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x54D0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x54D0 jmp     cs:off_1A250
//
// Resolved target: get_ash
// Target address:  0x1A5F0
// GOT/IAT slot:    0x1A250
// Slot symbol:     off_1A250
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

