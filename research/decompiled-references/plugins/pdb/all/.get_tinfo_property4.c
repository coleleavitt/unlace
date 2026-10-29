// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1D3F0
// Name:            .get_tinfo_property4
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1D3F0 jmp     cs:off_B31E0
//
// Resolved target: get_tinfo_property4
// Target address:  0xB3978
// GOT/IAT slot:    0xB31E0
// Slot symbol:     off_B31E0
// Target type:     <no type info>
// ============================================================

void .get_tinfo_property4(/* see target signature */)
{
    // Tail-call to get_tinfo_property4 via GOT/IAT indirection
    return get_tinfo_property4(/* forwarded args */);
}

