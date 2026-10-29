// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19070
// Name:            .strcspn
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19070 jmp     cs:off_23E020
//
// Resolved target: strcspn
// Target address:  0x243B48
// GOT/IAT slot:    0x23E020
// Slot symbol:     off_23E020
// Target type:     size_t(const char *s, const char *reject)
// ============================================================

/* see target sig */ .strcspn(/* see target signature */)
{
    // Tail-call to strcspn via GOT/IAT indirection
    return strcspn(/* forwarded args */);
}

