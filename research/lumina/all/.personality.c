// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19420
// Name:            .personality
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19420 jmp     cs:off_23E1F8
//
// Resolved target: personality
// Target address:  0x243D60
// GOT/IAT slot:    0x23E1F8
// Slot symbol:     off_23E1F8
// Target type:     int(unsigned __int64 persona)
// ============================================================

/* see target sig */ .personality(/* see target signature */)
{
    // Tail-call to personality via GOT/IAT indirection
    return personality(/* forwarded args */);
}

