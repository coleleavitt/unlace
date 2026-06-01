// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA330
// Name:            .register_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA330 jmp     cs:off_35180
//
// Resolved target: register_custom_fixup
// Target address:  0x357D0
// GOT/IAT slot:    0x35180
// Slot symbol:     off_35180
// Target type:     <no type info>
// ============================================================

void .register_custom_fixup(/* see target signature */)
{
    // Tail-call to register_custom_fixup via GOT/IAT indirection
    return register_custom_fixup(/* forwarded args */);
}

