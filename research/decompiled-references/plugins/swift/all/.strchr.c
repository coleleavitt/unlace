// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4150
// Name:            .strchr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4150 jmp     cs:off_28090
//
// Resolved target: strchr
// Target address:  0x29A28
// GOT/IAT slot:    0x28090
// Slot symbol:     off_28090
// Target type:     char *(const char *s, int c)
// ============================================================

/* see target sig */ .strchr(/* see target signature */)
{
    // Tail-call to strchr via GOT/IAT indirection
    return strchr(/* forwarded args */);
}

