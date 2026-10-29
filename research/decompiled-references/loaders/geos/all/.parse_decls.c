// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2110
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2110 jmp     cs:off_8070
//
// Resolved target: parse_decls
// Target address:  0x82D0
// GOT/IAT slot:    0x8070
// Slot symbol:     off_8070
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

