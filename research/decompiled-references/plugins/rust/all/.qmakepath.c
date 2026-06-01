// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23F0
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23F0 jmp     cs:off_A1E0
//
// Resolved target: qmakepath
// Target address:  0xB4D0
// GOT/IAT slot:    0xA1E0
// Slot symbol:     off_A1E0
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

