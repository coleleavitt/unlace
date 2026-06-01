// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1160
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1160 jmp     cs:off_4098
//
// Resolved target: show_auto
// Target address:  0x41C0
// GOT/IAT slot:    0x4098
// Slot symbol:     off_4098
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

