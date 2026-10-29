// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7240
// Name:            .register_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7240 jmp     cs:off_19108
//
// Resolved target: register_custom_fixup
// Target address:  0x19638
// GOT/IAT slot:    0x19108
// Slot symbol:     off_19108
// Target type:     <no type info>
// ============================================================

void .register_custom_fixup(/* see target signature */)
{
    // Tail-call to register_custom_fixup via GOT/IAT indirection
    return register_custom_fixup(/* forwarded args */);
}

