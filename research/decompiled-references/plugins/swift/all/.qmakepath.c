// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x4890
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x4890 jmp     cs:off_28430
//
// Resolved target: qmakepath
// Target address:  0x29DF0
// GOT/IAT slot:    0x28430
// Slot symbol:     off_28430
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

