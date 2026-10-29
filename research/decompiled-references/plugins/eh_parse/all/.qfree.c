// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6A70
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6A70 jmp     cs:off_2F520
//
// Resolved target: qfree
// Target address:  0x2FBB8
// GOT/IAT slot:    0x2F520
// Slot symbol:     off_2F520
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

