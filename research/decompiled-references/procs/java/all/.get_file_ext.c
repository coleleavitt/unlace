// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6880
// Name:            .get_file_ext
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6880 jmp     cs:off_2D428
//
// Resolved target: get_file_ext
// Target address:  0x2D950
// GOT/IAT slot:    0x2D428
// Slot symbol:     off_2D428
// Target type:     <no type info>
// ============================================================

void .get_file_ext(/* see target signature */)
{
    // Tail-call to get_file_ext via GOT/IAT indirection
    return get_file_ext(/* forwarded args */);
}

