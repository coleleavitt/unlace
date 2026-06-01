// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19060
// Name:            .get_tinfo_size
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19060 jmp     cs:off_75018
//
// Resolved target: get_tinfo_size
// Target address:  0x75868
// GOT/IAT slot:    0x75018
// Slot symbol:     off_75018
// Target type:     <no type info>
// ============================================================

void .get_tinfo_size(/* see target signature */)
{
    // Tail-call to get_tinfo_size via GOT/IAT indirection
    return get_tinfo_size(/* forwarded args */);
}

