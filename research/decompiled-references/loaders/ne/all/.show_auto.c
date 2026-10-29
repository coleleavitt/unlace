// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2340
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2340 jmp     cs:off_B188
//
// Resolved target: show_auto
// Target address:  0xB428
// GOT/IAT slot:    0xB188
// Slot symbol:     off_B188
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

