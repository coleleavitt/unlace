// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6850
// Name:            .read_ioports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6850 jmp     cs:off_24410
//
// Resolved target: read_ioports
// Target address:  0x26200
// GOT/IAT slot:    0x24410
// Slot symbol:     off_24410
// Target type:     <no type info>
// ============================================================

void .read_ioports(/* see target signature */)
{
    // Tail-call to read_ioports via GOT/IAT indirection
    return read_ioports(/* forwarded args */);
}

