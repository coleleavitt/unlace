// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D530
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D530 jmp     cs:off_B3280
//
// Resolved target: rangeset_t_add
// Target address:  0xB3A20
// GOT/IAT slot:    0xB3280
// Slot symbol:     off_B3280
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

