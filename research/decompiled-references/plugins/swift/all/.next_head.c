// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4030
// Name:            .next_head
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4030 jmp     cs:off_28000
//
// Resolved target: next_head
// Target address:  0x29990
// GOT/IAT slot:    0x28000
// Slot symbol:     off_28000
// Target type:     <no type info>
// ============================================================

void .next_head(/* see target signature */)
{
    // Tail-call to next_head via GOT/IAT indirection
    return next_head(/* forwarded args */);
}

