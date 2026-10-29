// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2190
// Name:            .append_cmt
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2190 jmp     cs:off_B0B0
//
// Resolved target: append_cmt
// Target address:  0xB358
// GOT/IAT slot:    0xB0B0
// Slot symbol:     off_B0B0
// Target type:     <no type info>
// ============================================================

void .append_cmt(/* see target signature */)
{
    // Tail-call to append_cmt via GOT/IAT indirection
    return append_cmt(/* forwarded args */);
}

