// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6410
// Name:            .register_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6410 jmp     cs:off_241F0
//
// Resolved target: register_custom_refinfo
// Target address:  0x25FC0
// GOT/IAT slot:    0x241F0
// Slot symbol:     off_241F0
// Target type:     <no type info>
// ============================================================

void .register_custom_refinfo(/* see target signature */)
{
    // Tail-call to register_custom_refinfo via GOT/IAT indirection
    return register_custom_refinfo(/* forwarded args */);
}

