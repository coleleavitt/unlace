// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D5D0
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D5D0 jmp     cs:off_B32D0
//
// Resolved target: unpack_dd
// Target address:  0xB3A70
// GOT/IAT slot:    0xB32D0
// Slot symbol:     off_B32D0
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

