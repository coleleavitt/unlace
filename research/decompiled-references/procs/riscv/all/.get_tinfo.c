// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA990
// Name:            .get_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA990 jmp     cs:off_354B0
//
// Resolved target: get_tinfo
// Target address:  0x35B18
// GOT/IAT slot:    0x354B0
// Slot symbol:     off_354B0
// Target type:     <no type info>
// ============================================================

void .get_tinfo(/* see target signature */)
{
    // Tail-call to get_tinfo via GOT/IAT indirection
    return get_tinfo(/* forwarded args */);
}

