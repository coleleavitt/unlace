// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19480
// Name:            .sysconf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19480 jmp     cs:off_23E228
//
// Resolved target: sysconf
// Target address:  0x243D98
// GOT/IAT slot:    0x23E228
// Slot symbol:     off_23E228
// Target type:     __int64(int name)
// ============================================================

/* see target sig */ .sysconf(/* see target signature */)
{
    // Tail-call to sysconf via GOT/IAT indirection
    return sysconf(/* forwarded args */);
}

