// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3290
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3290 jmp     cs:off_20130
//
// Resolved target: get_ea_name
// Target address:  0x21A40
// GOT/IAT slot:    0x20130
// Slot symbol:     off_20130
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

