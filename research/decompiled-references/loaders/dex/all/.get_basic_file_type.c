// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x33B0
// Name:            .get_basic_file_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x33B0 jmp     cs:off_281C0
//
// Resolved target: get_basic_file_type
// Target address:  0x28670
// GOT/IAT slot:    0x281C0
// Slot symbol:     off_281C0
// Target type:     <no type info>
// ============================================================

void .get_basic_file_type(/* see target signature */)
{
    // Tail-call to get_basic_file_type via GOT/IAT indirection
    return get_basic_file_type(/* forwarded args */);
}

