// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6110
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6110 jmp     cs:off_2F070
//
// Resolved target: pack_dd
// Target address:  0x2F6E0
// GOT/IAT slot:    0x2F070
// Slot symbol:     off_2F070
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

