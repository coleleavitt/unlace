// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x41B0
// Name:            .dirtree_chdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x41B0 jmp     cs:off_280C0
//
// Resolved target: dirtree_chdir
// Target address:  0x29A58
// GOT/IAT slot:    0x280C0
// Slot symbol:     off_280C0
// Target type:     <no type info>
// ============================================================

void .dirtree_chdir(/* see target signature */)
{
    // Tail-call to dirtree_chdir via GOT/IAT indirection
    return dirtree_chdir(/* forwarded args */);
}

