// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6400
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6400 jmp     cs:off_2F1E8
//
// Resolved target: set_module_data
// Target address:  0x2F858
// GOT/IAT slot:    0x2F1E8
// Slot symbol:     off_2F1E8
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

