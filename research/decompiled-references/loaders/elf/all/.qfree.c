// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9AD0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9AD0 jmp     cs:off_89550
//
// Resolved target: qfree
// Target address:  0x8C880
// GOT/IAT slot:    0x89550
// Slot symbol:     off_89550
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

