// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6730
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6730 jmp     cs:off_2D380
//
// Resolved target: qfwrite
// Target address:  0x2D898
// GOT/IAT slot:    0x2D380
// Slot symbol:     off_2D380
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

