// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19540
// Name:            .sleep
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19540 jmp     cs:off_23E288
//
// Resolved target: sleep
// Target address:  0x243E00
// GOT/IAT slot:    0x23E288
// Slot symbol:     off_23E288
// Target type:     unsigned int(unsigned int seconds)
// ============================================================

/* see target sig */ .sleep(/* see target signature */)
{
    // Tail-call to sleep via GOT/IAT indirection
    return sleep(/* forwarded args */);
}

