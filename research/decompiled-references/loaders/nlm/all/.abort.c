// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F0
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F0 jmp     cs:off_8060
//
// Resolved target: abort
// Target address:  0x8740
// GOT/IAT slot:    0x8060
// Slot symbol:     off_8060
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

