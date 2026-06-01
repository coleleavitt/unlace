// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4310
// Name:            .patch_fixup_value
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4310 jmp     cs:off_23170
//
// Resolved target: patch_fixup_value
// Target address:  0x23590
// GOT/IAT slot:    0x23170
// Slot symbol:     off_23170
// Target type:     <no type info>
// ============================================================

void .patch_fixup_value(/* see target signature */)
{
    // Tail-call to patch_fixup_value via GOT/IAT indirection
    return patch_fixup_value(/* forwarded args */);
}

