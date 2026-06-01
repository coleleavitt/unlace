// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAC00
// Name:            .qmake_full_path
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAC00 jmp     cs:off_CA5E8
//
// Resolved target: qmake_full_path
// Target address:  0xD0F48
// GOT/IAT slot:    0xCA5E8
// Slot symbol:     off_CA5E8
// Target type:     <no type info>
// ============================================================

void .qmake_full_path(/* see target signature */)
{
    // Tail-call to qmake_full_path via GOT/IAT indirection
    return qmake_full_path(/* forwarded args */);
}

