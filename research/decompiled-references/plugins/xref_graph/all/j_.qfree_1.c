// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1A1E0
// Name:            j_.qfree_1
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1A1E0 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x16AA0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.qfree_1(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

