// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x192F0
// Name:            .unregister_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x192F0 jmp     cs:off_75160
//
// Resolved target: unregister_custom_fixup
// Target address:  0x759B0
// GOT/IAT slot:    0x75160
// Slot symbol:     off_75160
// Target type:     <no type info>
// ============================================================

void .unregister_custom_fixup(/* see target signature */)
{
    // Tail-call to unregister_custom_fixup via GOT/IAT indirection
    return unregister_custom_fixup(/* forwarded args */);
}

