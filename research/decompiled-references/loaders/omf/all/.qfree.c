// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3680
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3680 jmp     cs:off_14328
//
// Resolved target: qfree
// Target address:  0x14938
// GOT/IAT slot:    0x14328
// Slot symbol:     off_14328
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

