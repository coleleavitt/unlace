// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3270
// Name:            .get_type_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3270 jmp     cs:off_28120
//
// Resolved target: get_type_ordinal
// Target address:  0x285D0
// GOT/IAT slot:    0x28120
// Slot symbol:     off_28120
// Target type:     <no type info>
// ============================================================

void .get_type_ordinal(/* see target signature */)
{
    // Tail-call to get_type_ordinal via GOT/IAT indirection
    return get_type_ordinal(/* forwarded args */);
}

