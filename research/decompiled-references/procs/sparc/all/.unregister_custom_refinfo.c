// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x7620
// Name:            .unregister_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x7620 jmp     cs:off_192F8
//
// Resolved target: unregister_custom_refinfo
// Target address:  0x19838
// GOT/IAT slot:    0x192F8
// Slot symbol:     off_192F8
// Target type:     <no type info>
// ============================================================

void .unregister_custom_refinfo(/* see target signature */)
{
    // Tail-call to unregister_custom_refinfo via GOT/IAT indirection
    return unregister_custom_refinfo(/* forwarded args */);
}

