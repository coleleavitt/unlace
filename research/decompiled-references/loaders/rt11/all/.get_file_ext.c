// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x12A0
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x12A0 jmp     cs:off_5138
//
// Resolved target: get_file_ext
// Target address:  0x52C8
// GOT/IAT slot:    0x5138
// Slot symbol:     off_5138
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

