// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DC20
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DC20 jmp     cs:off_B35F8
//
// Resolved target: pack_dq
// Target address:  0xB3DD0
// GOT/IAT slot:    0xB35F8
// Slot symbol:     off_B35F8
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

