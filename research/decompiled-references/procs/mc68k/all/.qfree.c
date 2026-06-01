// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6720
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6720 jmp     cs:off_1D378
//
// Resolved target: qfree
// Target address:  0x1D888
// GOT/IAT slot:    0x1D378
// Slot symbol:     off_1D378
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

