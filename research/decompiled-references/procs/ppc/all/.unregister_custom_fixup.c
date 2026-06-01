// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20390
// Name:            .unregister_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20390 jmp     cs:off_951B0
//
// Resolved target: unregister_custom_fixup
// Target address:  0x95BE8
// GOT/IAT slot:    0x951B0
// Slot symbol:     off_951B0
// Target type:     <no type info>
// ============================================================

void .unregister_custom_fixup(/* see target signature */)
{
    // Tail-call to unregister_custom_fixup via GOT/IAT indirection
    return unregister_custom_fixup(/* forwarded args */);
}

