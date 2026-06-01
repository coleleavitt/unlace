// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x20F40
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x20F40 jmp     cs:off_95788
//
// Resolved target: pack_dq
// Target address:  0x961E0
// GOT/IAT slot:    0x95788
// Slot symbol:     off_95788
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

