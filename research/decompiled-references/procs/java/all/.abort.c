// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6240
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6240 jmp     cs:off_2D108
//
// Resolved target: abort
// Target address:  0x2D608
// GOT/IAT slot:    0x2D108
// Slot symbol:     off_2D108
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

