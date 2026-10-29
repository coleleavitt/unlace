// ============================================================
// THUNK / TRAMPOLINE
// ============================================================
// Address:         0xAA50
// Name:            .qfindclose
// Size:            6 bytes (1 instructions)
// Disassembly:
//   0xAA50 jmp     cs:off_CA510
//
// Resolved target: qfindclose
// Target address:  0xD0E58
// GOT/IAT slot:    0xCA510
// Slot symbol:     off_CA510
// Target type:     <no type info>
// ============================================================

void .qfindclose(/* see target signature */)
{
    // Tail-call to qfindclose via GOT/IAT indirection
    return qfindclose(/* forwarded args */);
}

