// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4410
// Name:            .get_idainfo_by_type
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4410 jmp     cs:off_281F0
//
// Resolved target: get_idainfo_by_type
// Target address:  0x29B88
// GOT/IAT slot:    0x281F0
// Slot symbol:     off_281F0
// Target type:     <no type info>
// ============================================================

void .get_idainfo_by_type(/* see target signature */)
{
    // Tail-call to get_idainfo_by_type via GOT/IAT indirection
    return get_idainfo_by_type(/* forwarded args */);
}

