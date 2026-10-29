// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x61B0
// Name:            .attach_custom_data_format
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x61B0 jmp     cs:off_2F0C0
//
// Resolved target: attach_custom_data_format
// Target address:  0x2F730
// GOT/IAT slot:    0x2F0C0
// Slot symbol:     off_2F0C0
// Target type:     <no type info>
// ============================================================

void .attach_custom_data_format(/* see target signature */)
{
    // Tail-call to attach_custom_data_format via GOT/IAT indirection
    return attach_custom_data_format(/* forwarded args */);
}

