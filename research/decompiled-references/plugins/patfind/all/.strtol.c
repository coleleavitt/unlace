// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2260
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2260 jmp     cs:off_13118
//
// Resolved target: strtol
// Target address:  0x133B0
// GOT/IAT slot:    0x13118
// Slot symbol:     off_13118
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

