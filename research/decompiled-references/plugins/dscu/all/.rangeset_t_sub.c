// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4160
// Name:            .rangeset_t_sub
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4160 jmp     cs:off_1F098
//
// Resolved target: rangeset_t_sub
// Target address:  0x1F348
// GOT/IAT slot:    0x1F098
// Slot symbol:     off_1F098
// Target type:     <no type info>
// ============================================================

void .rangeset_t_sub(/* see target signature */)
{
    // Tail-call to rangeset_t_sub via GOT/IAT indirection
    return rangeset_t_sub(/* forwarded args */);
}

