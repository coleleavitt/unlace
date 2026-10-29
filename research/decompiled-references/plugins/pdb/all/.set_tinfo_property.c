// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D5B0
// Name:            .set_tinfo_property
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D5B0 jmp     cs:off_B32C0
//
// Resolved target: set_tinfo_property
// Target address:  0xB3A60
// GOT/IAT slot:    0xB32C0
// Slot symbol:     off_B32C0
// Target type:     <no type info>
// ============================================================

void .set_tinfo_property(/* see target signature */)
{
    // Tail-call to set_tinfo_property via GOT/IAT indirection
    return set_tinfo_property(/* forwarded args */);
}

