// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA480
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA480 jmp     cs:off_35228
//
// Resolved target: is_defarg
// Target address:  0x35878
// GOT/IAT slot:    0x35228
// Slot symbol:     off_35228
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

