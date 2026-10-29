// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193C0
// Name:            .dlerror
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193C0 jmp     cs:off_23E1C8
//
// Resolved target: dlerror
// Target address:  0x243D20
// GOT/IAT slot:    0x23E1C8
// Slot symbol:     off_23E1C8
// Target type:     char *(void)
// ============================================================

/* see target sig */ .dlerror(/* see target signature */)
{
    // Tail-call to dlerror via GOT/IAT indirection
    return dlerror(/* forwarded args */);
}

