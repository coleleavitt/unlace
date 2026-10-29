// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9100
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9100 jmp     cs:off_26068
//
// Resolved target: clear_tinfo_t
// Target address:  0x26378
// GOT/IAT slot:    0x26068
// Slot symbol:     off_26068
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

