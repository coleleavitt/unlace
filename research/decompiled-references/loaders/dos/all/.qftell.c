// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x2610
// Name:            .qftell
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x2610 jmp     cs:off_B2F0
//
// Resolved target: qftell
// Target address:  0xB7A8
// GOT/IAT slot:    0xB2F0
// Slot symbol:     off_B2F0
// Target type:     <no type info>
// ============================================================

void .qftell(/* see target signature */)
{
    // Tail-call to qftell via GOT/IAT indirection
    return qftell(/* forwarded args */);
}

