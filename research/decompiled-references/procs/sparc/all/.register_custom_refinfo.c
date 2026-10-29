// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x73D0
// Name:            .register_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x73D0 jmp     cs:off_191D0
//
// Resolved target: register_custom_refinfo
// Target address:  0x19700
// GOT/IAT slot:    0x191D0
// Slot symbol:     off_191D0
// Target type:     <no type info>
// ============================================================

void .register_custom_refinfo(/* see target signature */)
{
    // Tail-call to register_custom_refinfo via GOT/IAT indirection
    return register_custom_refinfo(/* forwarded args */);
}

