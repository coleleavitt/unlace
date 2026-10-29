// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5280
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5280 jmp     cs:off_15128
//
// Resolved target: set_cmt
// Target address:  0x161B8
// GOT/IAT slot:    0x15128
// Slot symbol:     off_15128
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

