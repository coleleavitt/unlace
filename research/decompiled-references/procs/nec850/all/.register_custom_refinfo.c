// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x94A0
// Name:            .register_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x94A0 jmp     cs:off_2E238
//
// Resolved target: register_custom_refinfo
// Target address:  0x2E8A8
// GOT/IAT slot:    0x2E238
// Slot symbol:     off_2E238
// Target type:     <no type info>
// ============================================================

void .register_custom_refinfo(/* see target signature */)
{
    // Tail-call to register_custom_refinfo via GOT/IAT indirection
    return register_custom_refinfo(/* forwarded args */);
}

