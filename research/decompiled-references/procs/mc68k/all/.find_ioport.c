// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6510
// Name:            .find_ioport
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6510 jmp     cs:off_1D270
//
// Resolved target: find_ioport
// Target address:  0x1D768
// GOT/IAT slot:    0x1D270
// Slot symbol:     off_1D270
// Target type:     <no type info>
// ============================================================

void .find_ioport(/* see target signature */)
{
    // Tail-call to find_ioport via GOT/IAT indirection
    return find_ioport(/* forwarded args */);
}

