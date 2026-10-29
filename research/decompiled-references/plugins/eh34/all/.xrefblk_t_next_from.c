// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6210
// Name:            .xrefblk_t_next_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6210 jmp     cs:off_8D0F0
//
// Resolved target: xrefblk_t_next_from
// Target address:  0x8D670
// GOT/IAT slot:    0x8D0F0
// Slot symbol:     off_8D0F0
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_from via GOT/IAT indirection
    return xrefblk_t_next_from(/* forwarded args */);
}

