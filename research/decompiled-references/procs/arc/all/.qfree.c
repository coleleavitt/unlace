// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x8920
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x8920 jmp     cs:off_2A478
//
// Resolved target: qfree
// Target address:  0x2BEA8
// GOT/IAT slot:    0x2A478
// Slot symbol:     off_2A478
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

