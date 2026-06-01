// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32C0
// Name:            .set_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32C0 jmp     cs:off_13148
//
// Resolved target: set_module_data
// Target address:  0x134C8
// GOT/IAT slot:    0x13148
// Slot symbol:     off_13148
// Target type:     <no type info>
// ============================================================

void .set_module_data(/* see target signature */)
{
    // Tail-call to set_module_data via GOT/IAT indirection
    return set_module_data(/* forwarded args */);
}

