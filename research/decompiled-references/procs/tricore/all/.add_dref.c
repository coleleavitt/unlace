// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x60C0
// Name:            .add_dref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x60C0 jmp     cs:off_24048
//
// Resolved target: add_dref
// Target address:  0x25E18
// GOT/IAT slot:    0x24048
// Slot symbol:     off_24048
// Target type:     <no type info>
// ============================================================

void .add_dref(/* see target signature */)
{
    // Tail-call to add_dref via GOT/IAT indirection
    return add_dref(/* forwarded args */);
}

