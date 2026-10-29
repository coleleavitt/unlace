// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9060
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9060 jmp     cs:off_2E018
//
// Resolved target: get_tinfo_size
// Target address:  0x2E688
// GOT/IAT slot:    0x2E018
// Slot symbol:     off_2E018
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

