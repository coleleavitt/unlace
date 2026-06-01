// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x93F0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x93F0 jmp     cs:off_261E0
//
// Resolved target: add_cref
// Target address:  0x26508
// GOT/IAT slot:    0x261E0
// Slot symbol:     off_261E0
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

