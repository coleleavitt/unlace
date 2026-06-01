// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4380
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4380 jmp     cs:off_231A8
//
// Resolved target: rangeset_t_add
// Target address:  0x235C8
// GOT/IAT slot:    0x231A8
// Slot symbol:     off_231A8
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

