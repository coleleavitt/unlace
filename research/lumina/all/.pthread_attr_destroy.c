// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19CC0
// Name:            .pthread_attr_destroy
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19CC0 jmp     cs:off_23E648
//
// Resolved target: pthread_attr_destroy
// Target address:  0x244200
// GOT/IAT slot:    0x23E648
// Slot symbol:     off_23E648
// Target type:     int(pthread_attr_t *attr)
// ============================================================

/* see target sig */ .pthread_attr_destroy(/* see target signature */)
{
    // Tail-call to pthread_attr_destroy via GOT/IAT indirection
    return pthread_attr_destroy(/* forwarded args */);
}

