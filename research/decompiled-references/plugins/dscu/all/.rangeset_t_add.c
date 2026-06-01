// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4220
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4220 jmp     cs:off_1F0F8
//
// Resolved target: rangeset_t_add
// Target address:  0x1F3A8
// GOT/IAT slot:    0x1F0F8
// Slot symbol:     off_1F0F8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

