// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x94F0
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x94F0 jmp     cs:off_89260
//
// Resolved target: rangeset_t_add
// Target address:  0x8C568
// GOT/IAT slot:    0x89260
// Slot symbol:     off_89260
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

