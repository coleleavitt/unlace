// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9390
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9390 jmp     cs:off_891B0
//
// Resolved target: append_cmt
// Target address:  0x8C4B0
// GOT/IAT slot:    0x891B0
// Slot symbol:     off_891B0
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

