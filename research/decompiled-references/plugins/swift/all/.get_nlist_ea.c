// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4850
// Name:            .get_nlist_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4850 jmp     cs:off_28410
//
// Resolved target: get_nlist_ea
// Target address:  0x29DC8
// GOT/IAT slot:    0x28410
// Slot symbol:     off_28410
// Target type:     <no type info>
// ============================================================

void .get_nlist_ea(/* see target signature */)
{
    // Tail-call to get_nlist_ea via GOT/IAT indirection
    return get_nlist_ea(/* forwarded args */);
}

