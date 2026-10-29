// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6240
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6240 jmp     cs:off_2F108
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x2F778
// GOT/IAT slot:    0x2F108
// Slot symbol:     off_2F108
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

