// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62A0
// Name:            .register_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62A0 jmp     cs:off_24138
//
// Resolved target: register_custom_fixup
// Target address:  0x25F08
// GOT/IAT slot:    0x24138
// Slot symbol:     off_24138
// Target type:     <no type info>
// ============================================================

void .register_custom_fixup(/* see target signature */)
{
    // Tail-call to register_custom_fixup via GOT/IAT indirection
    return register_custom_fixup(/* forwarded args */);
}

