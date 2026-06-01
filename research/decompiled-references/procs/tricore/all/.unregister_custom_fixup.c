// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6200
// Name:            .unregister_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6200 jmp     cs:off_240E8
//
// Resolved target: unregister_custom_fixup
// Target address:  0x25EB8
// GOT/IAT slot:    0x240E8
// Slot symbol:     off_240E8
// Target type:     <no type info>
// ============================================================

void .unregister_custom_fixup(/* see target signature */)
{
    // Tail-call to unregister_custom_fixup via GOT/IAT indirection
    return unregister_custom_fixup(/* forwarded args */);
}

