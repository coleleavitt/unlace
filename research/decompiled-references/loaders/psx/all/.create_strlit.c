// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2380
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2380 jmp     cs:off_A1A8
//
// Resolved target: create_strlit
// Target address:  0xA470
// GOT/IAT slot:    0xA1A8
// Slot symbol:     off_A1A8
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

