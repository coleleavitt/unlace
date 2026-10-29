// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2260
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2260 jmp     cs:off_15118
//
// Resolved target: create_strlit
// Target address:  0x15318
// GOT/IAT slot:    0x15118
// Slot symbol:     off_15118
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

