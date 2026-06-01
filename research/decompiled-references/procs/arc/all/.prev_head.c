// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x82C0
// Name:            .prev_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x82C0 jmp     cs:off_2A148
//
// Resolved target: prev_head
// Target address:  0x2BB58
// GOT/IAT slot:    0x2A148
// Slot symbol:     off_2A148
// Target type:     <no type info>
// ============================================================

void .prev_head(/* see target signature */)
{
    // Tail-call to prev_head via GOT/IAT indirection
    return prev_head(/* forwarded args */);
}

