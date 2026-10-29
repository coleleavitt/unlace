// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3310
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3310 jmp     cs:off_28170
//
// Resolved target: qvector_reserve
// Target address:  0x28620
// GOT/IAT slot:    0x28170
// Slot symbol:     off_28170
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

