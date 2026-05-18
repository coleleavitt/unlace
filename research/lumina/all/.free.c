// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19900
// Name:            .free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19900 jmp     cs:off_23E468
//
// Resolved target: free
// Target address:  0x243FF0
// GOT/IAT slot:    0x23E468
// Slot symbol:     off_23E468
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ .free(/* see target signature */)
{
    // Tail-call to free via GOT/IAT indirection
    return free(/* forwarded args */);
}

