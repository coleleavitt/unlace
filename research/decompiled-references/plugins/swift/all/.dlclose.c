// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4380
// Name:            .dlclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4380 jmp     cs:off_281A8
//
// Resolved target: dlclose
// Target address:  0x29B40
// GOT/IAT slot:    0x281A8
// Slot symbol:     off_281A8
// Target type:     int(void *handle)
// ============================================================

/* see target sig */ .dlclose(/* see target signature */)
{
    // Tail-call to dlclose via GOT/IAT indirection
    return dlclose(/* forwarded args */);
}

