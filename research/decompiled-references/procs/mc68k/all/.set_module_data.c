// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6330
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6330 jmp     cs:off_1D180
//
// Resolved target: set_module_data
// Target address:  0x1D670
// GOT/IAT slot:    0x1D180
// Slot symbol:     off_1D180
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

