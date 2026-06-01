// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3110
// Name:            .getinf
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3110 jmp     cs:off_13070
//
// Resolved target: getinf
// Target address:  0x133E8
// GOT/IAT slot:    0x13070
// Slot symbol:     off_13070
// Target type:     <no type info>
// ============================================================

void .getinf(/* see target signature */)
{
    // Tail-call to getinf via GOT/IAT indirection
    return getinf(/* forwarded args */);
}

