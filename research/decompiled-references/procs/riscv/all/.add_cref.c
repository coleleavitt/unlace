// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA9E0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA9E0 jmp     cs:off_354D8
//
// Resolved target: add_cref
// Target address:  0x35B40
// GOT/IAT slot:    0x354D8
// Slot symbol:     off_354D8
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

