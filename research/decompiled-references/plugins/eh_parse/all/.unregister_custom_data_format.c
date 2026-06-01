// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x69F0
// Name:            .unregister_custom_data_format
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x69F0 jmp     cs:off_2F4E0
//
// Resolved target: unregister_custom_data_format
// Target address:  0x2FB70
// GOT/IAT slot:    0x2F4E0
// Slot symbol:     off_2F4E0
// Target type:     <no type info>
// ============================================================

void .unregister_custom_data_format(/* see target signature */)
{
    // Tail-call to unregister_custom_data_format via GOT/IAT indirection
    return unregister_custom_data_format(/* forwarded args */);
}

