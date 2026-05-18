// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19920
// Name:            .pthread_attr_init
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19920 jmp     cs:off_23E478
//
// Resolved target: pthread_attr_init
// Target address:  0x244000
// GOT/IAT slot:    0x23E478
// Slot symbol:     off_23E478
// Target type:     int(pthread_attr_t *attr)
// ============================================================

/* see target sig */ .pthread_attr_init(/* see target signature */)
{
    // Tail-call to pthread_attr_init via GOT/IAT indirection
    return pthread_attr_init(/* forwarded args */);
}

