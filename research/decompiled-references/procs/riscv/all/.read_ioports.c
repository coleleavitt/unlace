// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA10
// Name:            .read_ioports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA10 jmp     cs:off_354F0
//
// Resolved target: read_ioports
// Target address:  0x35B58
// GOT/IAT slot:    0x354F0
// Slot symbol:     off_354F0
// Target type:     <no type info>
// ============================================================

void .read_ioports(/* see target signature */)
{
    // Tail-call to read_ioports via GOT/IAT indirection
    return read_ioports(/* forwarded args */);
}

