// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x69B0
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x69B0 jmp     cs:off_2F4C0
//
// Resolved target: is_spec_ea
// Target address:  0x2FB50
// GOT/IAT slot:    0x2F4C0
// Slot symbol:     off_2F4C0
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

