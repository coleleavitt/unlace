// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6320
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6320 jmp     cs:off_8D178
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x8D710
// GOT/IAT slot:    0x8D178
// Slot symbol:     off_8D178
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

