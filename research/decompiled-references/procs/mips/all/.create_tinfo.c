// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19BE0
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19BE0 jmp     cs:off_755D8
//
// Resolved target: create_tinfo
// Target address:  0x75E40
// GOT/IAT slot:    0x755D8
// Slot symbol:     off_755D8
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

