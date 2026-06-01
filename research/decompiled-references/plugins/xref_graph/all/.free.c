// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16D10
// Name:            .free
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16D10 jmp     cs:off_4F670
//
// Resolved target: free
// Target address:  0x50938
// GOT/IAT slot:    0x4F670
// Slot symbol:     off_4F670
// Target type:     void(void *ptr)
// ============================================================

/* see target sig */ .free(/* see target signature */)
{
    // Tail-call to free via GOT/IAT indirection
    return free(/* forwarded args */);
}

