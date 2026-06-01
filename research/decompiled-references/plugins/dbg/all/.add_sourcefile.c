// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3330
// Name:            .add_sourcefile
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3330 jmp     cs:off_13180
//
// Resolved target: add_sourcefile
// Target address:  0x13500
// GOT/IAT slot:    0x13180
// Slot symbol:     off_13180
// Target type:     <no type info>
// ============================================================

void .add_sourcefile(/* see target signature */)
{
    // Tail-call to add_sourcefile via GOT/IAT indirection
    return add_sourcefile(/* forwarded args */);
}

