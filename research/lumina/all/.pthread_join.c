// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19320
// Name:            .pthread_join
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19320 jmp     cs:off_23E178
//
// Resolved target: pthread_join
// Target address:  0x243CC0
// GOT/IAT slot:    0x23E178
// Slot symbol:     off_23E178
// Target type:     int(pthread_t th, void **thread_return)
// ============================================================

/* see target sig */ .pthread_join(/* see target signature */)
{
    // Tail-call to pthread_join via GOT/IAT indirection
    return pthread_join(/* forwarded args */);
}

