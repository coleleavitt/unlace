// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9170
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9170 jmp     cs:off_260A0
//
// Resolved target: set_cmt
// Target address:  0x263B0
// GOT/IAT slot:    0x260A0
// Slot symbol:     off_260A0
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

