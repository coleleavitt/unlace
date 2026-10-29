// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3260
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3260 jmp     cs:off_14118
//
// Resolved target: append_cmt
// Target address:  0x14700
// GOT/IAT slot:    0x14118
// Slot symbol:     off_14118
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

