// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3030
// Name:            .parse_command_line
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3030 jmp     cs:off_29000
//
// Resolved target: parse_command_line
// Target address:  0x293B0
// GOT/IAT slot:    0x29000
// Slot symbol:     off_29000
// Target type:     <no type info>
// ============================================================

void .parse_command_line(/* see target signature */)
{
    // Tail-call to parse_command_line via GOT/IAT indirection
    return parse_command_line(/* forwarded args */);
}

