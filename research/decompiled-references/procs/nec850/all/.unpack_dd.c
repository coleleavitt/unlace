// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9500
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9500 jmp     cs:off_2E268
//
// Resolved target: unpack_dd
// Target address:  0x2E8D8
// GOT/IAT slot:    0x2E268
// Slot symbol:     off_2E268
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

