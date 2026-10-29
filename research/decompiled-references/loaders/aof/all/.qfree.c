// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2300
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2300 jmp     cs:off_7168
//
// Resolved target: qfree
// Target address:  0x7328
// GOT/IAT slot:    0x7168
// Slot symbol:     off_7168
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

