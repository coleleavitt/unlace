// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DA50
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DA50 jmp     cs:off_B3510
//
// Resolved target: qfwrite
// Target address:  0xB3CD8
// GOT/IAT slot:    0xB3510
// Slot symbol:     off_B3510
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

