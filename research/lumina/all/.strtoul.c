// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x191D0
// Name:            .strtoul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x191D0 jmp     cs:off_23E0D0
//
// Resolved target: strtoul
// Target address:  0x243C08
// GOT/IAT slot:    0x23E0D0
// Slot symbol:     off_23E0D0
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoul(/* see target signature */)
{
    // Tail-call to strtoul via GOT/IAT indirection
    return strtoul(/* forwarded args */);
}

