// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3520
// Name:            .dlsym
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3520 jmp     cs:off_29278
//
// Resolved target: dlsym
// Target address:  0x29640
// GOT/IAT slot:    0x29278
// Slot symbol:     off_29278
// Target type:     void *(void *handle, const char *name)
// ============================================================

/* see target sig */ .dlsym(/* see target signature */)
{
    // Tail-call to dlsym via GOT/IAT indirection
    return dlsym(/* forwarded args */);
}

