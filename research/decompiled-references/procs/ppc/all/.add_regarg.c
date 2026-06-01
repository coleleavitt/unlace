// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x209F0
// Name:            .add_regarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x209F0 jmp     cs:off_954E0
//
// Resolved target: add_regarg
// Target address:  0x95F18
// GOT/IAT slot:    0x954E0
// Slot symbol:     off_954E0
// Target type:     <no type info>
// ============================================================

void .add_regarg(/* see target signature */)
{
    // Tail-call to add_regarg via GOT/IAT indirection
    return add_regarg(/* forwarded args */);
}

