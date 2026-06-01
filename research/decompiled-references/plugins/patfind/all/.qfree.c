// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23D0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23D0 jmp     cs:off_131D0
//
// Resolved target: qfree
// Target address:  0x13488
// GOT/IAT slot:    0x131D0
// Slot symbol:     off_131D0
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

