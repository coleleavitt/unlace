// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6770
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6770 jmp     cs:off_8D3A0
//
// Resolved target: qfree
// Target address:  0x8D968
// GOT/IAT slot:    0x8D3A0
// Slot symbol:     off_8D3A0
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

