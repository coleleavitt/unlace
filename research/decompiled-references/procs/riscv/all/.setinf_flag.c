// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA390
// Name:            .setinf_flag
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA390 jmp     cs:off_351B0
//
// Resolved target: setinf_flag
// Target address:  0x35800
// GOT/IAT slot:    0x351B0
// Slot symbol:     off_351B0
// Target type:     <no type info>
// ============================================================

void .setinf_flag(/* see target signature */)
{
    // Tail-call to setinf_flag via GOT/IAT indirection
    return setinf_flag(/* forwarded args */);
}

