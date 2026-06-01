// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA840
// Name:            .unregister_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA840 jmp     cs:off_35408
//
// Resolved target: unregister_custom_refinfo
// Target address:  0x35A68
// GOT/IAT slot:    0x35408
// Slot symbol:     off_35408
// Target type:     <no type info>
// ============================================================

void .unregister_custom_refinfo(/* see target signature */)
{
    // Tail-call to unregister_custom_refinfo via GOT/IAT indirection
    return unregister_custom_refinfo(/* forwarded args */);
}

