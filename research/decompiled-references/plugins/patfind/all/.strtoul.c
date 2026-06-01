// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2090
// Name:            .strtoul
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2090 jmp     cs:off_13030
//
// Resolved target: strtoul
// Target address:  0x132C8
// GOT/IAT slot:    0x13030
// Slot symbol:     off_13030
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoul(/* see target signature */)
{
    // Tail-call to strtoul via GOT/IAT indirection
    return strtoul(/* forwarded args */);
}

