// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20DB0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20DB0 jmp     cs:off_956C0
//
// Resolved target: get_ash
// Target address:  0x96110
// GOT/IAT slot:    0x956C0
// Slot symbol:     off_956C0
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

