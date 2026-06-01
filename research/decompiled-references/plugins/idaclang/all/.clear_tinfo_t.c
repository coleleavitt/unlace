// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x31A0
// Name:            .clear_tinfo_t
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x31A0 jmp     cs:off_290B8
//
// Resolved target: clear_tinfo_t
// Target address:  0x29468
// GOT/IAT slot:    0x290B8
// Slot symbol:     off_290B8
// Target type:     <no type info>
// ============================================================

void .clear_tinfo_t(/* see target signature */)
{
    // Tail-call to clear_tinfo_t via GOT/IAT indirection
    return clear_tinfo_t(/* forwarded args */);
}

