// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6100
// Name:            .clr_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6100 jmp     cs:off_1D068
//
// Resolved target: clr_module_data
// Target address:  0x1D558
// GOT/IAT slot:    0x1D068
// Slot symbol:     off_1D068
// Target type:     <no type info>
// ============================================================

void .clr_module_data(/* see target signature */)
{
    // Tail-call to clr_module_data via GOT/IAT indirection
    return clr_module_data(/* forwarded args */);
}

