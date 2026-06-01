// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60D0
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60D0 jmp     cs:off_8D050
//
// Resolved target: pack_dd
// Target address:  0x8D5D0
// GOT/IAT slot:    0x8D050
// Slot symbol:     off_8D050
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

