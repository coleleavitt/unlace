// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2160
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2160 jmp     cs:off_A098
//
// Resolved target: read_config2
// Target address:  0xB368
// GOT/IAT slot:    0xA098
// Slot symbol:     off_A098
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}

