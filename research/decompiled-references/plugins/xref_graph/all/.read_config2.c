// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x163A0
// Name:            .read_config2
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x163A0 jmp     cs:off_4F1B8
//
// Resolved target: read_config2
// Target address:  0x500C8
// GOT/IAT slot:    0x4F1B8
// Slot symbol:     off_4F1B8
// Target type:     <no type info>
// ============================================================

void .read_config2(/* see target signature */)
{
    // Tail-call to read_config2 via GOT/IAT indirection
    return read_config2(/* forwarded args */);
}

