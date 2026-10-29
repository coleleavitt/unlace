// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x19D80
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x19D80 jmp     cs:off_756A8
//
// Resolved target: qfree
// Target address:  0x75F18
// GOT/IAT slot:    0x756A8
// Slot symbol:     off_756A8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

