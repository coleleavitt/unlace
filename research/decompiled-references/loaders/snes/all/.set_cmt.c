// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x10A0
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x10A0 jmp     cs:off_7038
//
// Resolved target: set_cmt
// Target address:  0x7130
// GOT/IAT slot:    0x7038
// Slot symbol:     off_7038
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

