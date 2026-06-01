// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6760
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6760 jmp     cs:off_2D398
//
// Resolved target: get_ash
// Target address:  0x2D8B0
// GOT/IAT slot:    0x2D398
// Slot symbol:     off_2D398
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

