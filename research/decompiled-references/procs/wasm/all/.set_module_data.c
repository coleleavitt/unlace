// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x91D0
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x91D0 jmp     cs:off_260D0
//
// Resolved target: set_module_data
// Target address:  0x263E0
// GOT/IAT slot:    0x260D0
// Slot symbol:     off_260D0
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

