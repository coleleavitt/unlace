// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19860
// Name:            .sem_wait
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19860 jmp     cs:off_23E418
//
// Resolved target: sem_wait
// Target address:  0x243FA0
// GOT/IAT slot:    0x23E418
// Slot symbol:     off_23E418
// Target type:     int(sem_t *sem)
// ============================================================

/* see target sig */ .sem_wait(/* see target signature */)
{
    // Tail-call to sem_wait via GOT/IAT indirection
    return sem_wait(/* forwarded args */);
}

