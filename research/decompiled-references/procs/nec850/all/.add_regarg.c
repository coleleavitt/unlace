// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9600
// Name:            .add_regarg
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9600 jmp     cs:off_2E2E8
//
// Resolved target: add_regarg
// Target address:  0x2E958
// GOT/IAT slot:    0x2E2E8
// Slot symbol:     off_2E2E8
// Target type:     <no type info>
// ============================================================

void .add_regarg(/* see target signature */)
{
    // Tail-call to add_regarg via GOT/IAT indirection
    return add_regarg(/* forwarded args */);
}

