// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6260
// Name:            .prev_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6260 jmp     cs:off_8D118
//
// Resolved target: prev_head
// Target address:  0x8D6A8
// GOT/IAT slot:    0x8D118
// Slot symbol:     off_8D118
// Target type:     <no type info>
// ============================================================

void .prev_head(/* see target signature */)
{
    // Tail-call to prev_head via GOT/IAT indirection
    return prev_head(/* forwarded args */);
}

