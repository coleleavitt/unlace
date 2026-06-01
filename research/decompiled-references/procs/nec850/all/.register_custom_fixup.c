// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9300
// Name:            .register_custom_fixup
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9300 jmp     cs:off_2E168
//
// Resolved target: register_custom_fixup
// Target address:  0x2E7D8
// GOT/IAT slot:    0x2E168
// Slot symbol:     off_2E168
// Target type:     <no type info>
// ============================================================

void .register_custom_fixup(/* see target signature */)
{
    // Tail-call to register_custom_fixup via GOT/IAT indirection
    return register_custom_fixup(/* forwarded args */);
}

