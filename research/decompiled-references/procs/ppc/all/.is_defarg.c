// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x206C0
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x206C0 jmp     cs:off_95348
//
// Resolved target: is_defarg
// Target address:  0x95D80
// GOT/IAT slot:    0x95348
// Slot symbol:     off_95348
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

