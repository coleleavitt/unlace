// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62C0
// Name:            .get_type_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62C0 jmp     cs:off_2F148
//
// Resolved target: get_type_ordinal
// Target address:  0x2F7B8
// GOT/IAT slot:    0x2F148
// Slot symbol:     off_2F148
// Target type:     <no type info>
// ============================================================

void .get_type_ordinal(/* see target signature */)
{
    // Tail-call to get_type_ordinal via GOT/IAT indirection
    return get_type_ordinal(/* forwarded args */);
}

