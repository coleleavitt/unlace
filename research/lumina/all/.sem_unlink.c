// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19CF0
// Name:            .sem_unlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19CF0 jmp     cs:off_23E660
//
// Resolved target: sem_unlink
// Target address:  0x244230
// GOT/IAT slot:    0x23E660
// Slot symbol:     off_23E660
// Target type:     int(const char *name)
// ============================================================

/* see target sig */ .sem_unlink(/* see target signature */)
{
    // Tail-call to sem_unlink via GOT/IAT indirection
    return sem_unlink(/* forwarded args */);
}

