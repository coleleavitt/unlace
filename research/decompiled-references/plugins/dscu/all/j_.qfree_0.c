// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5D80
// Name:            j_.qfree_0
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x5D80 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x44D0
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.qfree_0(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

