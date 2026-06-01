// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20C00
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20C00 jmp     cs:off_955E8
//
// Resolved target: get_module_data
// Target address:  0x96030
// GOT/IAT slot:    0x955E8
// Slot symbol:     off_955E8
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

