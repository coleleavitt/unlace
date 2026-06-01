// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D660
// Name:            .replace_tabs
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D660 jmp     cs:off_B3318
//
// Resolved target: replace_tabs
// Target address:  0xB3AB8
// GOT/IAT slot:    0xB3318
// Slot symbol:     off_B3318
// Target type:     <no type info>
// ============================================================

void .replace_tabs(/* see target signature */)
{
    // Tail-call to replace_tabs via GOT/IAT indirection
    return replace_tabs(/* forwarded args */);
}

