// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9340
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9340 jmp     cs:off_2E188
//
// Resolved target: setinf_flag
// Target address:  0x2E7F8
// GOT/IAT slot:    0x2E188
// Slot symbol:     off_2E188
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

