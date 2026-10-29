// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A10
// Name:            .pthread_mutexattr_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A10 jmp     cs:off_23E4F0
//
// Resolved target: pthread_mutexattr_init
// Target address:  0x244088
// GOT/IAT slot:    0x23E4F0
// Slot symbol:     off_23E4F0
// Target type:     int(pthread_mutexattr_t *attr)
// ============================================================

/* see target sig */ .pthread_mutexattr_init(/* see target signature */)
{
    // Tail-call to pthread_mutexattr_init via GOT/IAT indirection
    return pthread_mutexattr_init(/* forwarded args */);
}

