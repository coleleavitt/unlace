// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA4E0
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA4E0 jmp     cs:off_CA258
//
// Resolved target: read_config2
// Target address:  0xD0B90
// GOT/IAT slot:    0xCA258
// Slot symbol:     off_CA258
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}

