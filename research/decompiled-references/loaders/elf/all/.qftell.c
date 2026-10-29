// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x9A40
// Name:            .qftell
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x9A40 jmp     cs:off_89508
//
// Resolved target: qftell
// Target address:  0x8C838
// GOT/IAT slot:    0x89508
// Slot symbol:     off_89508
// Target type:     <no type info>
// ============================================================

void .qftell(/* see target signature */)
{
    // Tail-call to qftell via GOT/IAT indirection
    return qftell(/* forwarded args */);
}

