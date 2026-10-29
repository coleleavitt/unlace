// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x202C0
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x202C0 jmp     cs:off_95148
//
// Resolved target: copy_tinfo_t
// Target address:  0x95B80
// GOT/IAT slot:    0x95148
// Slot symbol:     off_95148
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

