// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4820
// Name:            .dlsym
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4820 jmp     cs:off_283F8
//
// Resolved target: dlsym
// Target address:  0x29DB0
// GOT/IAT slot:    0x283F8
// Slot symbol:     off_283F8
// Target type:     void *(void *handle, const char *name)
// ============================================================

/* see target sig */ .dlsym(/* see target signature */)
{
    // Tail-call to dlsym via GOT/IAT indirection
    return dlsym(/* forwarded args */);
}

