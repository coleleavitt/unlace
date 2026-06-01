// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4300
// Name:            .rangeset_t_has_common
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4300 jmp     cs:off_1F168
//
// Resolved target: rangeset_t_has_common
// Target address:  0x1F418
// GOT/IAT slot:    0x1F168
// Slot symbol:     off_1F168
// Target type:     <no type info>
// ============================================================

void .rangeset_t_has_common(/* see target signature */)
{
    // Tail-call to rangeset_t_has_common via GOT/IAT indirection
    return rangeset_t_has_common(/* forwarded args */);
}

