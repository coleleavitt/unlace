// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA050
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA050 jmp     cs:off_35010
//
// Resolved target: get_tinfo_size
// Target address:  0x35660
// GOT/IAT slot:    0x35010
// Slot symbol:     off_35010
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

