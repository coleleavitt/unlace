// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C00
// Name:            .sem_close
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C00 jmp     cs:off_23E5E8
//
// Resolved target: sem_close
// Target address:  0x244198
// GOT/IAT slot:    0x23E5E8
// Slot symbol:     off_23E5E8
// Target type:     int(sem_t *sem)
// ============================================================

/* see target sig */ .sem_close(/* see target signature */)
{
    // Tail-call to sem_close via GOT/IAT indirection
    return sem_close(/* forwarded args */);
}

