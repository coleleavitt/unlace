// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x94C0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x94C0 jmp     cs:off_89248
//
// Resolved target: qvector_reserve
// Target address:  0x8C550
// GOT/IAT slot:    0x89248
// Slot symbol:     off_89248
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

