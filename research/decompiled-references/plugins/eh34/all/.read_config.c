// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x64B0
// Name:            .read_config
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x64B0 jmp     cs:off_8D240
//
// Resolved target: read_config
// Target address:  0x8D7D8
// GOT/IAT slot:    0x8D240
// Slot symbol:     off_8D240
// Target type:     <no type info>
// ============================================================

void .read_config(/* see target signature */)
{
    // Tail-call to read_config via GOT/IAT indirection
    return read_config(/* forwarded args */);
}

