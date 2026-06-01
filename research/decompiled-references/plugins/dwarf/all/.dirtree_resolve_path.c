// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA990
// Name:            .dirtree_resolve_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA990 jmp     cs:off_CA4B0
//
// Resolved target: dirtree_resolve_path
// Target address:  0xD0DF8
// GOT/IAT slot:    0xCA4B0
// Slot symbol:     off_CA4B0
// Target type:     <no type info>
// ============================================================

void .dirtree_resolve_path(/* see target signature */)
{
    // Tail-call to dirtree_resolve_path via GOT/IAT indirection
    return dirtree_resolve_path(/* forwarded args */);
}

