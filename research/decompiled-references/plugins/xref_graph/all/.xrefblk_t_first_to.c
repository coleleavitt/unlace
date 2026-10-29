// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x165A0
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x165A0 jmp     cs:off_4F2B8
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x502A0
// GOT/IAT slot:    0x4F2B8
// Slot symbol:     off_4F2B8
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

