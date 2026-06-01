// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x80B0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x80B0 jmp     cs:off_2A040
//
// Resolved target: strstr
// Target address:  0x2A5B0
// GOT/IAT slot:    0x2A040
// Slot symbol:     off_2A040
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

