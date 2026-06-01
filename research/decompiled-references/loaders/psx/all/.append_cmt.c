// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2130
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2130 jmp     cs:off_A080
//
// Resolved target: append_cmt
// Target address:  0xA330
// GOT/IAT slot:    0xA080
// Slot symbol:     off_A080
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

