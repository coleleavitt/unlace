// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA110
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA110 jmp     cs:off_CA070
//
// Resolved target: isxdigit
// Target address:  0xD0990
// GOT/IAT slot:    0xCA070
// Slot symbol:     off_CA070
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

