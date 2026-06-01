// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20D0
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20D0 jmp     cs:off_A050
//
// Resolved target: parse_decls
// Target address:  0xA280
// GOT/IAT slot:    0xA050
// Slot symbol:     off_A050
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

