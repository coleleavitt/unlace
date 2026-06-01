// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x63E0
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x63E0 jmp     cs:off_8D1D8
//
// Resolved target: unpack_dd
// Target address:  0x8D770
// GOT/IAT slot:    0x8D1D8
// Slot symbol:     off_8D1D8
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

