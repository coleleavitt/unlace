// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4620
// Name:            .show_auto
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4620 jmp     cs:off_232F8
//
// Resolved target: show_auto
// Target address:  0x23720
// GOT/IAT slot:    0x232F8
// Slot symbol:     off_232F8
// Target type:     <no type info>
// ============================================================

void .show_auto(/* see target signature */)
{
    // Tail-call to show_auto via GOT/IAT indirection
    return show_auto(/* forwarded args */);
}

