// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x6830
// Name:            .qftell
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x6830 jmp     cs:off_2D400
//
// Resolved target: qftell
// Target address:  0x2D920
// GOT/IAT slot:    0x2D400
// Slot symbol:     off_2D400
// Target type:     <no type info>
// ============================================================

void .qftell(/* see target signature */)
{
    // Tail-call to qftell via GOT/IAT indirection
    return qftell(/* forwarded args */);
}

