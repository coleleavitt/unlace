// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8710
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8710 jmp     cs:off_2A370
//
// Resolved target: unpack_dq
// Target address:  0x2A8F8
// GOT/IAT slot:    0x2A370
// Slot symbol:     off_2A370
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

