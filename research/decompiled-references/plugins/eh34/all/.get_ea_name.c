// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6310
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6310 jmp     cs:off_8D170
//
// Resolved target: get_ea_name
// Target address:  0x8D708
// GOT/IAT slot:    0x8D170
// Slot symbol:     off_8D170
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

