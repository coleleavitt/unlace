// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xC73E0
// Name:            j_.pthread_mutex_unlock
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xC73E0 jmp     _pthread_mutex_unlock
//
// Resolved target: .pthread_mutex_unlock
// Target address:  0x19560
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     int(pthread_mutex_t *mutex)
// ============================================================

/* see target sig */ j_.pthread_mutex_unlock(/* see target signature */)
{
    // Tail-call to .pthread_mutex_unlock via direct jump indirection
    return .pthread_mutex_unlock(/* forwarded args */);
}

