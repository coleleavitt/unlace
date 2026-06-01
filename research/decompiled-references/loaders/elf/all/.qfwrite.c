// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98F0
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98F0 jmp     cs:off_89460
//
// Resolved target: qfwrite
// Target address:  0x8C788
// GOT/IAT slot:    0x89460
// Slot symbol:     off_89460
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

