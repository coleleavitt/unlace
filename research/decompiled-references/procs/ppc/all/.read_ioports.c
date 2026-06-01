// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F20
// Name:            .read_ioports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F20 jmp     cs:off_95778
//
// Resolved target: read_ioports
// Target address:  0x961C8
// GOT/IAT slot:    0x95778
// Slot symbol:     off_95778
// Target type:     <no type info>
// ============================================================

void .read_ioports(/* see target signature */)
{
    // Tail-call to read_ioports via GOT/IAT indirection
    return read_ioports(/* forwarded args */);
}

