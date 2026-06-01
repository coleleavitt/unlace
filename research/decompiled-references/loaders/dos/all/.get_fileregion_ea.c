// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2170
// Name:            .get_fileregion_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2170 jmp     cs:off_B0A0
//
// Resolved target: get_fileregion_ea
// Target address:  0xB538
// GOT/IAT slot:    0xB0A0
// Slot symbol:     off_B0A0
// Target type:     <no type info>
// ============================================================

void .get_fileregion_ea(/* see target signature */)
{
    // Tail-call to get_fileregion_ea via GOT/IAT indirection
    return get_fileregion_ea(/* forwarded args */);
}

