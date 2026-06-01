// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19480
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19480 jmp     cs:off_75228
//
// Resolved target: setinf_flag
// Target address:  0x75A78
// GOT/IAT slot:    0x75228
// Slot symbol:     off_75228
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

