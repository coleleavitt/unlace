// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7760
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7760 jmp     cs:off_19398
//
// Resolved target: add_cref
// Target address:  0x198E0
// GOT/IAT slot:    0x19398
// Slot symbol:     off_19398
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

