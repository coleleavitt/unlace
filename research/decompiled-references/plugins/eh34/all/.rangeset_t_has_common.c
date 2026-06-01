// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64D0
// Name:            .rangeset_t_has_common
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64D0 jmp     cs:off_8D250
//
// Resolved target: rangeset_t_has_common
// Target address:  0x8D7E8
// GOT/IAT slot:    0x8D250
// Slot symbol:     off_8D250
// Target type:     <no type info>
// ============================================================

void .rangeset_t_has_common(/* see target signature */)
{
    // Tail-call to rangeset_t_has_common via GOT/IAT indirection
    return rangeset_t_has_common(/* forwarded args */);
}

