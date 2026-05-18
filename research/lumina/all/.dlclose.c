// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19530
// Name:            .dlclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19530 jmp     cs:off_23E280
//
// Resolved target: dlclose
// Target address:  0x243DF8
// GOT/IAT slot:    0x23E280
// Slot symbol:     off_23E280
// Target type:     int(void *handle)
// ============================================================

/* see target sig */ .dlclose(/* see target signature */)
{
    // Tail-call to dlclose via GOT/IAT indirection
    return dlclose(/* forwarded args */);
}

