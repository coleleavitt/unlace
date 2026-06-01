// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9070
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9070 jmp     cs:off_89020
//
// Resolved target: get_tinfo_size
// Target address:  0x8C320
// GOT/IAT slot:    0x89020
// Slot symbol:     off_89020
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

