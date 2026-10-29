// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192E0
// Name:            .unlink
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192E0 jmp     cs:off_23E158
//
// Resolved target: unlink
// Target address:  0x243CA0
// GOT/IAT slot:    0x23E158
// Slot symbol:     off_23E158
// Target type:     int(const char *name)
// ============================================================

/* see target sig */ .unlink(/* see target signature */)
{
    // Tail-call to unlink via GOT/IAT indirection
    return unlink(/* forwarded args */);
}

