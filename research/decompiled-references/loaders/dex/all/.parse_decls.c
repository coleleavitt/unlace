// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31B0
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31B0 jmp     cs:off_280C0
//
// Resolved target: parse_decls
// Target address:  0x28570
// GOT/IAT slot:    0x280C0
// Slot symbol:     off_280C0
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

