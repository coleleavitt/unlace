// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63D0
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63D0 jmp     cs:off_2F1D0
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x2F840
// GOT/IAT slot:    0x2F1D0
// Slot symbol:     off_2F1D0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

