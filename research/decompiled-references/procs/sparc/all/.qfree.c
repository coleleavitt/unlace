// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x77C0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x77C0 jmp     cs:off_193C8
//
// Resolved target: qfree
// Target address:  0x19918
// GOT/IAT slot:    0x193C8
// Slot symbol:     off_193C8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

