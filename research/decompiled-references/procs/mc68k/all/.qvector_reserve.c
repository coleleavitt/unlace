// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6340
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6340 jmp     cs:off_1D188
//
// Resolved target: qvector_reserve
// Target address:  0x1D678
// GOT/IAT slot:    0x1D188
// Slot symbol:     off_1D188
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

