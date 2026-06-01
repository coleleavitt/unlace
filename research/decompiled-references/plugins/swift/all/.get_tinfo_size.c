// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4060
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4060 jmp     cs:off_28018
//
// Resolved target: get_tinfo_size
// Target address:  0x299A8
// GOT/IAT slot:    0x28018
// Slot symbol:     off_28018
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

