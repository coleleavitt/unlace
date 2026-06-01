// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6640
// Name:            .create_strlit
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6640 jmp     cs:off_1D308
//
// Resolved target: create_strlit
// Target address:  0x1D810
// GOT/IAT slot:    0x1D308
// Slot symbol:     off_1D308
// Target type:     <no type info>
// ============================================================

void .create_strlit(/* see target signature */)
{
    // Tail-call to create_strlit via GOT/IAT indirection
    return create_strlit(/* forwarded args */);
}

