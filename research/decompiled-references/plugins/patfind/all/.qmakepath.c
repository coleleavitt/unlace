// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0x23B0
// Name:            .qmakepath
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0x23B0 jmp     cs:off_131C0
//
// Resolved target: qmakepath
// Target address:  0x13478
// GOT/IAT slot:    0x131C0
// Slot symbol:     off_131C0
// Target type:     <no type info>
// ============================================================

void .qmakepath(/* see target signature */)
{
    // Tail-call to qmakepath via GOT/IAT indirection
    return qmakepath(/* forwarded args */);
}

