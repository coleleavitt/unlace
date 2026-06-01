// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8240
// Name:            .xrefblk_t_next_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8240 jmp     cs:off_2A108
//
// Resolved target: xrefblk_t_next_from
// Target address:  0x2BB18
// GOT/IAT slot:    0x2A108
// Slot symbol:     off_2A108
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_next_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_next_from via GOT/IAT indirection
    return xrefblk_t_next_from(/* forwarded args */);
}

