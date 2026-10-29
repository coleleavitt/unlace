// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19680
// Name:            .pthread_self
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19680 jmp     cs:off_23E328
//
// Resolved target: pthread_self
// Target address:  0x243EA8
// GOT/IAT slot:    0x23E328
// Slot symbol:     off_23E328
// Target type:     pthread_t(void)
// ============================================================

/* see target sig */ .pthread_self(/* see target signature */)
{
    // Tail-call to pthread_self via GOT/IAT indirection
    return pthread_self(/* forwarded args */);
}

