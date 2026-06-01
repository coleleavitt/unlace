// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x46D0
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x46D0 jmp     cs:off_23350
//
// Resolved target: get_ash
// Target address:  0x23788
// GOT/IAT slot:    0x23350
// Slot symbol:     off_23350
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

