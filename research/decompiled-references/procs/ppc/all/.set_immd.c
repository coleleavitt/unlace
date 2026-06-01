// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20BD0
// Name:            .set_immd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20BD0 jmp     cs:off_955D0
//
// Resolved target: set_immd
// Target address:  0x96018
// GOT/IAT slot:    0x955D0
// Slot symbol:     off_955D0
// Target type:     <no type info>
// ============================================================

void .set_immd(/* see target signature */)
{
    // Tail-call to set_immd via GOT/IAT indirection
    return set_immd(/* forwarded args */);
}

