// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D6E0
// Name:            j_.qfwrite
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x1D6E0 jmp     _qfwrite
//
// Resolved target: .qfwrite
// Target address:  0x3680
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.qfwrite(/* see target signature */)
{
    // Tail-call to .qfwrite via direct jump indirection
    return .qfwrite(/* forwarded args */);
}

