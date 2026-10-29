// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3230
// Name:            .dlclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3230 jmp     cs:off_29100
//
// Resolved target: dlclose
// Target address:  0x294B0
// GOT/IAT slot:    0x29100
// Slot symbol:     off_29100
// Target type:     int(void *handle)
// ============================================================

/* see target sig */ .dlclose(/* see target signature */)
{
    // Tail-call to dlclose via GOT/IAT indirection
    return dlclose(/* forwarded args */);
}

