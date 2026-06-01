// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D950
// Name:            .dirtree_getcwd
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D950 jmp     cs:off_B3490
//
// Resolved target: dirtree_getcwd
// Target address:  0xB3C48
// GOT/IAT slot:    0xB3490
// Slot symbol:     off_B3490
// Target type:     <no type info>
// ============================================================

void .dirtree_getcwd(/* see target signature */)
{
    // Tail-call to dirtree_getcwd via GOT/IAT indirection
    return dirtree_getcwd(/* forwarded args */);
}

