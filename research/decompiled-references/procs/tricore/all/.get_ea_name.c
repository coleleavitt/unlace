// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6330
// Name:            .get_ea_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6330 jmp     cs:off_24180
//
// Resolved target: get_ea_name
// Target address:  0x25F50
// GOT/IAT slot:    0x24180
// Slot symbol:     off_24180
// Target type:     <no type info>
// ============================================================

void .get_ea_name(/* see target signature */)
{
    // Tail-call to get_ea_name via GOT/IAT indirection
    return get_ea_name(/* forwarded args */);
}

