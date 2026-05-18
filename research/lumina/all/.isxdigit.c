// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19130
// Name:            .isxdigit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19130 jmp     cs:off_23E080
//
// Resolved target: isxdigit
// Target address:  0x243BA8
// GOT/IAT slot:    0x23E080
// Slot symbol:     off_23E080
// Target type:     int(int)
// ============================================================

/* see target sig */ .isxdigit(/* see target signature */)
{
    // Tail-call to isxdigit via GOT/IAT indirection
    return isxdigit(/* forwarded args */);
}

