// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D50
// Name:            .read_ioports
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D50 jmp     cs:off_75690
//
// Resolved target: read_ioports
// Target address:  0x75EF8
// GOT/IAT slot:    0x75690
// Slot symbol:     off_75690
// Target type:     <no type info>
// ============================================================

void .read_ioports(/* see target signature */)
{
    // Tail-call to read_ioports via GOT/IAT indirection
    return read_ioports(/* forwarded args */);
}

