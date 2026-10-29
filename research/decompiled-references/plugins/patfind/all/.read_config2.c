// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2150
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2150 jmp     cs:off_13090
//
// Resolved target: read_config2
// Target address:  0x13328
// GOT/IAT slot:    0x13090
// Slot symbol:     off_13090
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}

