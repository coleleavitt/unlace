// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19030
// Name:            .sem_destroy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19030 jmp     cs:off_23E000
//
// Resolved target: sem_destroy
// Target address:  0x243B18
// GOT/IAT slot:    0x23E000
// Slot symbol:     off_23E000
// Target type:     int(sem_t *sem)
// ============================================================

/* see target sig */ .sem_destroy(/* see target signature */)
{
    // Tail-call to sem_destroy via GOT/IAT indirection
    return sem_destroy(/* forwarded args */);
}

