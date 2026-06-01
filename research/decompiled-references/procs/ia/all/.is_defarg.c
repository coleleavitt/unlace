// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x71D0
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x71D0 jmp     cs:off_260D0
//
// Resolved target: is_defarg
// Target address:  0x26388
// GOT/IAT slot:    0x260D0
// Slot symbol:     off_260D0
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

