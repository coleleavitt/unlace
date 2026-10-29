// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D990
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D990 jmp     cs:off_B34B0
//
// Resolved target: get_module_data
// Target address:  0xB3C68
// GOT/IAT slot:    0xB34B0
// Slot symbol:     off_B34B0
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

