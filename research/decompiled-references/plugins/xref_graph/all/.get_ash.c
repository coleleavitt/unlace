// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x162A0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x162A0 jmp     cs:off_4F138
//
// Resolved target: get_ash
// Target address:  0x4FFD8
// GOT/IAT slot:    0x4F138
// Slot symbol:     off_4F138
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

