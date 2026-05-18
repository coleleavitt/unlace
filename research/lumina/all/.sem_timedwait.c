// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x190B0
// Name:            .sem_timedwait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x190B0 jmp     cs:off_23E040
//
// Resolved target: sem_timedwait
// Target address:  0x243B68
// GOT/IAT slot:    0x23E040
// Slot symbol:     off_23E040
// Target type:     int(sem_t *sem, const struct timespec *abstime)
// ============================================================

/* see target sig */ .sem_timedwait(/* see target signature */)
{
    // Tail-call to sem_timedwait via GOT/IAT indirection
    return sem_timedwait(/* forwarded args */);
}

