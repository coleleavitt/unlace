// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x30E0
// Name:            .add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x30E0 jmp     cs:off_28058
//
// Resolved target: add_dref
// Target address:  0x28508
// GOT/IAT slot:    0x28058
// Slot symbol:     off_28058
// Target type:     <no type info>
// ============================================================

void .add_dref(/* see target signature */)
{
    // Tail-call to add_dref via GOT/IAT indirection
    return add_dref(/* forwarded args */);
}

