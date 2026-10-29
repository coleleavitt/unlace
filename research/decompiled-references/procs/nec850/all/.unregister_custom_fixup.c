// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9260
// Name:            .unregister_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9260 jmp     cs:off_2E118
//
// Resolved target: unregister_custom_fixup
// Target address:  0x2E788
// GOT/IAT slot:    0x2E118
// Slot symbol:     off_2E118
// Target type:     <no type info>
// ============================================================

void .unregister_custom_fixup(/* see target signature */)
{
    // Tail-call to unregister_custom_fixup via GOT/IAT indirection
    return unregister_custom_fixup(/* forwarded args */);
}

