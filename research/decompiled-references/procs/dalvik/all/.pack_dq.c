// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x5580
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x5580 jmp     cs:off_1A2A8
//
// Resolved target: pack_dq
// Target address:  0x1A650
// GOT/IAT slot:    0x1A2A8
// Slot symbol:     off_1A2A8
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

