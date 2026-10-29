// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5330
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5330 jmp     cs:off_15180
//
// Resolved target: qvector_reserve
// Target address:  0x16210
// GOT/IAT slot:    0x15180
// Slot symbol:     off_15180
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

