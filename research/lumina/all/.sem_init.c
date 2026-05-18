// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D40
// Name:            .sem_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D40 jmp     cs:off_23E688
//
// Resolved target: sem_init
// Target address:  0x244258
// GOT/IAT slot:    0x23E688
// Slot symbol:     off_23E688
// Target type:     int(sem_t *sem, int pshared, unsigned int value)
// ============================================================

/* see target sig */ .sem_init(/* see target signature */)
{
    // Tail-call to sem_init via GOT/IAT indirection
    return sem_init(/* forwarded args */);
}

