// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x21B0
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x21B0 jmp     cs:off_70C0
//
// Resolved target: qfree
// Target address:  0x7210
// GOT/IAT slot:    0x70C0
// Slot symbol:     off_70C0
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

