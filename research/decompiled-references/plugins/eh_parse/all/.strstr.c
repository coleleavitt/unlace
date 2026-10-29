// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60D0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60D0 jmp     cs:off_2F050
//
// Resolved target: strstr
// Target address:  0x2F6C0
// GOT/IAT slot:    0x2F050
// Slot symbol:     off_2F050
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

