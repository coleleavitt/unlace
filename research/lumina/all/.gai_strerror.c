// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A30
// Name:            .gai_strerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A30 jmp     cs:off_23E500
//
// Resolved target: gai_strerror
// Target address:  0x244098
// GOT/IAT slot:    0x23E500
// Slot symbol:     off_23E500
// Target type:     const char *(int ecode)
// ============================================================

/* see target sig */ .gai_strerror(/* see target signature */)
{
    // Tail-call to gai_strerror via GOT/IAT indirection
    return gai_strerror(/* forwarded args */);
}

