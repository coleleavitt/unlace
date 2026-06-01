// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30A0
// Name:            .qtmpnam
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30A0 jmp     cs:off_28038
//
// Resolved target: qtmpnam
// Target address:  0x284E8
// GOT/IAT slot:    0x28038
// Slot symbol:     off_28038
// Target type:     <no type info>
// ============================================================

void .qtmpnam(/* see target signature */)
{
    // Tail-call to qtmpnam via GOT/IAT indirection
    return qtmpnam(/* forwarded args */);
}

