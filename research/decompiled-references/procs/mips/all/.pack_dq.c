// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D70
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D70 jmp     cs:off_756A0
//
// Resolved target: pack_dq
// Target address:  0x75F10
// GOT/IAT slot:    0x756A0
// Slot symbol:     off_756A0
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

