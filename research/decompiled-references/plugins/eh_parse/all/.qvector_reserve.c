// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6410
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6410 jmp     cs:off_2F1F0
//
// Resolved target: qvector_reserve
// Target address:  0x2F860
// GOT/IAT slot:    0x2F1F0
// Slot symbol:     off_2F1F0
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

