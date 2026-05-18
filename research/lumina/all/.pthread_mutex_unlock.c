// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19560
// Name:            .pthread_mutex_unlock
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19560 jmp     cs:off_23E298
//
// Resolved target: pthread_mutex_unlock
// Target address:  0x243E10
// GOT/IAT slot:    0x23E298
// Slot symbol:     off_23E298
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ .pthread_mutex_unlock(/* see target signature */)
{
    // Tail-call to pthread_mutex_unlock via GOT/IAT indirection
    return pthread_mutex_unlock(/* forwarded args */);
}

