// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8580
// Name:            .remove_tinfo_pointer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8580 jmp     cs:off_2A2A8
//
// Resolved target: remove_tinfo_pointer
// Target address:  0x2BCB8
// GOT/IAT slot:    0x2A2A8
// Slot symbol:     off_2A2A8
// Target type:     <no type info>
// ============================================================

void .remove_tinfo_pointer(/* see target signature */)
{
    // Tail-call to remove_tinfo_pointer via GOT/IAT indirection
    return remove_tinfo_pointer(/* forwarded args */);
}

