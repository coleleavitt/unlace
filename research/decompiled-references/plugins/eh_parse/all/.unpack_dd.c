// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6530
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6530 jmp     cs:off_2F280
//
// Resolved target: unpack_dd
// Target address:  0x2F8F0
// GOT/IAT slot:    0x2F280
// Slot symbol:     off_2F280
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

