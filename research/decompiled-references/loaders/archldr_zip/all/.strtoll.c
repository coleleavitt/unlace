// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2050
// Name:            .strtoll
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2050 jmp     cs:off_8010
//
// Resolved target: strtoll
// Target address:  0x81D0
// GOT/IAT slot:    0x8010
// Slot symbol:     off_8010
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoll(/* see target signature */)
{
    // Tail-call to strtoll via GOT/IAT indirection
    return strtoll(/* forwarded args */);
}

