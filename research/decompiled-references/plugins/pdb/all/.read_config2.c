// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D4A0
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D4A0 jmp     cs:off_B3238
//
// Resolved target: read_config2
// Target address:  0xB39D8
// GOT/IAT slot:    0xB3238
// Slot symbol:     off_B3238
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}

