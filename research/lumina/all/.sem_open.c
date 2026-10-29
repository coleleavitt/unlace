// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19240
// Name:            .sem_open
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19240 jmp     cs:off_23E108
//
// Resolved target: sem_open
// Target address:  0x243C40
// GOT/IAT slot:    0x23E108
// Slot symbol:     off_23E108
// Target type:     sem_t *(const char *name, int oflag, ...)
// ============================================================

/* see target sig */ .sem_open(/* see target signature */)
{
    // Tail-call to sem_open via GOT/IAT indirection
    return sem_open(/* forwarded args */);
}

