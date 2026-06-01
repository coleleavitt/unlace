// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .strstr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_13028
//
// Resolved target: strstr
// Target address:  0x132B8
// GOT/IAT slot:    0x13028
// Slot symbol:     off_13028
// Target type:     char *(const char *haystack, const char *needle)
// ============================================================

/* see target sig */ .strstr(/* see target signature */)
{
    // Tail-call to strstr via GOT/IAT indirection
    return strstr(/* forwarded args */);
}

