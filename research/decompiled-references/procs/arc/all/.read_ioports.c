// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8910
// Name:            .read_ioports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8910 jmp     cs:off_2A470
//
// Resolved target: read_ioports
// Target address:  0x2BE98
// GOT/IAT slot:    0x2A470
// Slot symbol:     off_2A470
// Target type:     <no type info>
// ============================================================

void .read_ioports(/* see target signature */)
{
    // Tail-call to read_ioports via GOT/IAT indirection
    return read_ioports(/* forwarded args */);
}

