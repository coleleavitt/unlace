// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6930
// Name:            .udt_type_data_t__find_member
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6930 jmp     cs:off_2F480
//
// Resolved target: udt_type_data_t__find_member
// Target address:  0x2FB10
// GOT/IAT slot:    0x2F480
// Slot symbol:     off_2F480
// Target type:     <no type info>
// ============================================================

void .udt_type_data_t__find_member(/* see target signature */)
{
    // Tail-call to udt_type_data_t__find_member via GOT/IAT indirection
    return udt_type_data_t__find_member(/* forwarded args */);
}

