// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4250
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4250 jmp     cs:off_1F110
//
// Resolved target: unpack_dd
// Target address:  0x1F3C0
// GOT/IAT slot:    0x1F110
// Slot symbol:     off_1F110
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

