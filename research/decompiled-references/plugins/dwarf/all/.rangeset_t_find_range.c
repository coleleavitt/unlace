// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA400
// Name:            .rangeset_t_find_range
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA400 jmp     cs:off_CA1E8
//
// Resolved target: rangeset_t_find_range
// Target address:  0xD0B18
// GOT/IAT slot:    0xCA1E8
// Slot symbol:     off_CA1E8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_find_range(/* see target signature */)
{
    // Tail-call to rangeset_t_find_range via GOT/IAT indirection
    return rangeset_t_find_range(/* forwarded args */);
}

