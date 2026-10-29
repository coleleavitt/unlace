// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3620
// Name:            .qfree
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3620 jmp     cs:off_132F8
//
// Resolved target: qfree
// Target address:  0x136A0
// GOT/IAT slot:    0x132F8
// Slot symbol:     off_132F8
// Target type:     <no type info>
// ============================================================

void .qfree(/* see target signature */)
{
    // Tail-call to qfree via GOT/IAT indirection
    return qfree(/* forwarded args */);
}

