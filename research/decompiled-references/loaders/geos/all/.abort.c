// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2150
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2150 jmp     cs:off_8090
//
// Resolved target: abort
// Target address:  0x82F0
// GOT/IAT slot:    0x8090
// Slot symbol:     off_8090
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

