// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51F0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x51F0 jmp     cs:off_1A0E0
//
// Resolved target: setinf_flag
// Target address:  0x1A468
// GOT/IAT slot:    0x1A0E0
// Slot symbol:     off_1A0E0
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

