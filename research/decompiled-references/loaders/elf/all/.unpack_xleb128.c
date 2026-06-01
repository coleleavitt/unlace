// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9410
// Name:            .unpack_xleb128
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9410 jmp     cs:off_891F0
//
// Resolved target: unpack_xleb128
// Target address:  0x8C4F0
// GOT/IAT slot:    0x891F0
// Slot symbol:     off_891F0
// Target type:     <no type info>
// ============================================================

void .unpack_xleb128(/* see target signature */)
{
    // Tail-call to unpack_xleb128 via GOT/IAT indirection
    return unpack_xleb128(/* forwarded args */);
}

