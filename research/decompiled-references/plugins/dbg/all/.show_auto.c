// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x34E0
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x34E0 jmp     cs:off_13258
//
// Resolved target: show_auto
// Target address:  0x135E0
// GOT/IAT slot:    0x13258
// Slot symbol:     off_13258
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

