// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6350
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6350 jmp     cs:off_2F190
//
// Resolved target: set_cmt
// Target address:  0x2F800
// GOT/IAT slot:    0x2F190
// Slot symbol:     off_2F190
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

