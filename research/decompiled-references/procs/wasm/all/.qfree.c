// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9400
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9400 jmp     cs:off_261E8
//
// Resolved target: qfree
// Target address:  0x26518
// GOT/IAT slot:    0x261E8
// Slot symbol:     off_261E8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

