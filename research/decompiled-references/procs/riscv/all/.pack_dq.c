// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA30
// Name:            .pack_dq
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA30 jmp     cs:off_35500
//
// Resolved target: pack_dq
// Target address:  0x35B70
// GOT/IAT slot:    0x35500
// Slot symbol:     off_35500
// Target type:     <no type info>
// ============================================================

void .pack_dq(/* see target signature */)
{
    // Tail-call to pack_dq via GOT/IAT indirection
    return pack_dq(/* forwarded args */);
}

