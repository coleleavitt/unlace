// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9370
// Name:            .rangeset_t_sub
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9370 jmp     cs:off_891A0
//
// Resolved target: rangeset_t_sub
// Target address:  0x8C4A0
// GOT/IAT slot:    0x891A0
// Slot symbol:     off_891A0
// Target type:     <no type info>
// ============================================================

void .rangeset_t_sub(/* see target signature */)
{
    // Tail-call to rangeset_t_sub via GOT/IAT indirection
    return rangeset_t_sub(/* forwarded args */);
}

