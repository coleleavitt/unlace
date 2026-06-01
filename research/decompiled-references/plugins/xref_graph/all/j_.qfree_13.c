// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2D220
// Name:            j_.qfree_13
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x2D220 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x16AA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64(_QWORD, const char *, ...)
// ============================================================

/* see target sig */ j_.qfree_13(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

