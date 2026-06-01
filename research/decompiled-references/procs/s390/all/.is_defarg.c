// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x101A0
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x101A0 jmp     cs:off_2E0B8
//
// Resolved target: is_defarg
// Target address:  0x36D30
// GOT/IAT slot:    0x2E0B8
// Slot symbol:     off_2E0B8
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

