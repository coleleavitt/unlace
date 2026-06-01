// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6460
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6460 jmp     cs:off_2F218
//
// Resolved target: rangeset_t_add
// Target address:  0x2F888
// GOT/IAT slot:    0x2F218
// Slot symbol:     off_2F218
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

