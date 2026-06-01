// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7170
// Name:            .unregister_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7170 jmp     cs:off_190A0
//
// Resolved target: unregister_custom_fixup
// Target address:  0x195D0
// GOT/IAT slot:    0x190A0
// Slot symbol:     off_190A0
// Target type:     <no type info>
// ============================================================

void .unregister_custom_fixup(/* see target signature */)
{
    // Tail-call to unregister_custom_fixup via GOT/IAT indirection
    return unregister_custom_fixup(/* forwarded args */);
}

