// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62E0
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62E0 jmp     cs:off_24158
//
// Resolved target: setinf_flag
// Target address:  0x25F28
// GOT/IAT slot:    0x24158
// Slot symbol:     off_24158
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

