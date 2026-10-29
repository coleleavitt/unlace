// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D040
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D040 jmp     cs:off_B3008
//
// Resolved target: get_tinfo_size
// Target address:  0xB3778
// GOT/IAT slot:    0xB3008
// Slot symbol:     off_B3008
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

