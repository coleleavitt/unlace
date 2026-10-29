// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8820
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8820 jmp     cs:off_2A3F8
//
// Resolved target: get_ash
// Target address:  0x2BE20
// GOT/IAT slot:    0x2A3F8
// Slot symbol:     off_2A3F8
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

