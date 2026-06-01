// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x1DBE0
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x1DBE0 jmp     cs:off_B35D8
//
// Resolved target: qmakepath
// Target address:  0xB3DB0
// GOT/IAT slot:    0xB35D8
// Slot symbol:     off_B35D8
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

