// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D390
// Name:            .get_type_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D390 jmp     cs:off_B31B0
//
// Resolved target: get_type_ordinal
// Target address:  0xB3948
// GOT/IAT slot:    0xB31B0
// Slot symbol:     off_B31B0
// Target type:     <no type info>
// ============================================================

void .get_type_ordinal(/* see target signature */)
{
    // Tail-call to get_type_ordinal via GOT/IAT indirection
    return get_type_ordinal(/* forwarded args */);
}

