// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4290
// Name:            .rangeset_t_sub
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4290 jmp     cs:off_23130
//
// Resolved target: rangeset_t_sub
// Target address:  0x23550
// GOT/IAT slot:    0x23130
// Slot symbol:     off_23130
// Target type:     <no type info>
// ============================================================

void .rangeset_t_sub(/* see target signature */)
{
    // Tail-call to rangeset_t_sub via GOT/IAT indirection
    return rangeset_t_sub(/* forwarded args */);
}

