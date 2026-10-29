// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41D0
// Name:            .parse_decls
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41D0 jmp     cs:off_280D0
//
// Resolved target: parse_decls
// Target address:  0x29A68
// GOT/IAT slot:    0x280D0
// Slot symbol:     off_280D0
// Target type:     <no type info>
// ============================================================

void .parse_decls(/* see target signature */)
{
    // Tail-call to parse_decls via GOT/IAT indirection
    return parse_decls(/* forwarded args */);
}

