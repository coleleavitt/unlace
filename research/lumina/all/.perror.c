// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19630
// Name:            .perror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19630 jmp     cs:off_23E300
//
// Resolved target: perror
// Target address:  0x243E80
// GOT/IAT slot:    0x23E300
// Slot symbol:     off_23E300
// Target type:     void(const char *s)
// ============================================================

/* see target sig */ .perror(/* see target signature */)
{
    // Tail-call to perror via GOT/IAT indirection
    return perror(/* forwarded args */);
}

