// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x92F0
// Name:            .set_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x92F0 jmp     cs:off_26160
//
// Resolved target: set_tinfo_property4
// Target address:  0x26478
// GOT/IAT slot:    0x26160
// Slot symbol:     off_26160
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property4(/* see target signature */)
{
    // Tail-call to set_tinfo_property4 via GOT/IAT indirection
    return set_tinfo_property4(/* forwarded args */);
}

