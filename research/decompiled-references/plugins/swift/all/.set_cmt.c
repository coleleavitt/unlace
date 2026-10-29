// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4350
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4350 jmp     cs:off_28190
//
// Resolved target: set_cmt
// Target address:  0x29B28
// GOT/IAT slot:    0x28190
// Slot symbol:     off_28190
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

