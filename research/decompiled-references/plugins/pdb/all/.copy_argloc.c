// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D460
// Name:            .copy_argloc
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D460 jmp     cs:off_B3218
//
// Resolved target: copy_argloc
// Target address:  0xB39B8
// GOT/IAT slot:    0xB3218
// Slot symbol:     off_B3218
// Target type:     <no type info>
// ============================================================

void .copy_argloc(/* see target signature */)
{
    // Tail-call to copy_argloc via GOT/IAT indirection
    return copy_argloc(/* forwarded args */);
}

