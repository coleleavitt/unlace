// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA7D0
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA7D0 jmp     cs:off_353D0
//
// Resolved target: get_module_data
// Target address:  0x35A30
// GOT/IAT slot:    0x353D0
// Slot symbol:     off_353D0
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

