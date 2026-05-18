// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19570
// Name:            .sem_post
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19570 jmp     cs:off_23E2A0
//
// Resolved target: sem_post
// Target address:  0x243E18
// GOT/IAT slot:    0x23E2A0
// Slot symbol:     off_23E2A0
// Target type:     int(sem_t *sem)
// ============================================================

/* see target sig */ .sem_post(/* see target signature */)
{
    // Tail-call to sem_post via GOT/IAT indirection
    return sem_post(/* forwarded args */);
}

