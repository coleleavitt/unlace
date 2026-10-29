// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4750
// Name:            .udt_type_data_t__find_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4750 jmp     cs:off_28390
//
// Resolved target: udt_type_data_t__find_member
// Target address:  0x29D48
// GOT/IAT slot:    0x28390
// Slot symbol:     off_28390
// Target type:     <no type info>
// ============================================================

void .udt_type_data_t__find_member(/* see target signature */)
{
    // Tail-call to udt_type_data_t__find_member via GOT/IAT indirection
    return udt_type_data_t__find_member(/* forwarded args */);
}

