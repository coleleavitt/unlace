// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x66E0
// Name:            .get_tinfo_details
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x66E0 jmp     cs:off_2F358
//
// Resolved target: get_tinfo_details
// Target address:  0x2F9C8
// GOT/IAT slot:    0x2F358
// Slot symbol:     off_2F358
// Target type:     <no type info>
// ============================================================

void .get_tinfo_details(/* see target signature */)
{
    // Tail-call to get_tinfo_details via GOT/IAT indirection
    return get_tinfo_details(/* forwarded args */);
}

