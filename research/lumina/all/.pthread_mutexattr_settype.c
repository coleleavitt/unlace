// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19DF0
// Name:            .pthread_mutexattr_settype
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19DF0 jmp     cs:off_23E6E0
//
// Resolved target: pthread_mutexattr_settype
// Target address:  0x2442B0
// GOT/IAT slot:    0x23E6E0
// Slot symbol:     off_23E6E0
// Target type:     int(pthread_mutexattr_t *attr, int kind)
// ============================================================

/* see target sig */ .pthread_mutexattr_settype(/* see target signature */)
{
    // Tail-call to pthread_mutexattr_settype via GOT/IAT indirection
    return pthread_mutexattr_settype(/* forwarded args */);
}

