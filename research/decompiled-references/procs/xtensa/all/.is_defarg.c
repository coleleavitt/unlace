// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71C0
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71C0 jmp     cs:off_1D0C8
//
// Resolved target: is_defarg
// Target address:  0x1D3F8
// GOT/IAT slot:    0x1D0C8
// Slot symbol:     off_1D0C8
// Target type:     __int64(void)
// ============================================================

/* see target sig */ .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

