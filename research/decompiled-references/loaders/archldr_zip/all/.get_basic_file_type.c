// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21A0
// Name:            .get_basic_file_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21A0 jmp     cs:off_80B8
//
// Resolved target: get_basic_file_type
// Target address:  0x8288
// GOT/IAT slot:    0x80B8
// Slot symbol:     off_80B8
// Target type:     <no type info>
// ============================================================

void .get_basic_file_type(/* see target signature */)
{
    // Tail-call to get_basic_file_type via GOT/IAT indirection
    return get_basic_file_type(/* forwarded args */);
}

