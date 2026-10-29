// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x201B0
// Name:            .pack_dd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x201B0 jmp     cs:off_950C0
//
// Resolved target: pack_dd
// Target address:  0x95AF0
// GOT/IAT slot:    0x950C0
// Slot symbol:     off_950C0
// Target type:     <no type info>
// ============================================================

void .pack_dd(/* see target signature */)
{
    // Tail-call to pack_dd via GOT/IAT indirection
    return pack_dd(/* forwarded args */);
}

