// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1150
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1150 jmp     cs:off_4090
//
// Resolved target: qfwrite
// Target address:  0x4170
// GOT/IAT slot:    0x4090
// Slot symbol:     off_4090
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

