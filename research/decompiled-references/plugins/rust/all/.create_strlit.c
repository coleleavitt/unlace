// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2370
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2370 jmp     cs:off_A1A0
//
// Resolved target: create_strlit
// Target address:  0xB488
// GOT/IAT slot:    0xA1A0
// Slot symbol:     off_A1A0
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

