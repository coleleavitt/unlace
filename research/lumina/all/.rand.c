// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19190
// Name:            .rand
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19190 jmp     cs:off_23E0B0
//
// Resolved target: rand
// Target address:  0x243BE8
// GOT/IAT slot:    0x23E0B0
// Slot symbol:     off_23E0B0
// Target type:     int(void)
// ============================================================

/* see target sig */ .rand(/* see target signature */)
{
    // Tail-call to rand via GOT/IAT indirection
    return rand(/* forwarded args */);
}

