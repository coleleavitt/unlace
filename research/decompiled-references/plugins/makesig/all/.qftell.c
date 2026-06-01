// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3630
// Name:            .qftell
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3630 jmp     cs:off_20300
//
// Resolved target: qftell
// Target address:  0x21C38
// GOT/IAT slot:    0x20300
// Slot symbol:     off_20300
// Target type:     <no type info>
// ============================================================

void .qftell(/* see target signature */)
{
    // Tail-call to qftell via GOT/IAT indirection
    return qftell(/* forwarded args */);
}

