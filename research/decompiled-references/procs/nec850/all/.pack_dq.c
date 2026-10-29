// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x99D0
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x99D0 jmp     cs:off_2E4D0
//
// Resolved target: pack_dq
// Target address:  0x2EB60
// GOT/IAT slot:    0x2E4D0
// Slot symbol:     off_2E4D0
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

