// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x36C0
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x36C0 jmp     cs:off_28348
//
// Resolved target: create_strlit
// Target address:  0x28810
// GOT/IAT slot:    0x28348
// Slot symbol:     off_28348
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

