// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_B098
//
// Resolved target: append_cmt
// Target address:  0xB330
// GOT/IAT slot:    0xB098
// Slot symbol:     off_B098
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

