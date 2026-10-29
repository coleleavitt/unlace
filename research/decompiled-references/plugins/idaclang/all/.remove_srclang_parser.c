// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x32B0
// Name:            .remove_srclang_parser
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x32B0 jmp     cs:off_29140
//
// Resolved target: remove_srclang_parser
// Target address:  0x294F0
// GOT/IAT slot:    0x29140
// Slot symbol:     off_29140
// Target type:     <no type info>
// ============================================================

void .remove_srclang_parser(/* see target signature */)
{
    // Tail-call to remove_srclang_parser via GOT/IAT indirection
    return remove_srclang_parser(/* forwarded args */);
}

