// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51A0
// Name:            .xrefblk_t_first_to
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x51A0 jmp     cs:off_1A0B8
//
// Resolved target: xrefblk_t_first_to
// Target address:  0x1A440
// GOT/IAT slot:    0x1A0B8
// Slot symbol:     off_1A0B8
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_to(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_to via GOT/IAT indirection
    return xrefblk_t_first_to(/* forwarded args */);
}

