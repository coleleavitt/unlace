// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1090
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1090 jmp     cs:off_4030
//
// Resolved target: append_cmt
// Target address:  0x4148
// GOT/IAT slot:    0x4030
// Slot symbol:     off_4030
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

