// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8100
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8100 jmp     cs:off_2A068
//
// Resolved target: strstr
// Target address:  0x2BA78
// GOT/IAT slot:    0x2A068
// Slot symbol:     off_2A068
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

