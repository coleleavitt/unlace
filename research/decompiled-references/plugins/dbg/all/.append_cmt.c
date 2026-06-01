// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3220
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3220 jmp     cs:off_130F8
//
// Resolved target: append_cmt
// Target address:  0x13470
// GOT/IAT slot:    0x130F8
// Slot symbol:     off_130F8
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

