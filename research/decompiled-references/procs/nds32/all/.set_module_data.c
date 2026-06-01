// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8330
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8330 jmp     cs:off_2A180
//
// Resolved target: set_module_data
// Target address:  0x2A6F0
// GOT/IAT slot:    0x2A180
// Slot symbol:     off_2A180
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

