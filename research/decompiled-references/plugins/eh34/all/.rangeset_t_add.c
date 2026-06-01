// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6390
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6390 jmp     cs:off_8D1B0
//
// Resolved target: rangeset_t_add
// Target address:  0x8D748
// GOT/IAT slot:    0x8D1B0
// Slot symbol:     off_8D1B0
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

