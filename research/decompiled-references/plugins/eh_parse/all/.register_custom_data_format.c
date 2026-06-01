// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62E0
// Name:            .register_custom_data_format
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62E0 jmp     cs:off_2F158
//
// Resolved target: register_custom_data_format
// Target address:  0x2F7C8
// GOT/IAT slot:    0x2F158
// Slot symbol:     off_2F158
// Target type:     <no type info>
// ============================================================

void .register_custom_data_format(/* see target signature */)
{
    // Tail-call to register_custom_data_format via GOT/IAT indirection
    return register_custom_data_format(/* forwarded args */);
}

