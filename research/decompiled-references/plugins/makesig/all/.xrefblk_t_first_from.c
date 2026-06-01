// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3320
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3320 jmp     cs:off_20178
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x21A88
// GOT/IAT slot:    0x20178
// Slot symbol:     off_20178
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

