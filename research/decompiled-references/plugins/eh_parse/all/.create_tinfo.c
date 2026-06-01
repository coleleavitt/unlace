// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x68E0
// Name:            .create_tinfo
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x68E0 jmp     cs:off_2F458
//
// Resolved target: create_tinfo
// Target address:  0x2FAE0
// GOT/IAT slot:    0x2F458
// Slot symbol:     off_2F458
// Target type:     <no type info>
// ============================================================

void .create_tinfo(/* see target signature */)
{
    // Tail-call to create_tinfo via GOT/IAT indirection
    return create_tinfo(/* forwarded args */);
}

