// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4290
// Name:            .dlerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4290 jmp     cs:off_28130
//
// Resolved target: dlerror
// Target address:  0x29AC8
// GOT/IAT slot:    0x28130
// Slot symbol:     off_28130
// Target type:     char *(void)
// ============================================================

/* see target sig */ .dlerror(/* see target signature */)
{
    // Tail-call to dlerror via GOT/IAT indirection
    return dlerror(/* forwarded args */);
}

