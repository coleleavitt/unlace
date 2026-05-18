// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19910
// Name:            .exit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19910 jmp     cs:off_23E470
//
// Resolved target: exit
// Target address:  0x243FF8
// GOT/IAT slot:    0x23E470
// Slot symbol:     off_23E470
// Target type:     void __noreturn(int status)
// ============================================================

/* see target sig */ .exit(/* see target signature */)
{
    // Tail-call to exit via GOT/IAT indirection
    return exit(/* forwarded args */);
}

