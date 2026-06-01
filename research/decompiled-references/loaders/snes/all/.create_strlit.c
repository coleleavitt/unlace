// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1180
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1180 jmp     cs:off_70A8
//
// Resolved target: create_strlit
// Target address:  0x71A0
// GOT/IAT slot:    0x70A8
// Slot symbol:     off_70A8
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

