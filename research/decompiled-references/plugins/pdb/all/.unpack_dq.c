// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DAA0
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DAA0 jmp     cs:off_B3538
//
// Resolved target: unpack_dq
// Target address:  0xB3D00
// GOT/IAT slot:    0xB3538
// Slot symbol:     off_B3538
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

