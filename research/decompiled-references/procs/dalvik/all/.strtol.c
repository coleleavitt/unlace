// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5410
// Name:            .strtol
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5410 jmp     cs:off_1A1F0
//
// Resolved target: strtol
// Target address:  0x1A580
// GOT/IAT slot:    0x1A1F0
// Slot symbol:     off_1A1F0
// Target type:     __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtol(/* see target signature */)
{
    // Tail-call to strtol via GOT/IAT indirection
    return strtol(/* forwarded args */);
}

