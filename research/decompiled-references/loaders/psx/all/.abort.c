// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2110
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2110 jmp     cs:off_A070
//
// Resolved target: abort
// Target address:  0xA320
// GOT/IAT slot:    0xA070
// Slot symbol:     off_A070
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

