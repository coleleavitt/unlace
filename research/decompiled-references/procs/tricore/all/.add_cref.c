// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6800
// Name:            .add_cref
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6800 jmp     cs:off_243E8
//
// Resolved target: add_cref
// Target address:  0x261D8
// GOT/IAT slot:    0x243E8
// Slot symbol:     off_243E8
// Target type:     <no type info>
// ============================================================

void .add_cref(/* see target signature */)
{
    // Tail-call to add_cref via GOT/IAT indirection
    return add_cref(/* forwarded args */);
}

