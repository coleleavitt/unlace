// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60D0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60D0 jmp     cs:off_24050
//
// Resolved target: setinf
// Target address:  0x25E20
// GOT/IAT slot:    0x24050
// Slot symbol:     off_24050
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

