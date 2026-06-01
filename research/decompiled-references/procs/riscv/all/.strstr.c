// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0C0
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0C0 jmp     cs:off_35048
//
// Resolved target: strstr
// Target address:  0x35698
// GOT/IAT slot:    0x35048
// Slot symbol:     off_35048
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

