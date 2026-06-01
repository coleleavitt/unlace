// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7590
// Name:            .find_ioport
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7590 jmp     cs:off_192B0
//
// Resolved target: find_ioport
// Target address:  0x197E8
// GOT/IAT slot:    0x192B0
// Slot symbol:     off_192B0
// Target type:     <no type info>
// ============================================================

void .find_ioport(/* see target signature */)
{
    // Tail-call to find_ioport via GOT/IAT indirection
    return find_ioport(/* forwarded args */);
}

