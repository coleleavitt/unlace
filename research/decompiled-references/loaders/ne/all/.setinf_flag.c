// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2180
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2180 jmp     cs:off_B0A8
//
// Resolved target: setinf_flag
// Target address:  0xB340
// GOT/IAT slot:    0xB0A8
// Slot symbol:     off_B0A8
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

