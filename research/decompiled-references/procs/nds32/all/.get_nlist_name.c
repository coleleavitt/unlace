// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8780
// Name:            .get_nlist_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8780 jmp     cs:off_2A3A8
//
// Resolved target: get_nlist_name
// Target address:  0x2A930
// GOT/IAT slot:    0x2A3A8
// Slot symbol:     off_2A3A8
// Target type:     <no type info>
// ============================================================

void .get_nlist_name(/* see target signature */)
{
    // Tail-call to get_nlist_name via GOT/IAT indirection
    return get_nlist_name(/* forwarded args */);
}

