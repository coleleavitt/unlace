// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3380
// Name:            .set_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3380 jmp     cs:off_291A8
//
// Resolved target: set_tinfo_property4
// Target address:  0x29560
// GOT/IAT slot:    0x291A8
// Slot symbol:     off_291A8
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property4(/* see target signature */)
{
    // Tail-call to set_tinfo_property4 via GOT/IAT indirection
    return set_tinfo_property4(/* forwarded args */);
}

