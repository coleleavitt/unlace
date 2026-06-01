// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_B0C0
//
// Resolved target: setinf_flag
// Target address:  0xB368
// GOT/IAT slot:    0xB0C0
// Slot symbol:     off_B0C0
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

