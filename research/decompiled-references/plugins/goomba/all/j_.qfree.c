// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xBF20
// Name:            j_.qfree
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0xBF20 jmp     _qfree
//
// Resolved target: .qfree
// Target address:  0x4A60
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.qfree(/* see target signature */)
{
    // Tail-call to .qfree via direct jump indirection
    return .qfree(/* forwarded args */);
}

