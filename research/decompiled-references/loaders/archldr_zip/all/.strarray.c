// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2070
// Name:            .strarray
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2070 jmp     cs:off_8020
//
// Resolved target: strarray
// Target address:  0x81E0
// GOT/IAT slot:    0x8020
// Slot symbol:     off_8020
// Target type:     <no type info>
// ============================================================

void .strarray(/* see target signature */)
{
    // Tail-call to strarray via GOT/IAT indirection
    return strarray(/* forwarded args */);
}

