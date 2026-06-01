// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3420
// Name:            .get_first_fixup_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3420 jmp     cs:off_131F8
//
// Resolved target: get_first_fixup_ea
// Target address:  0x138F8
// GOT/IAT slot:    0x131F8
// Slot symbol:     off_131F8
// Target type:     <no type info>
// ============================================================

void .get_first_fixup_ea(/* see target signature */)
{
    // Tail-call to get_first_fixup_ea via GOT/IAT indirection
    return get_first_fixup_ea(/* forwarded args */);
}

