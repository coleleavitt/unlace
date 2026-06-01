// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA460
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA460 jmp     cs:off_35218
//
// Resolved target: set_module_data
// Target address:  0x35868
// GOT/IAT slot:    0x35218
// Slot symbol:     off_35218
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

