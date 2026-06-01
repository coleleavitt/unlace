// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xACA0
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xACA0 jmp     cs:off_CA638
//
// Resolved target: is_spec_ea
// Target address:  0xD0F98
// GOT/IAT slot:    0xCA638
// Slot symbol:     off_CA638
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

