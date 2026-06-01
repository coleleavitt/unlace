// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x65D0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x65D0 jmp     cs:off_2D2D0
//
// Resolved target: show_auto
// Target address:  0x2D7D8
// GOT/IAT slot:    0x2D2D0
// Slot symbol:     off_2D2D0
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

