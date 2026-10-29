// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2590
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2590 jmp     cs:off_B2B0
//
// Resolved target: qfwrite
// Target address:  0xB760
// GOT/IAT slot:    0xB2B0
// Slot symbol:     off_B2B0
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

