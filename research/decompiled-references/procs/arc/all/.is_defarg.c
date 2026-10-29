// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x83D0
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x83D0 jmp     cs:off_2A1D0
//
// Resolved target: is_defarg
// Target address:  0x2BBE0
// GOT/IAT slot:    0x2A1D0
// Slot symbol:     off_2A1D0
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

