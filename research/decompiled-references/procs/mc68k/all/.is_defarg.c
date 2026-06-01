// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6350
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6350 jmp     cs:off_1D190
//
// Resolved target: is_defarg
// Target address:  0x1D680
// GOT/IAT slot:    0x1D190
// Slot symbol:     off_1D190
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

