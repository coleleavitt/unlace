// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20780
// Name:            .register_custom_refinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20780 jmp     cs:off_953A8
//
// Resolved target: register_custom_refinfo
// Target address:  0x95DE0
// GOT/IAT slot:    0x953A8
// Slot symbol:     off_953A8
// Target type:     <no type info>
// ============================================================

void .register_custom_refinfo(/* see target signature */)
{
    // Tail-call to register_custom_refinfo via GOT/IAT indirection
    return register_custom_refinfo(/* forwarded args */);
}

