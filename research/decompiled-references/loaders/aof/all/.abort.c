// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            .abort
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_7080
//
// Resolved target: abort
// Target address:  0x7238
// GOT/IAT slot:    0x7080
// Slot symbol:     off_7080
// Target type:     void __noreturn(void)
// ============================================================

/* see target sig */ .abort(/* see target signature */)
{
    // Tail-call to abort via GOT/IAT indirection
    return abort(/* forwarded args */);
}

