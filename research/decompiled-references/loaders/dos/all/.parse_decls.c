// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2120
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2120 jmp     cs:off_B078
//
// Resolved target: parse_decls
// Target address:  0xB510
// GOT/IAT slot:    0xB078
// Slot symbol:     off_B078
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

