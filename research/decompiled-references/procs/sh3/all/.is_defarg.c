// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5340
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5340 jmp     cs:off_15188
//
// Resolved target: is_defarg
// Target address:  0x16218
// GOT/IAT slot:    0x15188
// Slot symbol:     off_15188
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

