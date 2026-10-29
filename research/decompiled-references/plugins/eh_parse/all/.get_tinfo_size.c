// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6080
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6080 jmp     cs:off_2F028
//
// Resolved target: get_tinfo_size
// Target address:  0x2F698
// GOT/IAT slot:    0x2F028
// Slot symbol:     off_2F028
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

