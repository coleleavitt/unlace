// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA140
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA140 jmp     cs:off_CA088
//
// Resolved target: pack_dd
// Target address:  0xD09A8
// GOT/IAT slot:    0xCA088
// Slot symbol:     off_CA088
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

