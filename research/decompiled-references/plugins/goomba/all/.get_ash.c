// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4950
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4950 jmp     cs:off_4E490
//
// Resolved target: get_ash
// Target address:  0x4FAC8
// GOT/IAT slot:    0x4E490
// Slot symbol:     off_4E490
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

