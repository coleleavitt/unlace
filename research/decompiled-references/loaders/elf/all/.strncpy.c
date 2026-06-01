// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92D0
// Name:            .strncpy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92D0 jmp     cs:off_89150
//
// Resolved target: strncpy
// Target address:  0x8C450
// GOT/IAT slot:    0x89150
// Slot symbol:     off_89150
// Target type:     char *(char *dest, const char *src, size_t n)
// ============================================================

/* see target sig */ .strncpy(/* see target signature */)
{
    // Tail-call to strncpy via GOT/IAT indirection
    return strncpy(/* forwarded args */);
}

