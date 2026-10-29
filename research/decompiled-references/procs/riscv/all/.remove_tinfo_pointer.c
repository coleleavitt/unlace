// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA640
// Name:            .remove_tinfo_pointer
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA640 jmp     cs:off_35308
//
// Resolved target: remove_tinfo_pointer
// Target address:  0x35958
// GOT/IAT slot:    0x35308
// Slot symbol:     off_35308
// Target type:     <no type info>
// ============================================================

void .remove_tinfo_pointer(/* see target signature */)
{
    // Tail-call to remove_tinfo_pointer via GOT/IAT indirection
    return remove_tinfo_pointer(/* forwarded args */);
}

