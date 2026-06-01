// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2080
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2080 jmp     cs:off_A028
//
// Resolved target: setinf
// Target address:  0xA258
// GOT/IAT slot:    0xA028
// Slot symbol:     off_A028
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

