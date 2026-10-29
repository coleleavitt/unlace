// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19860
// Name:            .parse_reg_name
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19860 jmp     cs:off_75418
//
// Resolved target: parse_reg_name
// Target address:  0x75C68
// GOT/IAT slot:    0x75418
// Slot symbol:     off_75418
// Target type:     <no type info>
// ============================================================

void .parse_reg_name(/* see target signature */)
{
    // Tail-call to parse_reg_name via GOT/IAT indirection
    return parse_reg_name(/* forwarded args */);
}

