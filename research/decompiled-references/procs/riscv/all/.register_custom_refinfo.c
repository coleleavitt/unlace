// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xA510
// Name:            .register_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xA510 jmp     cs:off_35270
//
// Resolved target: register_custom_refinfo
// Target address:  0x358C0
// GOT/IAT slot:    0x35270
// Slot symbol:     off_35270
// Target type:     <no type info>
// ============================================================

void .register_custom_refinfo(/* see target signature */)
{
    // Tail-call to register_custom_refinfo via GOT/IAT indirection
    return register_custom_refinfo(/* forwarded args */);
}

