// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4070
// Name:            .qtmpnam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4070 jmp     cs:off_1F020
//
// Resolved target: qtmpnam
// Target address:  0x1F2D0
// GOT/IAT slot:    0x1F020
// Slot symbol:     off_1F020
// Target type:     <no type info>
// ============================================================

void .qtmpnam(/* see target signature */)
{
    // Tail-call to qtmpnam via GOT/IAT indirection
    return qtmpnam(/* forwarded args */);
}

