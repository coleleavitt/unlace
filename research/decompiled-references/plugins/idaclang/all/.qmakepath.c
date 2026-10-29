// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x3570
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x3570 jmp     cs:off_292A0
//
// Resolved target: qmakepath
// Target address:  0x29670
// GOT/IAT slot:    0x292A0
// Slot symbol:     off_292A0
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

