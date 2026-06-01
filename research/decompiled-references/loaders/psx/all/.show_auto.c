// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22F0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22F0 jmp     cs:off_A160
//
// Resolved target: show_auto
// Target address:  0xA418
// GOT/IAT slot:    0xA160
// Slot symbol:     off_A160
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

