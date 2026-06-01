// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20DC0
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20DC0 jmp     cs:off_956C8
//
// Resolved target: unpack_dq
// Target address:  0x96118
// GOT/IAT slot:    0x956C8
// Slot symbol:     off_956C8
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

