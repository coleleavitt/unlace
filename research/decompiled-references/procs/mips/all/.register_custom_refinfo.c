// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19620
// Name:            .register_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19620 jmp     cs:off_752F8
//
// Resolved target: register_custom_refinfo
// Target address:  0x75B48
// GOT/IAT slot:    0x752F8
// Slot symbol:     off_752F8
// Target type:     <no type info>
// ============================================================

void .register_custom_refinfo(/* see target signature */)
{
    // Tail-call to register_custom_refinfo via GOT/IAT indirection
    return register_custom_refinfo(/* forwarded args */);
}

