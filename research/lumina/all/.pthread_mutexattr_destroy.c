// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192A0
// Name:            .pthread_mutexattr_destroy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192A0 jmp     cs:off_23E138
//
// Resolved target: pthread_mutexattr_destroy
// Target address:  0x243C78
// GOT/IAT slot:    0x23E138
// Slot symbol:     off_23E138
// Target type:     int(pthread_mutexattr_t *attr)
// ============================================================

/* see target sig */ .pthread_mutexattr_destroy(/* see target signature */)
{
    // Tail-call to pthread_mutexattr_destroy via GOT/IAT indirection
    return pthread_mutexattr_destroy(/* forwarded args */);
}

