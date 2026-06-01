// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x45C0
// Name:            .set_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x45C0 jmp     cs:off_282C8
//
// Resolved target: set_tinfo_property4
// Target address:  0x29C68
// GOT/IAT slot:    0x282C8
// Slot symbol:     off_282C8
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property4(/* see target signature */)
{
    // Tail-call to set_tinfo_property4 via GOT/IAT indirection
    return set_tinfo_property4(/* forwarded args */);
}

