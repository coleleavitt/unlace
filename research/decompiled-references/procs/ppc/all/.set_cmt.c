// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x205B0
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x205B0 jmp     cs:off_952C0
//
// Resolved target: set_cmt
// Target address:  0x95CF8
// GOT/IAT slot:    0x952C0
// Slot symbol:     off_952C0
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

