// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19870
// Name:            .add_regarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19870 jmp     cs:off_75420
//
// Resolved target: add_regarg
// Target address:  0x75C70
// GOT/IAT slot:    0x75420
// Slot symbol:     off_75420
// Target type:     <no type info>
// ============================================================

void .add_regarg(/* see target signature */)
{
    // Tail-call to add_regarg via GOT/IAT indirection
    return add_regarg(/* forwarded args */);
}

