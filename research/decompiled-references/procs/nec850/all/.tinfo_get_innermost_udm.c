// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99F0
// Name:            .tinfo_get_innermost_udm
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99F0 jmp     cs:off_2E4E0
//
// Resolved target: tinfo_get_innermost_udm
// Target address:  0x2EB70
// GOT/IAT slot:    0x2E4E0
// Slot symbol:     off_2E4E0
// Target type:     <no type info>
// ============================================================

void .tinfo_get_innermost_udm(/* see target signature */)
{
    // Tail-call to tinfo_get_innermost_udm via GOT/IAT indirection
    return tinfo_get_innermost_udm(/* forwarded args */);
}

