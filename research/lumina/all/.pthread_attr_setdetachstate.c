// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x199C0
// Name:            .pthread_attr_setdetachstate
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x199C0 jmp     cs:off_23E4C8
//
// Resolved target: pthread_attr_setdetachstate
// Target address:  0x244058
// GOT/IAT slot:    0x23E4C8
// Slot symbol:     off_23E4C8
// Target type:     int(pthread_attr_t *attr, int detachstate)
// ============================================================

/* see target sig */ .pthread_attr_setdetachstate(/* see target signature */)
{
    // Tail-call to pthread_attr_setdetachstate via GOT/IAT indirection
    return pthread_attr_setdetachstate(/* forwarded args */);
}

