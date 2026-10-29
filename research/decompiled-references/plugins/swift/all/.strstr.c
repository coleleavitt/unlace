// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x40D0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x40D0 jmp     cs:off_28050
//
// Resolved target: strstr
// Target address:  0x299E0
// GOT/IAT slot:    0x28050
// Slot symbol:     off_28050
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

