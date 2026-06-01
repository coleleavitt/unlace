// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7350
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7350 jmp     cs:off_19190
//
// Resolved target: is_defarg
// Target address:  0x196C0
// GOT/IAT slot:    0x19190
// Slot symbol:     off_19190
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

