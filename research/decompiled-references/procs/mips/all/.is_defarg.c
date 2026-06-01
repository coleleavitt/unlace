// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19590
// Name:            .is_defarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19590 jmp     cs:off_752B0
//
// Resolved target: is_defarg
// Target address:  0x75B00
// GOT/IAT slot:    0x752B0
// Slot symbol:     off_752B0
// Target type:     <no type info>
// ============================================================

void .is_defarg(/* see target signature */)
{
    // Tail-call to is_defarg via GOT/IAT indirection
    return is_defarg(/* forwarded args */);
}

