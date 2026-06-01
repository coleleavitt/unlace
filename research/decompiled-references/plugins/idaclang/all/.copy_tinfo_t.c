// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3100
// Name:            .copy_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3100 jmp     cs:off_29068
//
// Resolved target: copy_tinfo_t
// Target address:  0x29418
// GOT/IAT slot:    0x29068
// Slot symbol:     off_29068
// Target type:     <no type info>
// ============================================================

void .copy_tinfo_t(/* see target signature */)
{
    // Tail-call to copy_tinfo_t via GOT/IAT indirection
    return copy_tinfo_t(/* forwarded args */);
}

