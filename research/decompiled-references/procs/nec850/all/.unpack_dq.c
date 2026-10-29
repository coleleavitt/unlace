// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x98E0
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x98E0 jmp     cs:off_2E458
//
// Resolved target: unpack_dq
// Target address:  0x2EAE0
// GOT/IAT slot:    0x2E458
// Slot symbol:     off_2E458
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

