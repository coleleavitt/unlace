// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6350
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6350 jmp     cs:off_2D190
//
// Resolved target: qvector_reserve
// Target address:  0x2D690
// GOT/IAT slot:    0x2D190
// Slot symbol:     off_2D190
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

