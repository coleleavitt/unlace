// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x22C0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x22C0 jmp     cs:off_B148
//
// Resolved target: qvector_reserve
// Target address:  0xB5E0
// GOT/IAT slot:    0xB148
// Slot symbol:     off_B148
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

