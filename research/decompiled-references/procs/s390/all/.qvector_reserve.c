// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10190
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10190 jmp     cs:off_2E0B0
//
// Resolved target: qvector_reserve
// Target address:  0x36D28
// GOT/IAT slot:    0x2E0B0
// Slot symbol:     off_2E0B0
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

