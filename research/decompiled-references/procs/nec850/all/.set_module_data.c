// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93F0
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93F0 jmp     cs:off_2E1E0
//
// Resolved target: set_module_data
// Target address:  0x2E850
// GOT/IAT slot:    0x2E1E0
// Slot symbol:     off_2E1E0
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

