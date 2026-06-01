// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xFEA0
// Name:            j_.qfree_0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xFEA0 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x5590
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     __int64(_QWORD, const char *, ...)
// ============================================================

/* see target sig */ j_.qfree_0(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

