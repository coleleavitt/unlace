// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6340
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6340 jmp     cs:off_2D188
//
// Resolved target: set_module_data
// Target address:  0x2D688
// GOT/IAT slot:    0x2D188
// Slot symbol:     off_2D188
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

