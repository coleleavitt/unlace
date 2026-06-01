// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20160
// Name:            .add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20160 jmp     cs:off_95098
//
// Resolved target: add_dref
// Target address:  0x95AC8
// GOT/IAT slot:    0x95098
// Slot symbol:     off_95098
// Target type:     <no type info>
// ============================================================

void .add_dref(/* see target signature */)
{
    // Tail-call to add_dref via GOT/IAT indirection
    return add_dref(/* forwarded args */);
}

