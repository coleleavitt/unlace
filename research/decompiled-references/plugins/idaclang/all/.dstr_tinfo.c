// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x35A0
// Name:            .dstr_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x35A0 jmp     cs:off_292B8
//
// Resolved target: dstr_tinfo
// Target address:  0x29688
// GOT/IAT slot:    0x292B8
// Slot symbol:     off_292B8
// Target type:     <no type info>
// ============================================================

void .dstr_tinfo(/* see target signature */)
{
    // Tail-call to dstr_tinfo via GOT/IAT indirection
    return dstr_tinfo(/* forwarded args */);
}

