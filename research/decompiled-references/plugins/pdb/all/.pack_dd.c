// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D100
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D100 jmp     cs:off_B3068
//
// Resolved target: pack_dd
// Target address:  0xB37D8
// GOT/IAT slot:    0xB3068
// Slot symbol:     off_B3068
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

