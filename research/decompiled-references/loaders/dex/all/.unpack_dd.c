// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33E0
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33E0 jmp     cs:off_281D8
//
// Resolved target: unpack_dd
// Target address:  0x28688
// GOT/IAT slot:    0x281D8
// Slot symbol:     off_281D8
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

