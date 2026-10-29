// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DCB0
// Name:            .dstr_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DCB0 jmp     cs:off_B3640
//
// Resolved target: dstr_tinfo
// Target address:  0xB3E20
// GOT/IAT slot:    0xB3640
// Slot symbol:     off_B3640
// Target type:     <no type info>
// ============================================================

void .dstr_tinfo(/* see target signature */)
{
    // Tail-call to dstr_tinfo via GOT/IAT indirection
    return dstr_tinfo(/* forwarded args */);
}

