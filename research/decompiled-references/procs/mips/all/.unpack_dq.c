// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19C20
// Name:            .unpack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19C20 jmp     cs:off_755F8
//
// Resolved target: unpack_dq
// Target address:  0x75E60
// GOT/IAT slot:    0x755F8
// Slot symbol:     off_755F8
// Target type:     <no type info>
// ============================================================

void .unpack_dq(/* see target signature */)
{
    // Tail-call to unpack_dq via GOT/IAT indirection
    return unpack_dq(/* forwarded args */);
}

