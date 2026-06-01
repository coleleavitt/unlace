// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6390
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6390 jmp     cs:off_241B0
//
// Resolved target: is_defarg
// Target address:  0x25F80
// GOT/IAT slot:    0x241B0
// Slot symbol:     off_241B0
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

