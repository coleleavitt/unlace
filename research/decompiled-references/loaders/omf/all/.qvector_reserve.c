// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32E0
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32E0 jmp     cs:off_14158
//
// Resolved target: qvector_reserve
// Target address:  0x14748
// GOT/IAT slot:    0x14158
// Slot symbol:     off_14158
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

