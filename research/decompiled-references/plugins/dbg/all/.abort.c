// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31D0
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31D0 jmp     cs:off_130D0
//
// Resolved target: abort
// Target address:  0x13448
// GOT/IAT slot:    0x130D0
// Slot symbol:     off_130D0
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

