// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D1A0
// Name:            .get_plugin_options
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D1A0 jmp     cs:off_B30B8
//
// Resolved target: get_plugin_options
// Target address:  0xB3840
// GOT/IAT slot:    0xB30B8
// Slot symbol:     off_B30B8
// Target type:     <no type info>
// ============================================================

void .get_plugin_options(/* see target signature */)
{
    // Tail-call to get_plugin_options via GOT/IAT indirection
    return get_plugin_options(/* forwarded args */);
}

