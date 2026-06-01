// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D1E0
// Name:            .dirtree_chdir
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D1E0 jmp     cs:off_B30D8
//
// Resolved target: dirtree_chdir
// Target address:  0xB3860
// GOT/IAT slot:    0xB30D8
// Slot symbol:     off_B30D8
// Target type:     <no type info>
// ============================================================

void .dirtree_chdir(/* see target signature */)
{
    // Tail-call to dirtree_chdir via GOT/IAT indirection
    return dirtree_chdir(/* forwarded args */);
}

