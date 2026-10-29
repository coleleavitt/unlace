// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19530
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19530 jmp     cs:off_75280
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x75AD0
// GOT/IAT slot:    0x75280
// Slot symbol:     off_75280
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

