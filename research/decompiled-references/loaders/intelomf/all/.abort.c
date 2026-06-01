// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10B0
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10B0 jmp     cs:off_5040
//
// Resolved target: abort
// Target address:  0x5288
// GOT/IAT slot:    0x5040
// Slot symbol:     off_5040
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

