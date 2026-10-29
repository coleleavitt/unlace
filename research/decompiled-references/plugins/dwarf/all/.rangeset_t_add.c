// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA5B0
// Name:            .rangeset_t_add
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA5B0 jmp     cs:off_CA2C0
//
// Resolved target: rangeset_t_add
// Target address:  0xD0BF8
// GOT/IAT slot:    0xCA2C0
// Slot symbol:     off_CA2C0
// Target type:     <no type info>
// ============================================================

void .rangeset_t_add(/* see target signature */)
{
    // Tail-call to rangeset_t_add via GOT/IAT indirection
    return rangeset_t_add(/* forwarded args */);
}

