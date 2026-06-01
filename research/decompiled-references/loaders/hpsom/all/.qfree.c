// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1270
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1270 jmp     cs:off_5120
//
// Resolved target: qfree
// Target address:  0x52C8
// GOT/IAT slot:    0x5120
// Slot symbol:     off_5120
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

