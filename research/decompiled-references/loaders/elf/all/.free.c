// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x96C0
// Name:            .free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x96C0 jmp     cs:off_89348
//
// Resolved target: free
// Target address:  0x8C650
// GOT/IAT slot:    0x89348
// Slot symbol:     off_89348
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ .free(/* see target signature */)
{
    // Tail-call to free via GOT/IAT indirection
    return free(/* forwarded args */);
}

