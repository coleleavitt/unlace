// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19930
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19930 jmp     cs:off_75480
//
// Resolved target: get_tinfo_details
// Target address:  0x75CD0
// GOT/IAT slot:    0x75480
// Slot symbol:     off_75480
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

