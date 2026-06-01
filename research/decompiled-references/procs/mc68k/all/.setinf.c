// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60F0
// Name:            .setinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60F0 jmp     cs:off_1D060
//
// Resolved target: setinf
// Target address:  0x1D550
// GOT/IAT slot:    0x1D060
// Slot symbol:     off_1D060
// Target type:     <no type info>
// ============================================================

void .setinf(/* see target signature */)
{
    // Tail-call to setinf via GOT/IAT indirection
    return setinf(/* forwarded args */);
}

