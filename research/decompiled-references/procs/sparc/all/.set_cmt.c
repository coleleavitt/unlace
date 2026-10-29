// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x72A0
// Name:            .set_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x72A0 jmp     cs:off_19138
//
// Resolved target: set_cmt
// Target address:  0x19668
// GOT/IAT slot:    0x19138
// Slot symbol:     off_19138
// Target type:     <no type info>
// ============================================================

void .set_cmt(/* see target signature */)
{
    // Tail-call to set_cmt via GOT/IAT indirection
    return set_cmt(/* forwarded args */);
}

