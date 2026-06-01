// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x11D0
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x11D0 jmp     cs:off_40D0
//
// Resolved target: qmakepath
// Target address:  0x5220
// GOT/IAT slot:    0x40D0
// Slot symbol:     off_40D0
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

