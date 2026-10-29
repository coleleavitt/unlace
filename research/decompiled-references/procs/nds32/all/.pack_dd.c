// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8100
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8100 jmp     cs:off_2A068
//
// Resolved target: pack_dd
// Target address:  0x2A5D8
// GOT/IAT slot:    0x2A068
// Slot symbol:     off_2A068
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

