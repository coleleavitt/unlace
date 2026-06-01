// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D890
// Name:            .set_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D890 jmp     cs:off_B3430
//
// Resolved target: set_tinfo_property4
// Target address:  0xB3BD8
// GOT/IAT slot:    0xB3430
// Slot symbol:     off_B3430
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property4(/* see target signature */)
{
    // Tail-call to set_tinfo_property4 via GOT/IAT indirection
    return set_tinfo_property4(/* forwarded args */);
}

