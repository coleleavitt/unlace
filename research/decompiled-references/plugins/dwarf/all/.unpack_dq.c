// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xABE0
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xABE0 jmp     cs:off_CA5D8
//
// Resolved target: unpack_dq
// Target address:  0xD0F30
// GOT/IAT slot:    0xCA5D8
// Slot symbol:     off_CA5D8
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

