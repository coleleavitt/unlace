// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_8108
//
// Resolved target: show_auto
// Target address:  0x82E8
// GOT/IAT slot:    0x8108
// Slot symbol:     off_8108
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

