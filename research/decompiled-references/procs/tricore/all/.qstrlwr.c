// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x62B0
// Name:            .qstrlwr
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x62B0 jmp     cs:off_24140
//
// Resolved target: qstrlwr
// Target address:  0x25F10
// GOT/IAT slot:    0x24140
// Slot symbol:     off_24140
// Target type:     <no type info>
// ============================================================

void .qstrlwr(/* see target signature */)
{
    // Tail-call to qstrlwr via GOT/IAT indirection
    return qstrlwr(/* forwarded args */);
}

