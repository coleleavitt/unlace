// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6920
// Name:            .unregister_custom_data_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6920 jmp     cs:off_2F478
//
// Resolved target: unregister_custom_data_type
// Target address:  0x2FB08
// GOT/IAT slot:    0x2F478
// Slot symbol:     off_2F478
// Target type:     <no type info>
// ============================================================

void .unregister_custom_data_type(/* see target signature */)
{
    // Tail-call to unregister_custom_data_type via GOT/IAT indirection
    return unregister_custom_data_type(/* forwarded args */);
}

