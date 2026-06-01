// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3070
// Name:            .qtmpnam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3070 jmp     cs:off_29020
//
// Resolved target: qtmpnam
// Target address:  0x293D0
// GOT/IAT slot:    0x29020
// Slot symbol:     off_29020
// Target type:     <no type info>
// ============================================================

void .qtmpnam(/* see target signature */)
{
    // Tail-call to qtmpnam via GOT/IAT indirection
    return qtmpnam(/* forwarded args */);
}

