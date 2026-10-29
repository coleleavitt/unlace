// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19A80
// Name:            .get_module_data
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19A80 jmp     cs:off_75528
//
// Resolved target: get_module_data
// Target address:  0x75D88
// GOT/IAT slot:    0x75528
// Slot symbol:     off_75528
// Target type:     <no type info>
// ============================================================

void .get_module_data(/* see target signature */)
{
    // Tail-call to get_module_data via GOT/IAT indirection
    return get_module_data(/* forwarded args */);
}

