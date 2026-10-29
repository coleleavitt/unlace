// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73C0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73C0 jmp     cs:off_261C8
//
// Resolved target: add_cref
// Target address:  0x26498
// GOT/IAT slot:    0x261C8
// Slot symbol:     off_261C8
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

