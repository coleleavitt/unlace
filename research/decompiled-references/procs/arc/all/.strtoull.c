// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8620
// Name:            .strtoull
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8620 jmp     cs:off_2A2F8
//
// Resolved target: strtoull
// Target address:  0x2BD08
// GOT/IAT slot:    0x2A2F8
// Slot symbol:     off_2A2F8
// Target type:     unsigned __int64(const char *nptr, char **endptr, int base)
// ============================================================

/* see target sig */ .strtoull(/* see target signature */)
{
    // Tail-call to strtoull via GOT/IAT indirection
    return strtoull(/* forwarded args */);
}

