// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2240
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2240 jmp     cs:off_B108
//
// Resolved target: setinf_flag
// Target address:  0xB5A0
// GOT/IAT slot:    0xB108
// Slot symbol:     off_B108
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

