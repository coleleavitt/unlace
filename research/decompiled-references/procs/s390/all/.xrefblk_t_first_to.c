// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x100F0
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x100F0 jmp     cs:off_2E060
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x36CD8
// GOT/IAT slot:    0x2E060
// Slot symbol:     off_2E060
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

