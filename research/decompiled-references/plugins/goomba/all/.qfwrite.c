// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4920
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4920 jmp     cs:off_4E478
//
// Resolved target: qfwrite
// Target address:  0x4FAB0
// GOT/IAT slot:    0x4E478
// Slot symbol:     off_4E478
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

