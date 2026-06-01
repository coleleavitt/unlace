// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3290
// Name:            .qvector_reserve
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3290 jmp     cs:off_29130
//
// Resolved target: qvector_reserve
// Target address:  0x294E0
// GOT/IAT slot:    0x29130
// Slot symbol:     off_29130
// Target type:     <no type info>
// ============================================================

void .qvector_reserve(/* see target signature */)
{
    // Tail-call to qvector_reserve via GOT/IAT indirection
    return qvector_reserve(/* forwarded args */);
}

