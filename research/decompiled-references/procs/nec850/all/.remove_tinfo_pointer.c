// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x95D0
// Name:            .remove_tinfo_pointer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x95D0 jmp     cs:off_2E2D0
//
// Resolved target: remove_tinfo_pointer
// Target address:  0x2E940
// GOT/IAT slot:    0x2E2D0
// Slot symbol:     off_2E2D0
// Target type:     <no type info>
// ============================================================

void .remove_tinfo_pointer(/* see target signature */)
{
    // Tail-call to remove_tinfo_pointer via GOT/IAT indirection
    return remove_tinfo_pointer(/* forwarded args */);
}

