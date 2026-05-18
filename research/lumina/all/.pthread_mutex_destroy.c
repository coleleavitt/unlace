// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x198B0
// Name:            .pthread_mutex_destroy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x198B0 jmp     cs:off_23E440
//
// Resolved target: pthread_mutex_destroy
// Target address:  0x243FC8
// GOT/IAT slot:    0x23E440
// Slot symbol:     off_23E440
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ .pthread_mutex_destroy(/* see target signature */)
{
    // Tail-call to pthread_mutex_destroy via GOT/IAT indirection
    return pthread_mutex_destroy(/* forwarded args */);
}

