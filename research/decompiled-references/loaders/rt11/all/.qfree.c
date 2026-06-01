// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1290
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1290 jmp     cs:off_5130
//
// Resolved target: qfree
// Target address:  0x52C0
// GOT/IAT slot:    0x5130
// Slot symbol:     off_5130
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

