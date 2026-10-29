// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4740
// Name:            .get_ash
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4740 jmp     cs:off_28388
//
// Resolved target: get_ash
// Target address:  0x29D40
// GOT/IAT slot:    0x28388
// Slot symbol:     off_28388
// Target type:     <no type info>
// ============================================================

void .get_ash(/* see target signature */)
{
    // Tail-call to get_ash via GOT/IAT indirection
    return get_ash(/* forwarded args */);
}

