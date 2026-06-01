// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6140
// Name:            .toggle_sign
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6140 jmp     cs:off_1D088
//
// Resolved target: toggle_sign
// Target address:  0x1D578
// GOT/IAT slot:    0x1D088
// Slot symbol:     off_1D088
// Target type:     <no type info>
// ============================================================

void .toggle_sign(/* see target signature */)
{
    // Tail-call to toggle_sign via GOT/IAT indirection
    return toggle_sign(/* forwarded args */);
}

