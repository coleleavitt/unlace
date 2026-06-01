// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA0B0
// Name:            .qtmpnam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA0B0 jmp     cs:off_CA040
//
// Resolved target: qtmpnam
// Target address:  0xD0960
// GOT/IAT slot:    0xCA040
// Slot symbol:     off_CA040
// Target type:     <no type info>
// ============================================================

void .qtmpnam(/* see target signature */)
{
    // Tail-call to qtmpnam via GOT/IAT indirection
    return qtmpnam(/* forwarded args */);
}

