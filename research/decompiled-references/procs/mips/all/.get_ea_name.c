// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19510
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19510 jmp     cs:off_75270
//
// Resolved target: get_ea_name
// Target address:  0x75AC0
// GOT/IAT slot:    0x75270
// Slot symbol:     off_75270
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

