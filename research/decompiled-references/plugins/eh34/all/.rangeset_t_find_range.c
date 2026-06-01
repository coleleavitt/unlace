// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62A0
// Name:            .rangeset_t_find_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62A0 jmp     cs:off_8D138
//
// Resolved target: rangeset_t_find_range
// Target address:  0x8D6C8
// GOT/IAT slot:    0x8D138
// Slot symbol:     off_8D138
// Target type:     <no type info>
// ============================================================

void .rangeset_t_find_range(/* see target signature */)
{
    // Tail-call to rangeset_t_find_range via GOT/IAT indirection
    return rangeset_t_find_range(/* forwarded args */);
}

