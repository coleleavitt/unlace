// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19200
// Name:            .strerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19200 jmp     cs:off_23E0E8
//
// Resolved target: strerror
// Target address:  0x243C20
// GOT/IAT slot:    0x23E0E8
// Slot symbol:     off_23E0E8
// Target type:     char *(int errnum)
// ============================================================

/* see target sig */ .strerror(/* see target signature */)
{
    // Tail-call to strerror via GOT/IAT indirection
    return strerror(/* forwarded args */);
}

