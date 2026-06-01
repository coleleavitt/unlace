// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1230
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1230 jmp     cs:off_5100
//
// Resolved target: qfree
// Target address:  0x5268
// GOT/IAT slot:    0x5100
// Slot symbol:     off_5100
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

