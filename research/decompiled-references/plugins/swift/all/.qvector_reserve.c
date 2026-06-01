// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4400
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4400 jmp     cs:off_281E8
//
// Resolved target: qvector_reserve
// Target address:  0x29B80
// GOT/IAT slot:    0x281E8
// Slot symbol:     off_281E8
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

