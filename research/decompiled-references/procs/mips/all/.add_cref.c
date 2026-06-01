// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19CD0
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19CD0 jmp     cs:off_75650
//
// Resolved target: add_cref
// Target address:  0x75EB8
// GOT/IAT slot:    0x75650
// Slot symbol:     off_75650
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

