// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x80C0
// Name:            .add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x80C0 jmp     cs:off_2A048
//
// Resolved target: add_dref
// Target address:  0x2A5B8
// GOT/IAT slot:    0x2A048
// Slot symbol:     off_2A048
// Target type:     <no type info>
// ============================================================

void .add_dref(/* see target signature */)
{
    // Tail-call to add_dref via GOT/IAT indirection
    return add_dref(/* forwarded args */);
}

