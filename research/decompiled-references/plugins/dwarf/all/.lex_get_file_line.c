// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA530
// Name:            .lex_get_file_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA530 jmp     cs:off_CA280
//
// Resolved target: lex_get_file_line
// Target address:  0xD0BB8
// GOT/IAT slot:    0xCA280
// Slot symbol:     off_CA280
// Target type:     <no type info>
// ============================================================

void .lex_get_file_line(/* see target signature */)
{
    // Tail-call to lex_get_file_line via GOT/IAT indirection
    return lex_get_file_line(/* forwarded args */);
}

