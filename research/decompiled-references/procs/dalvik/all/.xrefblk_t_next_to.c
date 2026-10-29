// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5250
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5250 jmp     cs:off_1A110
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x1A498
// GOT/IAT slot:    0x1A110
// Slot symbol:     off_1A110
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

