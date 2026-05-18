// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xC7410
// Name:            j_.pthread_mutex_lock
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xC7410 jmp     _pthread_mutex_lock
//
// Resolved target: .pthread_mutex_lock
// Target address:  0x19B10
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ j_.pthread_mutex_lock(/* see target signature */)
{
    // Tail-call to .pthread_mutex_lock via direct jump indirection
    return .pthread_mutex_lock(/* forwarded args */);
}

