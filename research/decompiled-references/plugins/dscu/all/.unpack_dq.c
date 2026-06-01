// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4410
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4410 jmp     cs:off_1F1F0
//
// Resolved target: unpack_dq
// Target address:  0x1F4B8
// GOT/IAT slot:    0x1F1F0
// Slot symbol:     off_1F1F0
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

