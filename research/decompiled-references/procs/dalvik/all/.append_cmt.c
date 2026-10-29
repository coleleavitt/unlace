// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x51D0
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x51D0 jmp     cs:off_1A0D0
//
// Resolved target: append_cmt
// Target address:  0x1A458
// GOT/IAT slot:    0x1A0D0
// Slot symbol:     off_1A0D0
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

