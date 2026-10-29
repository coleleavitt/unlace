// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83F0
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83F0 jmp     cs:off_2A1E0
//
// Resolved target: unpack_dd
// Target address:  0x2A750
// GOT/IAT slot:    0x2A1E0
// Slot symbol:     off_2A1E0
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

