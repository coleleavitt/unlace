// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x87B0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x87B0 jmp     cs:off_2A3C0
//
// Resolved target: add_cref
// Target address:  0x2A948
// GOT/IAT slot:    0x2A3C0
// Slot symbol:     off_2A3C0
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

