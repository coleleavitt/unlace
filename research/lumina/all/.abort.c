// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x193B0
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x193B0 jmp     cs:off_23E1C0
//
// Resolved target: abort
// Target address:  0x243D10
// GOT/IAT slot:    0x23E1C0
// Slot symbol:     off_23E1C0
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

