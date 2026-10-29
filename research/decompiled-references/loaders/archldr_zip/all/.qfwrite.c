// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2270
// Name:            .qfwrite
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2270 jmp     cs:off_8120
//
// Resolved target: qfwrite
// Target address:  0x8310
// GOT/IAT slot:    0x8120
// Slot symbol:     off_8120
// Target type:     <no type info>
// ============================================================

void .qfwrite(/* see target signature */)
{
    // Tail-call to qfwrite via GOT/IAT indirection
    return qfwrite(/* forwarded args */);
}

