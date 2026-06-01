// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x16650
// Name:            .log
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x16650 jmp     cs:off_4F310
//
// Resolved target: log
// Target address:  0x50320
// GOT/IAT slot:    0x4F310
// Slot symbol:     off_4F310
// Target type:     double(double x)
// ============================================================

/* see target sig */ .log(/* see target signature */)
{
    // Tail-call to log via GOT/IAT indirection
    return log(/* forwarded args */);
}

