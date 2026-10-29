// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66F0
// Name:            .read_ioports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66F0 jmp     cs:off_1D360
//
// Resolved target: read_ioports
// Target address:  0x1D868
// GOT/IAT slot:    0x1D360
// Slot symbol:     off_1D360
// Target type:     <no type info>
// ============================================================

void .read_ioports(/* see target signature */)
{
    // Tail-call to read_ioports via GOT/IAT indirection
    return read_ioports(/* forwarded args */);
}

