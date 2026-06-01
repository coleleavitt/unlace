// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62A0
// Name:            .tag_strlen
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62A0 jmp     cs:off_2D138
//
// Resolved target: tag_strlen
// Target address:  0x2D638
// GOT/IAT slot:    0x2D138
// Slot symbol:     off_2D138
// Target type:     <no type info>
// ============================================================

void .tag_strlen(/* see target signature */)
{
    // Tail-call to tag_strlen via GOT/IAT indirection
    return tag_strlen(/* forwarded args */);
}

