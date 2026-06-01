// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1280
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1280 jmp     cs:off_5128
//
// Resolved target: qfree
// Target address:  0x5380
// GOT/IAT slot:    0x5128
// Slot symbol:     off_5128
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

