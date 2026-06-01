// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA580
// Name:            .unpack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA580 jmp     cs:off_352A8
//
// Resolved target: unpack_dd
// Target address:  0x358F8
// GOT/IAT slot:    0x352A8
// Slot symbol:     off_352A8
// Target type:     <no type info>
// ============================================================

void .unpack_dd(/* see target signature */)
{
    // Tail-call to unpack_dd via GOT/IAT indirection
    return unpack_dd(/* forwarded args */);
}

