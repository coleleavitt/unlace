// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAD00
// Name:            .dlsym
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAD00 jmp     cs:off_CA668
//
// Resolved target: dlsym
// Target address:  0xD0FC8
// GOT/IAT slot:    0xCA668
// Slot symbol:     off_CA668
// Target type:     void *(void *handle, const char *name)
// ============================================================

/* see target sig */ .dlsym(/* see target signature */)
{
    // Tail-call to dlsym via GOT/IAT indirection
    return dlsym(/* forwarded args */);
}

