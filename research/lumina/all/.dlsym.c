// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19E40
// Name:            .dlsym
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19E40 jmp     cs:off_23E708
//
// Resolved target: dlsym
// Target address:  0x2442D8
// GOT/IAT slot:    0x23E708
// Slot symbol:     off_23E708
// Target type:     void *(void *handle, const char *name)
// ============================================================

/* see target sig */ .dlsym(/* see target signature */)
{
    // Tail-call to dlsym via GOT/IAT indirection
    return dlsym(/* forwarded args */);
}

