// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5740
// Name:            .read_ioports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5740 jmp     cs:off_15388
//
// Resolved target: read_ioports
// Target address:  0x16430
// GOT/IAT slot:    0x15388
// Slot symbol:     off_15388
// Target type:     <no type info>
// ============================================================

void .read_ioports(/* see target signature */)
{
    // Tail-call to read_ioports via GOT/IAT indirection
    return read_ioports(/* forwarded args */);
}

