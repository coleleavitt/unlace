// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x29A0
// Name:            j_.qfwrite
// Size:            5 bytes (1 instructions)
// Disassembly:
//   0x29A0 jmp     _qfwrite
//
// Resolved target: .qfwrite
// Target address:  0x2270
// GOT/IAT slot:    (none)
// Slot symbol:     <none>
// Target type:     <no type info>
// ============================================================

void j_.qfwrite(/* see target signature */)
{
    // Tail-call to .qfwrite via direct jump indirection
    return .qfwrite(/* forwarded args */);
}

