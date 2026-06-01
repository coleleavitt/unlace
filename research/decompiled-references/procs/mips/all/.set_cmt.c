// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x194B0
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x194B0 jmp     cs:off_75240
//
// Resolved target: set_cmt
// Target address:  0x75A90
// GOT/IAT slot:    0x75240
// Slot symbol:     off_75240
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

