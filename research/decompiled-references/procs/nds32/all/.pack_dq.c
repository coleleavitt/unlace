// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8830
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8830 jmp     cs:off_2A400
//
// Resolved target: pack_dq
// Target address:  0x2A990
// GOT/IAT slot:    0x2A400
// Slot symbol:     off_2A400
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

