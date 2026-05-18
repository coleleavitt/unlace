// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19150
// Name:            .strerror_r
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19150 jmp     cs:off_23E090
//
// Resolved target: strerror_r
// Target address:  0x243BC0
// GOT/IAT slot:    0x23E090
// Slot symbol:     off_23E090
// Target type:     char *(int errnum, char *buf, size_t buflen)
// ============================================================

/* see target sig */ .strerror_r(/* see target signature */)
{
    // Tail-call to strerror_r via GOT/IAT indirection
    return strerror_r(/* forwarded args */);
}

