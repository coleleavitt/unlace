// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4300
// Name:            .get_type_ordinal
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4300 jmp     cs:off_28168
//
// Resolved target: get_type_ordinal
// Target address:  0x29B00
// GOT/IAT slot:    0x28168
// Slot symbol:     off_28168
// Target type:     <no type info>
// ============================================================

void .get_type_ordinal(/* see target signature */)
{
    // Tail-call to get_type_ordinal via GOT/IAT indirection
    return get_type_ordinal(/* forwarded args */);
}

