// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2190
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2190 jmp     cs:off_A0B0
//
// Resolved target: qvector_reserve
// Target address:  0xB380
// GOT/IAT slot:    0xA0B0
// Slot symbol:     off_A0B0
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

