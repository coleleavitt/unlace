// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x97F0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x97F0 jmp     cs:off_893E0
//
// Resolved target: show_auto
// Target address:  0x8C6F8
// GOT/IAT slot:    0x893E0
// Slot symbol:     off_893E0
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

