// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6520
// Name:            .get_max_strlit_length
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6520 jmp     cs:off_8D278
//
// Resolved target: get_max_strlit_length
// Target address:  0x8D818
// GOT/IAT slot:    0x8D278
// Slot symbol:     off_8D278
// Target type:     <no type info>
// ============================================================

void .get_max_strlit_length(/* see target signature */)
{
    // Tail-call to get_max_strlit_length via GOT/IAT indirection
    return get_max_strlit_length(/* forwarded args */);
}

