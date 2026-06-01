// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8380
// Name:            .xrefblk_t_next_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8380 jmp     cs:off_2A1A8
//
// Resolved target: xrefblk_t_next_to
// Target address:  0x2BBB8
// GOT/IAT slot:    0x2A1A8
// Slot symbol:     off_2A1A8
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_to via GOT/IAT indirection
    return xrefblk_t_next_to(/* forwarded args */);
}

