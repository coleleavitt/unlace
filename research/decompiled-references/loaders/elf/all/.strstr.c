// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x90F0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x90F0 jmp     cs:off_89060
//
// Resolved target: strstr
// Target address:  0x8C360
// GOT/IAT slot:    0x89060
// Slot symbol:     off_89060
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

