// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193F0
// Name:            .pthread_create
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193F0 jmp     cs:off_23E1E0
//
// Resolved target: pthread_create
// Target address:  0x243D40
// GOT/IAT slot:    0x23E1E0
// Slot symbol:     off_23E1E0
// Target type:     int(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
// ============================================================

/* see target sig */ .pthread_create(/* see target signature */)
{
    // Tail-call to pthread_create via GOT/IAT indirection
    return pthread_create(/* forwarded args */);
}

