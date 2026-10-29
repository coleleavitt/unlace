// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99D0
// Name:            .is_spec_ea
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99D0 jmp     cs:off_894D0
//
// Resolved target: is_spec_ea
// Target address:  0x8C800
// GOT/IAT slot:    0x894D0
// Slot symbol:     off_894D0
// Target type:     <no type info>
// ============================================================

void .is_spec_ea(/* see target signature */)
{
    // Tail-call to is_spec_ea via GOT/IAT indirection
    return is_spec_ea(/* forwarded args */);
}

