// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x50D0
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x50D0 jmp     cs:off_1A050
//
// Resolved target: pack_dd
// Target address:  0x1A3D0
// GOT/IAT slot:    0x1A050
// Slot symbol:     off_1A050
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

