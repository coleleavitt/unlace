// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8800
// Name:            .get_nlist_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8800 jmp     cs:off_2A3E8
//
// Resolved target: get_nlist_ea
// Target address:  0x2A970
// GOT/IAT slot:    0x2A3E8
// Slot symbol:     off_2A3E8
// Target type:     <no type info>
// ============================================================

void .get_nlist_ea(/* see target signature */)
{
    // Tail-call to get_nlist_ea via GOT/IAT indirection
    return get_nlist_ea(/* forwarded args */);
}

