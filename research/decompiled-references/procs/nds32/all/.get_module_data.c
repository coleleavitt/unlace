// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8610
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8610 jmp     cs:off_2A2F0
//
// Resolved target: get_module_data
// Target address:  0x2A870
// GOT/IAT slot:    0x2A2F0
// Slot symbol:     off_2A2F0
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

