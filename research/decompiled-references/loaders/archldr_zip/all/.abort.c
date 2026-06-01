// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2140
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2140 jmp     cs:off_8088
//
// Resolved target: abort
// Target address:  0x8248
// GOT/IAT slot:    0x8088
// Slot symbol:     off_8088
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

