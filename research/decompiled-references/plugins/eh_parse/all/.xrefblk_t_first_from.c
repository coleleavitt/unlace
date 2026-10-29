// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64C0
// Name:            .xrefblk_t_first_from
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64C0 jmp     cs:off_2F248
//
// Resolved target: xrefblk_t_first_from
// Target address:  0x2F8B8
// GOT/IAT slot:    0x2F248
// Slot symbol:     off_2F248
// Target type:     <no type info>
// ============================================================

void .xrefblk_t_first_from(/* see target signature */)
{
    // Tail-call to xrefblk_t_first_from via GOT/IAT indirection
    return xrefblk_t_first_from(/* forwarded args */);
}

