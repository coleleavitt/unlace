// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6250
// Name:            .rangeset_t_sub
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6250 jmp     cs:off_8D110
//
// Resolved target: rangeset_t_sub
// Target address:  0x8D6A0
// GOT/IAT slot:    0x8D110
// Slot symbol:     off_8D110
// Target type:     <no type info>
// ============================================================

void .rangeset_t_sub(/* see target signature */)
{
    // Tail-call to rangeset_t_sub via GOT/IAT indirection
    return rangeset_t_sub(/* forwarded args */);
}

