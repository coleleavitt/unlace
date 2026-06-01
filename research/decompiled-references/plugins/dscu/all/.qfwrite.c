// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x43E0
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x43E0 jmp     cs:off_1F1D8
//
// Resolved target: qfwrite
// Target address:  0x1F4A0
// GOT/IAT slot:    0x1F1D8
// Slot symbol:     off_1F1D8
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

