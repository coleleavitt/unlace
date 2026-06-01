// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10E0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10E0 jmp     cs:off_6058
//
// Resolved target: setinf_flag
// Target address:  0x61E0
// GOT/IAT slot:    0x6058
// Slot symbol:     off_6058
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

